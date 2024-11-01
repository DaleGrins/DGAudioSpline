// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGAudioSpline/Public/AudioSpline.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSpline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DGAUDIOSPLINE_API UClass* Z_Construct_UClass_AAudioSpline();
	DGAUDIOSPLINE_API UClass* Z_Construct_UClass_AAudioSpline_NoRegister();
	DGAUDIOSPLINE_API UEnum* Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_DGAudioSpline();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PlayerDetectionType;
	static UEnum* PlayerDetectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PlayerDetectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PlayerDetectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType, (UObject*)Z_Construct_UPackage__Script_DGAudioSpline(), TEXT("PlayerDetectionType"));
		}
		return Z_Registration_Info_UEnum_PlayerDetectionType.OuterSingleton;
	}
	template<> DGAUDIOSPLINE_API UEnum* StaticEnum<PlayerDetectionType>()
	{
		return PlayerDetectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::Enumerators[] = {
		{ "TriggerVolume", (int64)TriggerVolume },
		{ "Distance", (int64)Distance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "Distance" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
		{ "TriggerVolume.DisplayName", "TriggerVolume" },
		{ "TriggerVolume.Name", "TriggerVolume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DGAudioSpline,
		nullptr,
		"PlayerDetectionType",
		"PlayerDetectionType",
		Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType()
	{
		if (!Z_Registration_Info_UEnum_PlayerDetectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PlayerDetectionType.InnerSingleton, Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PlayerDetectionType.InnerSingleton;
	}
	DEFINE_FUNCTION(AAudioSpline::execOnComponentEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioSpline::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AAudioSpline::StaticRegisterNativesAAudioSpline()
	{
		UClass* Class = AAudioSpline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &AAudioSpline::execOnComponentBeginOverlap },
			{ "OnComponentEndOverlap", &AAudioSpline::execOnComponentEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics
	{
		struct AudioSpline_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AudioSpline_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioSpline_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioSpline, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::AudioSpline_eventOnComponentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::AudioSpline_eventOnComponentBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics
	{
		struct AudioSpline_eventOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSpline_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioSpline, nullptr, "OnComponentEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::AudioSpline_eventOnComponentEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::AudioSpline_eventOnComponentEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAudioSpline);
	UClass* Z_Construct_UClass_AAudioSpline_NoRegister()
	{
		return AAudioSpline::StaticClass();
	}
	struct Z_Construct_UClass_AAudioSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugLineColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPointColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPointColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPointSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugPointSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDebugEditable_MetaData[];
#endif
		static void NewProp_bIsDebugEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDebugEditable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[];
#endif
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[];
#endif
		static void NewProp_bUseInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToInterp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToInterp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBoxVisibilityEditable_MetaData[];
#endif
		static void NewProp_bIsBoxVisibilityEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBoxVisibilityEditable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoxTriggerVisible_MetaData[];
#endif
		static void NewProp_bBoxTriggerVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxTriggerVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayerSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSplineEditable_MetaData[];
#endif
		static void NewProp_bIsSplineEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSplineEditable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSplineWidening_MetaData[];
#endif
		static void NewProp_bUseSplineWidening_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSplineWidening;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentSoundVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjacentSoundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromClosestPoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromClosestPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentSound1_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjacentSound1_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentSound2_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjacentSound2_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEndVolumeAttenuation_MetaData[];
#endif
		static void NewProp_bUseEndVolumeAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEndVolumeAttenuation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAudioSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DGAudioSpline,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAudioSpline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioSpline_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 735389705
		{ &Z_Construct_UFunction_AAudioSpline_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 2369895636
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioSpline.h" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_AttenuationDistance_MetaData[] = {
		{ "Category", "AudioSpline" },
		{ "EditCondition", "bIsSplineEditable" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_AttenuationDistance = { "AttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, AttenuationDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_AttenuationDistance_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_AttenuationDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "AudioSpline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_Spline_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_Spline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_SplineAudio_MetaData[] = {
		{ "Category", "AudioSpline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_SplineAudio = { "SplineAudio", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, SplineAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_SplineAudio_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_SplineAudio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "AudioSpline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How often the spline will update in seconds. 0 will update every frame.\n" },
#endif
		{ "EditCondition", "bIsSplineEditable" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often the spline will update in seconds. 0 will update every frame." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, UpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_UpdateFrequency_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_UpdateFrequency_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceIncrement_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the distance increment the debug line uses. For example, 100 draws a line every 100 units.\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the distance increment the debug line uses. For example, 100 draws a line every 100 units." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceIncrement = { "DistanceIncrement", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DistanceIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceIncrement_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceIncrement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineColour_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the colour of the debug line.\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the colour of the debug line." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineColour = { "DebugLineColour", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DebugLineColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineColour_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineColour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineThickness_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the thickness of the debug line.\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the thickness of the debug line." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineThickness = { "DebugLineThickness", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DebugLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineThickness_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointColour_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the colour of the debug points.\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the colour of the debug points." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointColour = { "DebugPointColour", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DebugPointColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointColour_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointColour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointSize_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the thickness of the debug point.\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the thickness of the debug point." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointSize = { "DebugPointSize", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DebugPointSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointSize_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsDebugEditable_MetaData[] = {
		{ "Category", "Editability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ignore. This is only for the purpose of enabling/disabling when in PIE\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignore. This is only for the purpose of enabling/disabling when in PIE" },
#endif
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsDebugEditable_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bIsDebugEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsDebugEditable = { "bIsDebugEditable", nullptr, (EPropertyFlags)0x0040000800030001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsDebugEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsDebugEditable_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsDebugEditable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bShowDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enable/disable debug\n" },
#endif
		{ "EditCondition", "bIsDebugEditable" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable debug" },
#endif
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bShowDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bShowDebug_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bShowDebug_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseInterpolation_MetaData[] = {
		{ "Category", "Interpolation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Should the sound's location interpolate between values that are a defined distance apart.\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the sound's location interpolate between values that are a defined distance apart." },
#endif
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bUseInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseInterpolation_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseInterpolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Interpolation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Interpolation speed in units per second.\n//Experiment with this to get a smooth transition between values which are of Distance to Interp distance apart.\n" },
#endif
		{ "EditCondition", "bUseInterpolation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolation speed in units per second.\nExperiment with this to get a smooth transition between values which are of Distance to Interp distance apart." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_InterpSpeed_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_InterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceToInterp_MetaData[] = {
		{ "Category", "Interpolation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How far in CMs the sound would need to jump to use interpolation\n" },
#endif
		{ "EditCondition", "bUseInterpolation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far in CMs the sound would need to jump to use interpolation" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceToInterp = { "DistanceToInterp", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DistanceToInterp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceToInterp_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceToInterp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DetectionType_MetaData[] = {
		{ "Category", "Player Detection Type" },
		{ "EditCondition", "bIsSplineEditable" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DetectionType = { "DetectionType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DetectionType), Z_Construct_UEnum_DGAudioSpline_PlayerDetectionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DetectionType_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DetectionType_MetaData) }; // 3322121527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsBoxVisibilityEditable_MetaData[] = {
		{ "Category", "Editability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ignore. This is only for the purpose of enabling/disabling when in PIE\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignore. This is only for the purpose of enabling/disabling when in PIE" },
#endif
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsBoxVisibilityEditable_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bIsBoxVisibilityEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsBoxVisibilityEditable = { "bIsBoxVisibilityEditable", nullptr, (EPropertyFlags)0x0040000000030001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsBoxVisibilityEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsBoxVisibilityEditable_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsBoxVisibilityEditable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bBoxTriggerVisible_MetaData[] = {
		{ "Category", "Player Detection Type" },
		{ "EditCondition", "bIsBoxVisibilityEditable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bBoxTriggerVisible_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bBoxTriggerVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bBoxTriggerVisible = { "bBoxTriggerVisible", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bBoxTriggerVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bBoxTriggerVisible_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bBoxTriggerVisible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_MaxPlayerSpeed_MetaData[] = {
		{ "Category", "Player Detection Type" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Max player speed in Unreal units per second\n" },
#endif
		{ "EditCondition", "!bIsBoxVisibilityEditable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max player speed in Unreal units per second" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_MaxPlayerSpeed = { "MaxPlayerSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, MaxPlayerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_MaxPlayerSpeed_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_MaxPlayerSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsSplineEditable_MetaData[] = {
		{ "Category", "Editability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ignore. This is only for the purpose of enabling/disabling when in PIE\n" },
#endif
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignore. This is only for the purpose of enabling/disabling when in PIE" },
#endif
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsSplineEditable_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bIsSplineEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsSplineEditable = { "bIsSplineEditable", nullptr, (EPropertyFlags)0x0040000000030001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsSplineEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsSplineEditable_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsSplineEditable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseSplineWidening_MetaData[] = {
		{ "Category", "Spline Widening" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Places an audio component a set distance along the spline either side of the closest player point on the spline.\n//The start time for each sound must be set otherwise, phasing is likely.\n//Sends are post effect.\n" },
#endif
		{ "EditCondition", "bIsSplineEditable" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Places an audio component a set distance along the spline either side of the closest player point on the spline.\nThe start time for each sound must be set otherwise, phasing is likely.\nSends are post effect." },
#endif
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseSplineWidening_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bUseSplineWidening = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseSplineWidening = { "bUseSplineWidening", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseSplineWidening_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseSplineWidening_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseSplineWidening_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSoundVolume_MetaData[] = {
		{ "Category", "Spline Widening" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Audio amount to send to side channels. Uses manual send which disregards distance to source buses.\n" },
#endif
		{ "EditCondition", "bUseSplineWidening && bIsSplineEditable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio amount to send to side channels. Uses manual send which disregards distance to source buses." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSoundVolume = { "AdjacentSoundVolume", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, AdjacentSoundVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSoundVolume_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSoundVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceFromClosestPoint_MetaData[] = {
		{ "Category", "Spline Widening" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The distance along the spline between the closest point to the player and the adjacent sounds.\n" },
#endif
		{ "EditCondition", "bUseSplineWidening" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The distance along the spline between the closest point to the player and the adjacent sounds." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceFromClosestPoint = { "DistanceFromClosestPoint", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, DistanceFromClosestPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceFromClosestPoint_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceFromClosestPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Spline Widening" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MetaSound parameter name for the start time.\n" },
#endif
		{ "EditCondition", "bUseSplineWidening && bIsSplineEditable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaSound parameter name for the start time." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_ParameterName_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_ParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound1_StartTime_MetaData[] = {
		{ "Category", "Spline Widening" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the start time of adjacent sound 1\n" },
#endif
		{ "EditCondition", "bUseSplineWidening && bIsSplineEditable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the start time of adjacent sound 1" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound1_StartTime = { "AdjacentSound1_StartTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, AdjacentSound1_StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound1_StartTime_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound1_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound2_StartTime_MetaData[] = {
		{ "Category", "Spline Widening" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the start time of adjacent sound 2\n" },
#endif
		{ "EditCondition", "bUseSplineWidening && bIsSplineEditable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the start time of adjacent sound 2" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound2_StartTime = { "AdjacentSound2_StartTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioSpline, AdjacentSound2_StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound2_StartTime_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound2_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseEndVolumeAttenuation_MetaData[] = {
		{ "Category", "Spline Widening" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//When the adjacent sounds reach the end of the spline, should their volume attenuate based on their distance\n//to the centre sound.\n" },
#endif
		{ "EditCondition", "bUseSplineWidening && bIsSplineEditable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the adjacent sounds reach the end of the spline, should their volume attenuate based on their distance\nto the centre sound." },
#endif
	};
#endif
	void Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseEndVolumeAttenuation_SetBit(void* Obj)
	{
		((AAudioSpline*)Obj)->bUseEndVolumeAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseEndVolumeAttenuation = { "bUseEndVolumeAttenuation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAudioSpline), &Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseEndVolumeAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseEndVolumeAttenuation_MetaData), Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseEndVolumeAttenuation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_AttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_SplineAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_UpdateFrequency,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DebugPointSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsDebugEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bShowDebug,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceToInterp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DetectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsBoxVisibilityEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bBoxTriggerVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_MaxPlayerSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bIsSplineEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseSplineWidening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_DistanceFromClosestPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound1_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_AdjacentSound2_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioSpline_Statics::NewProp_bUseEndVolumeAttenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAudioSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAudioSpline_Statics::ClassParams = {
		&AAudioSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAudioSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AAudioSpline_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioSpline_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAudioSpline()
	{
		if (!Z_Registration_Info_UClass_AAudioSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAudioSpline.OuterSingleton, Z_Construct_UClass_AAudioSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAudioSpline.OuterSingleton;
	}
	template<> DGAUDIOSPLINE_API UClass* StaticClass<AAudioSpline>()
	{
		return AAudioSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioSpline);
	AAudioSpline::~AAudioSpline() {}
	struct Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_Statics::EnumInfo[] = {
		{ PlayerDetectionType_StaticEnum, TEXT("PlayerDetectionType"), &Z_Registration_Info_UEnum_PlayerDetectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3322121527U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAudioSpline, AAudioSpline::StaticClass, TEXT("AAudioSpline"), &Z_Registration_Info_UClass_AAudioSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAudioSpline), 1454604218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_2017696778(TEXT("/Script/DGAudioSpline"),
		Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
