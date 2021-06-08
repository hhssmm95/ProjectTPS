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
#ifdef PROJECTTPS_ExplosiveBullet_generated_h
#error "ExplosiveBullet.generated.h already included, missing '#pragma once' in ExplosiveBullet.h"
#endif
#define PROJECTTPS_ExplosiveBullet_generated_h

#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBulletHit); \
	DECLARE_FUNCTION(execProjectileStop);


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBulletHit); \
	DECLARE_FUNCTION(execProjectileStop);


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveBullet(); \
	friend struct Z_Construct_UClass_AExplosiveBullet_Statics; \
public: \
	DECLARE_CLASS(AExplosiveBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBullet)


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveBullet(); \
	friend struct Z_Construct_UClass_AExplosiveBullet_Statics; \
public: \
	DECLARE_CLASS(AExplosiveBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBullet)


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBullet(AExplosiveBullet&&); \
	NO_API AExplosiveBullet(const AExplosiveBullet&); \
public:


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBullet(AExplosiveBullet&&); \
	NO_API AExplosiveBullet(const AExplosiveBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveBullet)


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Body() { return STRUCT_OFFSET(AExplosiveBullet, m_Body); } \
	FORCEINLINE static uint32 __PPO__m_BulletParticle() { return STRUCT_OFFSET(AExplosiveBullet, m_BulletParticle); } \
	FORCEINLINE static uint32 __PPO__m_BulletTrail() { return STRUCT_OFFSET(AExplosiveBullet, m_BulletTrail); } \
	FORCEINLINE static uint32 __PPO__m_Movement() { return STRUCT_OFFSET(AExplosiveBullet, m_Movement); } \
	FORCEINLINE static uint32 __PPO__m_Damage() { return STRUCT_OFFSET(AExplosiveBullet, m_Damage); } \
	FORCEINLINE static uint32 __PPO__m_HitParticle() { return STRUCT_OFFSET(AExplosiveBullet, m_HitParticle); } \
	FORCEINLINE static uint32 __PPO__m_HitSound() { return STRUCT_OFFSET(AExplosiveBullet, m_HitSound); }


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_9_PROLOG
#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class AExplosiveBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_ExplosiveBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
