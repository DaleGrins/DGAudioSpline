// Copyright Dale Grinsell 2024. All Rights Reserved. 


#include "AudioSpline.h"

#include "Components/SplineComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Components/LineBatchComponent.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"

DEFINE_LOG_CATEGORY(AudioSpline);

// Sets default values
AAudioSpline::AAudioSpline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	RootComponent = Spline;

	SplineAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("SplineAudio"));
	SplineAudio->SetupAttachment(RootComponent);

}

void AAudioSpline::Destroyed()
{
	Super::Destroyed();

#if WITH_EDITOR
	if (SplineLineID != 0)
	{
		ClearBatchedLines();
		SplineLineID = 0;
	}
#endif
}

// Called when the game starts or when spawned
void AAudioSpline::BeginPlay()
{
	Super::BeginPlay();

	PrimaryActorTick.TickInterval = 0.f;
	SetActorTickEnabled(true);

	if (bUseSplineWidening == true)
	{
		SplineLeftSound = Cast<UAudioComponent>(AddComponentByClass(UAudioComponent::StaticClass(), 
			false, 
			FTransform::Identity, 
			false));
		SplineRightSound = Cast<UAudioComponent>(AddComponentByClass(UAudioComponent::StaticClass(), 
			false, 
			FTransform::Identity, 
			false));

		USoundBase* Sound = SplineAudio->GetSound();	
		SplineLeftSound->Sound = Sound;
		SplineRightSound->Sound = Sound;

		SplineLeftSound->SetWorldLocation(Spline->GetLocationAtDistanceAlongSpline(0.f, ESplineCoordinateSpace::World));
		SplineRightSound->SetWorldLocation(Spline->GetLocationAtDistanceAlongSpline(Spline->GetSplineLength(), ESplineCoordinateSpace::World));

		SplineLeftSound->Play();
		SplineRightSound->Play();

		SplineLeftSound->SetFloatParameter(ParameterName, AdjacentSound1_StartTime);
		SplineRightSound->SetFloatParameter(ParameterName, AdjacentSound2_StartTime);

		SplineLeftSound->SetVolumeMultiplier(AdjacentSoundVolume);
		SplineRightSound->SetVolumeMultiplier(AdjacentSoundVolume);
	}

	if (DetectionType == PlayerDetectionType::TriggerVolume)
	{
		SetupBoxTrig();

		if (BoxTrig)
		{
			BoxTrig->OnComponentBeginOverlap.AddDynamic(this, &AAudioSpline::OnComponentBeginOverlap);
			BoxTrig->OnComponentEndOverlap.AddDynamic(this, &AAudioSpline::OnComponentEndOverlap);
		}
	}

#if WITH_EDITOR
	bIsDebugEditable = false;
#endif

	bIsBoxVisibilityEditable = false;
	bIsSplineEditable = false;
}

void AAudioSpline::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);

	#if WITH_EDITOR
		bIsDebugEditable = true;
	#endif

	if (DetectionType == PlayerDetectionType::TriggerVolume)
	{
		bIsBoxVisibilityEditable = true;
	}
	else
	{
		bIsBoxVisibilityEditable = false;
	}

	bIsSplineEditable = true;
}

