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

#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUpperYaw);


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUpperYaw);


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
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


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_PlayerInfo() { return STRUCT_OFFSET(APlayerCharacter, m_PlayerInfo); } \
	FORCEINLINE static uint32 __PPO__m_Camera() { return STRUCT_OFFSET(APlayerCharacter, m_Camera); } \
	FORCEINLINE static uint32 __PPO__m_Arm() { return STRUCT_OFFSET(APlayerCharacter, m_Arm); } \
	FORCEINLINE static uint32 __PPO__m_bIsDead() { return STRUCT_OFFSET(APlayerCharacter, m_bIsDead); } \
	FORCEINLINE static uint32 __PPO__m_pPlayerAnim() { return STRUCT_OFFSET(APlayerCharacter, m_pPlayerAnim); } \
	FORCEINLINE static uint32 __PPO__m_UpperYaw() { return STRUCT_OFFSET(APlayerCharacter, m_UpperYaw); } \
	FORCEINLINE static uint32 __PPO__m_IsAiming() { return STRUCT_OFFSET(APlayerCharacter, m_IsAiming); } \
	FORCEINLINE static uint32 __PPO__m_PrimaryWeapon() { return STRUCT_OFFSET(APlayerCharacter, m_PrimaryWeapon); } \
	FORCEINLINE static uint32 __PPO__m_StartWeapon() { return STRUCT_OFFSET(APlayerCharacter, m_StartWeapon); } \
	FORCEINLINE static uint32 __PPO__m_HitParticle() { return STRUCT_OFFSET(APlayerCharacter, m_HitParticle); } \
	FORCEINLINE static uint32 __PPO__m_HitSound() { return STRUCT_OFFSET(APlayerCharacter, m_HitSound); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound1() { return STRUCT_OFFSET(APlayerCharacter, m_HurtSound1); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound2() { return STRUCT_OFFSET(APlayerCharacter, m_HurtSound2); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound3() { return STRUCT_OFFSET(APlayerCharacter, m_HurtSound3); }


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_9_PROLOG
#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Player_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
