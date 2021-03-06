// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
#ifdef PROJECTTPS_EffectNormal_generated_h
#error "EffectNormal.generated.h already included, missing '#pragma once' in EffectNormal.h"
#endif
#define PROJECTTPS_EffectNormal_generated_h

#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEffectEnd);


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEffectEnd);


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEffectNormal(); \
	friend struct Z_Construct_UClass_AEffectNormal_Statics; \
public: \
	DECLARE_CLASS(AEffectNormal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AEffectNormal)


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEffectNormal(); \
	friend struct Z_Construct_UClass_AEffectNormal_Statics; \
public: \
	DECLARE_CLASS(AEffectNormal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AEffectNormal)


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEffectNormal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEffectNormal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEffectNormal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEffectNormal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEffectNormal(AEffectNormal&&); \
	NO_API AEffectNormal(const AEffectNormal&); \
public:


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEffectNormal(AEffectNormal&&); \
	NO_API AEffectNormal(const AEffectNormal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEffectNormal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEffectNormal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEffectNormal)


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Particle() { return STRUCT_OFFSET(AEffectNormal, m_Particle); } \
	FORCEINLINE static uint32 __PPO__m_EffectEnd() { return STRUCT_OFFSET(AEffectNormal, m_EffectEnd); }


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_9_PROLOG
#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_EffectNormal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class AEffectNormal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_EffectNormal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