// Called every frame
void AAudioSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!PlayerPawn)
	{
		PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		if (!PlayerPawn)
		{
			UE_LOG(AudioSpline, Warning, TEXT("Cannot find the player pawn"));
			return;
		}
		else
		{
			if (DetectionType == PlayerDetectionType::TriggerVolume)
			{
				TArray<AActor*> OverlapActors;
				BoxTrig->GetOverlappingActors(OverlapActors, APawn::StaticClass());

				bool bPlayerIsOverlapping = false;
				if (OverlapActors.Num() > 0)
				{
					for (AActor* Actor : OverlapActors)
					{
						if (Actor == PlayerPawn)
						{
							SetActorTickEnabled(true);
							bPlayerIsOverlapping = true;
							break;
						}
					}
				}
				if (!bPlayerIsOverlapping)
				{
					SetActorTickEnabled(false);
				}

				PrimaryActorTick.TickInterval = UpdateFrequency;
			}
		}
	}

	if (DetectionType == PlayerDetectionType::Distance)
	{
		if (!CalculateDistanceTickFrequency())
		{
			return;
		}
	}

	//Initialise the closest point.
	if (PreviousClosestPoint == FVector(0.f, 0.f, 0.f))
	{
		ClosestSplineLocation = Spline->FindLocationClosestToWorldLocation(PlayerPawn->GetActorLocation(), ESplineCoordinateSpace::World);
		SplineAudio->SetWorldLocation(ClosestSplineLocation);

		PreviousClosestPoint = ClosestSplineLocation;
		return;
	}

	//Get distance between previous and new closest points
	ClosestSplineLocation = Spline->FindLocationClosestToWorldLocation(PlayerPawn->GetActorLocation(), ESplineCoordinateSpace::World);
	DistanceBetweenPoints = FVector::Dist(PreviousClosestPoint, ClosestSplineLocation);

	bool bInterpAdjacentSounds = false;
	if (bUseInterpolation && DistanceBetweenPoints >= DistanceToInterp)
	{
		//Interp speed is units per second.
		FVector InterpVec = FMath::VInterpConstantTo(PreviousClosestPoint,
			ClosestSplineLocation,
			FMath::Max(PrimaryActorTick.TickInterval, GetWorld()->GetDeltaSeconds()),
			InterpSpeed);

		SplineAudio->SetWorldLocation(InterpVec);

		PreviousClosestPoint = InterpVec;

		bInterpAdjacentSounds = true;
	}
	else
	{
		SplineAudio->SetWorldLocation(ClosestSplineLocation);
		PreviousClosestPoint = ClosestSplineLocation;
	}

	//All spline widening logic
	if (bUseSplineWidening)
	{
		float DistAlongSpline = Spline->GetDistanceAlongSplineAtLocation(ClosestSplineLocation, ESplineCoordinateSpace::World);
		float SplineLength = Spline->GetSplineLength();

		float SplineLocLeft = DistAlongSpline - DistanceFromClosestPoint;
		float SplineLocRight = DistAlongSpline + DistanceFromClosestPoint;

		float LeftSoundDistance = 0.f;
		float RightSoundDistance = 0.f;
		if (bUseEndVolumeAttenuation)
		{
			if (SplineLocLeft > 0.f)
			{
				LeftSoundDistance = SplineLocLeft;
				SplineLeftSound->SetVolumeMultiplier(1.f);
			}
			else
			{
				LeftSoundDistance = 0.f;
				float VolumeAdjustment = FMath::GetMappedRangeValueClamped(FVector2D(DistanceFromClosestPoint * -1.f, 0.f), 
					FVector2D(0.f, 1.f), 
					SplineLocLeft);
				SplineLeftSound->SetVolumeMultiplier(VolumeAdjustment);
			}

			if (SplineLocRight < SplineLength)
			{
				RightSoundDistance = SplineLocRight;
				SplineRightSound->SetVolumeMultiplier(1.f);
			}
			else
			{
				RightSoundDistance = SplineLength;
				float VolumeAdjustment = FMath::GetMappedRangeValueClamped(FVector2D(SplineLength + DistanceFromClosestPoint, SplineLength),
					FVector2D(0.f, 1.f),
					SplineLocRight);
				SplineRightSound->SetVolumeMultiplier(VolumeAdjustment);
			}
		}
		else
		{
			LeftSoundDistance = SplineLocLeft > 0.f ? SplineLocLeft : 0.f;
			RightSoundDistance = SplineLocRight < SplineLength ? SplineLocRight : SplineLength;
		}

		FVector LeftSoundLocation = Spline->GetLocationAtDistanceAlongSpline(LeftSoundDistance, ESplineCoordinateSpace::World);
		FVector RightSoundLocation = Spline->GetLocationAtDistanceAlongSpline(RightSoundDistance, ESplineCoordinateSpace::World);

		if (bInterpAdjacentSounds)
		{
			//Left sound
			FVector InterpVecLeft = FMath::VInterpConstantTo(PreviousLeftSoundLoc,
				LeftSoundLocation,
				FMath::Max(PrimaryActorTick.TickInterval, GetWorld()->GetDeltaSeconds()),
				InterpSpeed);

			SplineLeftSound->SetWorldLocation(InterpVecLeft);

			PreviousLeftSoundLoc = InterpVecLeft;

			//Right sound
			FVector InterpVecRight = FMath::VInterpConstantTo(PreviousRightSoundLoc,
				RightSoundLocation,
				FMath::Max(PrimaryActorTick.TickInterval, GetWorld()->GetDeltaSeconds()),
				InterpSpeed);

			SplineRightSound->SetWorldLocation(InterpVecRight);

			PreviousRightSoundLoc = InterpVecRight;
		}
		else
		{
			SplineLeftSound->SetWorldLocation(LeftSoundLocation);
			SplineRightSound->SetWorldLocation(RightSoundLocation);

			PreviousLeftSoundLoc = LeftSoundLocation;
			PreviousRightSoundLoc = RightSoundLocation;
		}
	}
}

