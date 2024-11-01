// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSpline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DGAUDIOSPLINE_AudioSpline_generated_h
#error "AudioSpline.generated.h already included, missing '#pragma once' in AudioSpline.h"
#endif
#define DGAUDIOSPLINE_AudioSpline_generated_h

#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_SPARSE_DATA
#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_ACCESSORS
#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioSpline(); \
	friend struct Z_Construct_UClass_AAudioSpline_Statics; \
public: \
	DECLARE_CLASS(AAudioSpline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DGAudioSpline"), NO_API) \
	DECLARE_SERIALIZER(AAudioSpline)


#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioSpline(AAudioSpline&&); \
	NO_API AAudioSpline(const AAudioSpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioSpline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAudioSpline) \
	NO_API virtual ~AAudioSpline();


#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_18_PROLOG
#define FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_SPARSE_DATA \
	FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_ACCESSORS \
	FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_INCLASS_NO_PURE_DECLS \
	FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DGAUDIOSPLINE_API UClass* StaticClass<class AAudioSpline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SPL_Meter_Plugins_DGAudioSpline_Source_DGAudioSpline_Public_AudioSpline_h


#define FOREACH_ENUM_PLAYERDETECTIONTYPE(op) \
	op(TriggerVolume) \
	op(Distance) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
