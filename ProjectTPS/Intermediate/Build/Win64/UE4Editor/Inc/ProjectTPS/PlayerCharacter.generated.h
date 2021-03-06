// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define PROJECTTPS_PlayerCharacter_generated_h

#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWeaponVisibility); \
	DECLARE_FUNCTION(execGetInEventScene); \
	DECLARE_FUNCTION(execSetInEventScene); \
	DECLARE_FUNCTION(execGetUpperYaw);


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWeaponVisibility); \
	DECLARE_FUNCTION(execGetInEventScene); \
	DECLARE_FUNCTION(execSetInEventScene); \
	DECLARE_FUNCTION(execGetUpperYaw);


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_PlayerInfo() { return STRUCT_OFFSET(APlayerCharacter, m_PlayerInfo); } \
	FORCEINLINE static uint32 __PPO__m_Camera() { return STRUCT_OFFSET(APlayerCharacter, m_Camera); } \
	FORCEINLINE static uint32 __PPO__m_Arm() { return STRUCT_OFFSET(APlayerCharacter, m_Arm); } \
	FORCEINLINE static uint32 __PPO__m_AimLock() { return STRUCT_OFFSET(APlayerCharacter, m_AimLock); } \
	FORCEINLINE static uint32 __PPO__m_AimAssistParticle() { return STRUCT_OFFSET(APlayerCharacter, m_AimAssistParticle); } \
	FORCEINLINE static uint32 __PPO__m_TimeAccelParticle() { return STRUCT_OFFSET(APlayerCharacter, m_TimeAccelParticle); } \
	FORCEINLINE static uint32 __PPO__m_ScopeParticle() { return STRUCT_OFFSET(APlayerCharacter, m_ScopeParticle); } \
	FORCEINLINE static uint32 __PPO__m_PostProcess() { return STRUCT_OFFSET(APlayerCharacter, m_PostProcess); } \
	FORCEINLINE static uint32 __PPO__m_NightVision() { return STRUCT_OFFSET(APlayerCharacter, m_NightVision); } \
	FORCEINLINE static uint32 __PPO__m_ThermalVision() { return STRUCT_OFFSET(APlayerCharacter, m_ThermalVision); } \
	FORCEINLINE static uint32 __PPO__m_bIsDead() { return STRUCT_OFFSET(APlayerCharacter, m_bIsDead); } \
	FORCEINLINE static uint32 __PPO__m_pPlayerAnim() { return STRUCT_OFFSET(APlayerCharacter, m_pPlayerAnim); } \
	FORCEINLINE static uint32 __PPO__m_UpperYaw() { return STRUCT_OFFSET(APlayerCharacter, m_UpperYaw); } \
	FORCEINLINE static uint32 __PPO__m_IsAiming() { return STRUCT_OFFSET(APlayerCharacter, m_IsAiming); } \
	FORCEINLINE static uint32 __PPO__m_IsReloading() { return STRUCT_OFFSET(APlayerCharacter, m_IsReloading); } \
	FORCEINLINE static uint32 __PPO__m_PrimaryWeapon() { return STRUCT_OFFSET(APlayerCharacter, m_PrimaryWeapon); } \
	FORCEINLINE static uint32 __PPO__m_StartWeapon() { return STRUCT_OFFSET(APlayerCharacter, m_StartWeapon); } \
	FORCEINLINE static uint32 __PPO__m_HitParticle() { return STRUCT_OFFSET(APlayerCharacter, m_HitParticle); } \
	FORCEINLINE static uint32 __PPO__m_HitSound() { return STRUCT_OFFSET(APlayerCharacter, m_HitSound); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound1() { return STRUCT_OFFSET(APlayerCharacter, m_HurtSound1); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound2() { return STRUCT_OFFSET(APlayerCharacter, m_HurtSound2); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound3() { return STRUCT_OFFSET(APlayerCharacter, m_HurtSound3); } \
	FORCEINLINE static uint32 __PPO__m_ShieldHP() { return STRUCT_OFFSET(APlayerCharacter, m_ShieldHP); } \
	FORCEINLINE static uint32 __PPO__m_ShieldHPMax() { return STRUCT_OFFSET(APlayerCharacter, m_ShieldHPMax); } \
	FORCEINLINE static uint32 __PPO__m_ThrusterParticle() { return STRUCT_OFFSET(APlayerCharacter, m_ThrusterParticle); } \
	FORCEINLINE static uint32 __PPO__m_ThrusterSound() { return STRUCT_OFFSET(APlayerCharacter, m_ThrusterSound); } \
	FORCEINLINE static uint32 __PPO__m_TimeAccelOnSound() { return STRUCT_OFFSET(APlayerCharacter, m_TimeAccelOnSound); } \
	FORCEINLINE static uint32 __PPO__m_TimeAccelOffSound() { return STRUCT_OFFSET(APlayerCharacter, m_TimeAccelOffSound); } \
	FORCEINLINE static uint32 __PPO__m_NightVisionSound() { return STRUCT_OFFSET(APlayerCharacter, m_NightVisionSound); } \
	FORCEINLINE static uint32 __PPO__m_ButtonSound() { return STRUCT_OFFSET(APlayerCharacter, m_ButtonSound); } \
	FORCEINLINE static uint32 __PPO__m_GearSearchSound() { return STRUCT_OFFSET(APlayerCharacter, m_GearSearchSound); } \
	FORCEINLINE static uint32 __PPO__m_HPRegenTime() { return STRUCT_OFFSET(APlayerCharacter, m_HPRegenTime); } \
	FORCEINLINE static uint32 __PPO__m_bDashEnable() { return STRUCT_OFFSET(APlayerCharacter, m_bDashEnable); } \
	FORCEINLINE static uint32 __PPO__m_bInEventScene() { return STRUCT_OFFSET(APlayerCharacter, m_bInEventScene); }


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_10_PROLOG
#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_INCLASS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