void AAudioSpline::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	#if WITH_EDITOR

	//If line debug exists, clear it.
	if (SplineLineID != 0)
	{
		ClearBatchedLines();
		SplineLineID = 0;
	}

	if (bShowDebug)
	{
		ULineBatchComponent* const LineBatcher = GetWorld()->PersistentLineBatcher;

		SplineLineID = 7000000 + GetUniqueID();

		//Create debug lines along spline
		float PreviousDistanceLocation = 0.0f;
		float NewDistanceLocation = DistanceIncrement;

		while (!(Spline->GetSplineLength() - NewDistanceLocation < DistanceIncrement))
		{
			FVector LineStart = Spline->GetLocationAtDistanceAlongSpline(PreviousDistanceLocation, ESplineCoordinateSpace::World);
			FVector LineEnd = Spline->GetLocationAtDistanceAlongSpline(NewDistanceLocation, ESplineCoordinateSpace::World);

			LineBatcher->BatchedLines.Emplace(LineStart, LineEnd, DebugLineColour, -1.f, DebugLineThickness, 0U, SplineLineID);

			PreviousDistanceLocation = NewDistanceLocation;
			NewDistanceLocation = DistanceIncrement + NewDistanceLocation;
		}

		FVector LineStart = Spline->GetLocationAtDistanceAlongSpline(PreviousDistanceLocation, ESplineCoordinateSpace::World);
		FVector LineEnd = Spline->GetLocationAtDistanceAlongSpline(Spline->GetSplineLength(), ESplineCoordinateSpace::World);

		LineBatcher->BatchedLines.Emplace(LineStart, LineEnd, DebugLineColour, -1.f, DebugLineThickness, 0U, SplineLineID);

		//Create debug spheres at spline points
		for (int32 i = 0; i <= Spline->GetNumberOfSplinePoints(); i++)
		{
			FVector SplinePointLocation = Spline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World);
			LineBatcher->BatchedPoints.Emplace(SplinePointLocation, DebugPointColour, DebugPointSize, -1.f, 0U, SplineLineID);
		}

		Cast<UActorComponent>(LineBatcher)->MarkRenderStateDirty();
	}
	#endif

	if (DetectionType == PlayerDetectionType::TriggerVolume)
	{
		SetupBoxTrig();
	}
	else
	{
		bIsBoxVisibilityEditable = false;

		if (BoxTrig)
		{
			BoxTrig->DestroyComponent();
			BoxTrig = nullptr;
		}
	}
}

#if WITH_EDITOR
void AAudioSpline::ClearBatchedLines()
{
	ULineBatchComponent* const LineBatcher = GetWorld()->PersistentLineBatcher;
	LineBatcher->ClearBatch(SplineLineID);
}
#endif

