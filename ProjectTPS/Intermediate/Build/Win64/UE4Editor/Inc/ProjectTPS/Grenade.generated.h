// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PROJECTTPS_Grenade_generated_h
#error "Grenade.generated.h already included, missing '#pragma once' in Grenade.h"
#endif
#define PROJECTTPS_Grenade_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGrenadeHit);


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGrenadeHit);


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrenade)


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Body() { return STRUCT_OFFSET(AGrenade, m_Body); } \
	FORCEINLINE static uint32 __PPO__m_Mesh() { return STRUCT_OFFSET(AGrenade, m_Mesh); } \
	FORCEINLINE static uint32 __PPO__Movement() { return STRUCT_OFFSET(AGrenade, Movement); } \
	FORCEINLINE static uint32 __PPO__m_Particle() { return STRUCT_OFFSET(AGrenade, m_Particle); } \
	FORCEINLINE static uint32 __PPO__m_HitParticle() { return STRUCT_OFFSET(AGrenade, m_HitParticle); } \
	FORCEINLINE static uint32 __PPO__m_HitSound() { return STRUCT_OFFSET(AGrenade, m_HitSound); } \
	FORCEINLINE static uint32 __PPO__m_ArcValue() { return STRUCT_OFFSET(AGrenade, m_ArcValue); } \
	FORCEINLINE static uint32 __PPO__m_Damage() { return STRUCT_OFFSET(AGrenade, m_Damage); } \
	FORCEINLINE static uint32 __PPO__m_Investigator() { return STRUCT_OFFSET(AGrenade, m_Investigator); }


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_9_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_Grenade_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class AGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_Grenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
