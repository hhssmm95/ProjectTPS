// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
struct FVector;
struct FRotator;
#ifdef PROJECTTPS_HitEffect_generated_h
#error "HitEffect.generated.h already included, missing '#pragma once' in HitEffect.h"
#endif
#define PROJECTTPS_HitEffect_generated_h

#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEffectEnd);


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEffectEnd);


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_EVENT_PARMS \
	struct HitEffect_eventOnEmitNiagaraBlood_Parms \
	{ \
		FVector ImpactLocaction; \
		FRotator Rotation; \
	};


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_CALLBACK_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitEffect(); \
	friend struct Z_Construct_UClass_AHitEffect_Statics; \
public: \
	DECLARE_CLASS(AHitEffect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AHitEffect)


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHitEffect(); \
	friend struct Z_Construct_UClass_AHitEffect_Statics; \
public: \
	DECLARE_CLASS(AHitEffect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AHitEffect)


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitEffect(AHitEffect&&); \
	NO_API AHitEffect(const AHitEffect&); \
public:


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitEffect(AHitEffect&&); \
	NO_API AHitEffect(const AHitEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitEffect)


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Particle() { return STRUCT_OFFSET(AHitEffect, m_Particle); } \
	FORCEINLINE static uint32 __PPO__m_Sound() { return STRUCT_OFFSET(AHitEffect, m_Sound); } \
	FORCEINLINE static uint32 __PPO__m_AdditionalSound1() { return STRUCT_OFFSET(AHitEffect, m_AdditionalSound1); } \
	FORCEINLINE static uint32 __PPO__m_AdditionalSound2() { return STRUCT_OFFSET(AHitEffect, m_AdditionalSound2); } \
	FORCEINLINE static uint32 __PPO__m_AdditionalSound3() { return STRUCT_OFFSET(AHitEffect, m_AdditionalSound3); }


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_9_PROLOG \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_EVENT_PARMS


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_CALLBACK_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_HitEffect_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_CALLBACK_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_HitEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class AHitEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_HitEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