void AAudioSpline::SetupBoxTrig()
{
	bIsBoxVisibilityEditable = true;

	//Marked for garbage collection after every construction so creating each time regardless of if BoxTrig is null.
	UActorComponent* BoxAC = AddComponentByClass(UBoxComponent::StaticClass(), false, FTransform::Identity, false);
	BoxTrig = Cast<UBoxComponent>(BoxAC);

	float PreviousDistanceLocation = 0.0f;
	float NewDistanceLocation = 50.f;

	//Add start and end points to array
	TArray<FVector> SplineLocations;
	SplineLocations.Add(Spline->GetLocationAtDistanceAlongSpline(Spline->GetSplineLength(), ESplineCoordinateSpace::World));
	SplineLocations.Add(Spline->GetLocationAtDistanceAlongSpline(0.f, ESplineCoordinateSpace::World));

	while (!(Spline->GetSplineLength() - NewDistanceLocation < 50.f))
	{
		FVector VectorToAdd = Spline->GetLocationAtDistanceAlongSpline(NewDistanceLocation, ESplineCoordinateSpace::World);
		SplineLocations.Add(VectorToAdd);

		NewDistanceLocation = NewDistanceLocation + 50.f;
	}

	FVector MinV = SplineLocations[0];
	FVector MaxV = SplineLocations[0];

	for (const FVector& SL : SplineLocations)
	{
		MinV.X = FMath::Min(MinV.X, SL.X);
		MaxV.X = FMath::Max(MaxV.X, SL.X);

		MinV.Y = FMath::Min(MinV.Y, SL.Y);
		MaxV.Y = FMath::Max(MaxV.Y, SL.Y);

		MinV.Z = FMath::Min(MinV.Z, SL.Z);
		MaxV.Z = FMath::Max(MaxV.Z, SL.Z);
	}

	//Box trigger mid point based on spline points
	FVector SplineMidPoint = (MinV + MaxV) / 2.f;

	if (BoxTrig)
	{
		BoxTrig->SetWorldLocation(SplineMidPoint);

		//Box trigger extents based on spline points
		BoxTrig->SetBoxExtent(((MaxV - MinV) / 2.f) + AttenuationDistance);

		BoxTrig->SetLineThickness(10.f);

		if (bBoxTriggerVisible)
		{
			BoxTrig->SetVisibility(true);
		}
		else
		{
			BoxTrig->SetVisibility(false);
		}
	}
}

void AAudioSpline::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (PlayerPawn)
	{
		if (OtherActor == PlayerPawn)
		{
			SetActorTickEnabled(true);
		}
	}
}

void AAudioSpline::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (PlayerPawn)
	{
		if (OtherActor == PlayerPawn)
		{
			SetActorTickEnabled(false);
		}
	}
}

bool AAudioSpline::CalculateDistanceTickFrequency()
{

	//Default pawn max speed is 1200
	if (PlayerPawn)
	{
		FVector PawnLoc = PlayerPawn->GetActorLocation();
		FVector SplineLoc = Spline->FindLocationClosestToWorldLocation(PawnLoc, ESplineCoordinateSpace::World);
		float PlayerToSl = FVector::Dist(SplineLoc, PawnLoc);
		float DistToAttenuation = PlayerToSl - AttenuationDistance;


		//GEngine->AddOnScreenDebugMessage(3, 0.5f, FColor::Red, FString::Printf(TEXT("DistToAttenuation = %f"), DistToAttenuation));

		//If player is inside the attenuation radius, use UpdateFrequency
		if ((AttenuationDistance + 1.f) >= PlayerToSl)
		{
			PrimaryActorTick.TickInterval = UpdateFrequency;
			return true;
		}

		//Ensuring update time does not get set lower than delta seconds
		float MinTickValue = FMath::Max(UpdateFrequency, GetWorld()->GetDeltaSeconds());

		//If outside the attenuation radius, use calculate tick time
		PrimaryActorTick.TickInterval = FMath::Clamp(DistToAttenuation / (MaxPlayerSpeed * 3.f), MinTickValue, 20.f);
		float ticktime = PrimaryActorTick.TickInterval;
		return false;
	}

	return false;
}


