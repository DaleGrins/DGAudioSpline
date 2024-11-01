// Copyright Dale Grinsell 2024. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioSpline.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(AudioSpline, Warning, All);

UENUM(BlueprintType)
enum PlayerDetectionType
{
	TriggerVolume UMETA(DisplayName = "TriggerVolume"),
	Distance UMETA(DisplayName = "Distance"),
};

UCLASS()
class DGAUDIOSPLINE_API AAudioSpline : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAudioSpline();

	virtual void Destroyed() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "bIsSplineEditable"))
	float AttenuationDistance = 4000.f;

	UPROPERTY(EditDefaultsOnly)
	class USplineComponent* Spline;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UAudioComponent* SplineAudio;

	APawn* PlayerPawn;

	//How often the spline will update in seconds. 0 will update every frame.
	UPROPERTY(EditAnywhere, meta = (EditCondition = "bIsSplineEditable"))
	float UpdateFrequency = 0.f;


private:

#if WITH_EDITORONLY_DATA

	//Sets the distance increment the debug line uses. For example, 100 draws a line every 100 units.
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float DistanceIncrement = 70.f;

	//Sets the colour of the debug line.
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	FColor DebugLineColour = FColor::Blue;

	//Sets the thickness of the debug line.
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float DebugLineThickness = 20.f;

	//Sets the colour of the debug points.
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	FColor DebugPointColour = FColor::Red;

	//Sets the thickness of the debug point.
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float DebugPointSize = 20.f;

	//Ignore. This is only for the purpose of enabling/disabling when in PIE
	UPROPERTY(VisibleDefaultsOnly, Category = "Editability")
	bool bIsDebugEditable = true;

	//Enable/disable debug
	UPROPERTY(EditAnywhere, Category = "Debug", meta = (EditCondition = "bIsDebugEditable"))
	bool bShowDebug = false;

	int32 SplineLineID = 0;

	void ClearBatchedLines();

#endif

	FVector PreviousClosestPoint {0.f, 0.f, 0.f};

	FVector ClosestSplineLocation;

	float DistanceBetweenPoints;

	//Should the sound's location interpolate between values that are a defined distance apart.
	UPROPERTY(EditAnywhere, Category = "Interpolation")
	bool bUseInterpolation = false;


	//Interpolation speed in units per second.
	//Experiment with this to get a smooth transition between values which are of Distance to Interp distance apart.
	UPROPERTY(EditAnywhere, Category = "Interpolation", meta = (EditCondition = "bUseInterpolation", EditConditionHides))
	float InterpSpeed = 2000.f;

	//How far in CMs the sound would need to jump to use interpolation
	UPROPERTY(EditAnywhere, Category = "Interpolation", meta = (EditCondition = "bUseInterpolation", EditConditionHides))
	float DistanceToInterp = 50.f;

	UPROPERTY(EditAnywhere, Category = "Player Detection Type", meta = (EditCondition = "bIsSplineEditable"))
	TEnumAsByte<PlayerDetectionType> DetectionType = TriggerVolume;

	class UBoxComponent* BoxTrig;

	//Ignore. This is only for the purpose of enabling/disabling when in PIE
	UPROPERTY(VisibleDefaultsOnly, Category = "Editability")
	bool bIsBoxVisibilityEditable = false;

	UPROPERTY(EditAnywhere, Category = "Player Detection Type", meta = (EditCondition = "bIsBoxVisibilityEditable", EditConditionHides))
	bool bBoxTriggerVisible = false;

	void SetupBoxTrig();

	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	bool CalculateDistanceTickFrequency();

	//Max player speed in Unreal units per second
	UPROPERTY(EditAnywhere, Category = "Player Detection Type", meta = (EditCondition = "!bIsBoxVisibilityEditable", EditConditionHides))
	float MaxPlayerSpeed = 600.f;

	//Ignore. This is only for the purpose of enabling/disabling when in PIE
	UPROPERTY(VisibleDefaultsOnly, Category = "Editability")
	bool bIsSplineEditable = true;

	//Places an audio component a set distance along the spline either side of the closest player point on the spline.
	//The start time for each sound must be set otherwise, phasing is likely.
	//Sends are post effect.
	UPROPERTY(EditAnywhere, Category = "Spline Widening", meta = (EditCondition = "bIsSplineEditable"))
	bool bUseSplineWidening = false;

	//Audio amount to send to side channels. Uses manual send which disregards distance to source buses.
	UPROPERTY(EditAnywhere, Category = "Spline Widening", 
		meta = (ClampMin = "0", ClampMax = "1"), 
		meta = (EditCondition = "bUseSplineWidening && bIsSplineEditable", EditConditionHides))
	float AdjacentSoundVolume = 1.f;

	//The distance along the spline between the closest point to the player and the adjacent sounds.
	UPROPERTY(EditAnywhere, Category = "Spline Widening",
		meta = (EditCondition = "bUseSplineWidening", EditConditionHides))
	float DistanceFromClosestPoint = 500.f;

	//MetaSound parameter name for the start time.
	UPROPERTY(EditAnywhere, Category = "Spline Widening", meta = (EditCondition = "bUseSplineWidening && bIsSplineEditable", EditConditionHides))
	FName ParameterName = FName(TEXT("StartTime"));

	//Set the start time of adjacent sound 1
	UPROPERTY(EditAnywhere, Category = "Spline Widening", meta = (EditCondition = "bUseSplineWidening && bIsSplineEditable", EditConditionHides))
	float AdjacentSound1_StartTime = 5.f;

	//Set the start time of adjacent sound 2
	UPROPERTY(EditAnywhere, Category = "Spline Widening", meta = (EditCondition = "bUseSplineWidening && bIsSplineEditable", EditConditionHides))
	float AdjacentSound2_StartTime = 10.f;

	//When the adjacent sounds reach the end of the spline, should their volume attenuate based on their distance
	//to the centre sound.
	UPROPERTY(EditAnywhere, Category = "Spline Widening", meta = (EditCondition = "bUseSplineWidening && bIsSplineEditable", EditConditionHides))
	bool bUseEndVolumeAttenuation = true;

	UAudioComponent* SplineLeftSound = nullptr;

	UAudioComponent* SplineRightSound = nullptr;

	FVector PreviousLeftSoundLoc;
	FVector PreviousRightSoundLoc;

};
