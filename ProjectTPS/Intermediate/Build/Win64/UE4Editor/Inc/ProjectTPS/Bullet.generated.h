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
#ifdef PROJECTTPS_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define PROJECTTPS_Bullet_generated_h

#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBulletHit);


#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBulletHit);


#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Body() { return STRUCT_OFFSET(ABullet, m_Body); } \
	FORCEINLINE static uint32 __PPO__m_BulletParticle() { return STRUCT_OFFSET(ABullet, m_BulletParticle); } \
	FORCEINLINE static uint32 __PPO__m_BulletTrail() { return STRUCT_OFFSET(ABullet, m_BulletTrail); } \
	FORCEINLINE static uint32 __PPO__m_Movement() { return STRUCT_OFFSET(ABullet, m_Movement); } \
	FORCEINLINE static uint32 __PPO__m_Damage() { return STRUCT_OFFSET(ABullet, m_Damage); } \
	FORCEINLINE static uint32 __PPO__m_HitParticle() { return STRUCT_OFFSET(ABullet, m_HitParticle); } \
	FORCEINLINE static uint32 __PPO__m_HitSound() { return STRUCT_OFFSET(ABullet, m_HitSound); }


#define ProjectTPS_Source_ProjectTPS_Bullet_h_9_PROLOG
#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
