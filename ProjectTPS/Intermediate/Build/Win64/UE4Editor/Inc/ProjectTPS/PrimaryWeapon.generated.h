// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_PrimaryWeapon_generated_h
#error "PrimaryWeapon.generated.h already included, missing '#pragma once' in PrimaryWeapon.h"
#endif
#define PROJECTTPS_PrimaryWeapon_generated_h

#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrimaryWeapon(); \
	friend struct Z_Construct_UClass_APrimaryWeapon_Statics; \
public: \
	DECLARE_CLASS(APrimaryWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(APrimaryWeapon)


#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPrimaryWeapon(); \
	friend struct Z_Construct_UClass_APrimaryWeapon_Statics; \
public: \
	DECLARE_CLASS(APrimaryWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(APrimaryWeapon)


#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrimaryWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrimaryWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimaryWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimaryWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimaryWeapon(APrimaryWeapon&&); \
	NO_API APrimaryWeapon(const APrimaryWeapon&); \
public:


#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimaryWeapon(APrimaryWeapon&&); \
	NO_API APrimaryWeapon(const APrimaryWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimaryWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimaryWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrimaryWeapon)


#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Mesh() { return STRUCT_OFFSET(APrimaryWeapon, m_Mesh); } \
	FORCEINLINE static uint32 __PPO__m_RootScene() { return STRUCT_OFFSET(APrimaryWeapon, m_RootScene); } \
	FORCEINLINE static uint32 __PPO__m_SuppressorMesh() { return STRUCT_OFFSET(APrimaryWeapon, m_SuppressorMesh); } \
	FORCEINLINE static uint32 __PPO__m_Damage() { return STRUCT_OFFSET(APrimaryWeapon, m_Damage); } \
	FORCEINLINE static uint32 __PPO__m_FireRate() { return STRUCT_OFFSET(APrimaryWeapon, m_FireRate); } \
	FORCEINLINE static uint32 __PPO__m_CurrentMag() { return STRUCT_OFFSET(APrimaryWeapon, m_CurrentMag); } \
	FORCEINLINE static uint32 __PPO__m_CurrentMagMax() { return STRUCT_OFFSET(APrimaryWeapon, m_CurrentMagMax); } \
	FORCEINLINE static uint32 __PPO__m_RemainMag() { return STRUCT_OFFSET(APrimaryWeapon, m_RemainMag); } \
	FORCEINLINE static uint32 __PPO__m_BulletClass() { return STRUCT_OFFSET(APrimaryWeapon, m_BulletClass); } \
	FORCEINLINE static uint32 __PPO__m_BurstBulletClass() { return STRUCT_OFFSET(APrimaryWeapon, m_BurstBulletClass); } \
	FORCEINLINE static uint32 __PPO__m_ExplosiveBulletClass() { return STRUCT_OFFSET(APrimaryWeapon, m_ExplosiveBulletClass); } \
	FORCEINLINE static uint32 __PPO__m_SuppressorSoundClass() { return STRUCT_OFFSET(APrimaryWeapon, m_SuppressorSoundClass); } \
	FORCEINLINE static uint32 __PPO__m_EquipSoundClass() { return STRUCT_OFFSET(APrimaryWeapon, m_EquipSoundClass); } \
	FORCEINLINE static uint32 __PPO__m_DischargeSoundClass() { return STRUCT_OFFSET(APrimaryWeapon, m_DischargeSoundClass); } \
	FORCEINLINE static uint32 __PPO__m_MuzzleSoundClass() { return STRUCT_OFFSET(APrimaryWeapon, m_MuzzleSoundClass); } \
	FORCEINLINE static uint32 __PPO__m_EmptySoundClass() { return STRUCT_OFFSET(APrimaryWeapon, m_EmptySoundClass); } \
	FORCEINLINE static uint32 __PPO__m_BurstModeSoundClass() { return STRUCT_OFFSET(APrimaryWeapon, m_BurstModeSoundClass); } \
	FORCEINLINE static uint32 __PPO__m_MuzzleClass() { return STRUCT_OFFSET(APrimaryWeapon, m_MuzzleClass); } \
	FORCEINLINE static uint32 __PPO__m_BurstMuzzleClass() { return STRUCT_OFFSET(APrimaryWeapon, m_BurstMuzzleClass); }


#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_9_PROLOG
#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class APrimaryWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Player_PrimaryWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
