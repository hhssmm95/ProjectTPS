// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_PlayerInfo_generated_h
#error "PlayerInfo.generated.h already included, missing '#pragma once' in PlayerInfo.h"
#endif
#define PROJECTTPS_PlayerInfo_generated_h

#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInfo(); \
	friend struct Z_Construct_UClass_UPlayerInfo_Statics; \
public: \
	DECLARE_CLASS(UPlayerInfo, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInfo)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInfo(); \
	friend struct Z_Construct_UClass_UPlayerInfo_Statics; \
public: \
	DECLARE_CLASS(UPlayerInfo, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInfo)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInfo(UPlayerInfo&&); \
	NO_API UPlayerInfo(const UPlayerInfo&); \
public:


#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInfo(UPlayerInfo&&); \
	NO_API UPlayerInfo(const UPlayerInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInfo)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_HP() { return STRUCT_OFFSET(UPlayerInfo, m_HP); } \
	FORCEINLINE static uint32 __PPO__m_HPMax() { return STRUCT_OFFSET(UPlayerInfo, m_HPMax); } \
	FORCEINLINE static uint32 __PPO__m_Attack() { return STRUCT_OFFSET(UPlayerInfo, m_Attack); } \
	FORCEINLINE static uint32 __PPO__m_Armor() { return STRUCT_OFFSET(UPlayerInfo, m_Armor); } \
	FORCEINLINE static uint32 __PPO__m_CurrentMag() { return STRUCT_OFFSET(UPlayerInfo, m_CurrentMag); } \
	FORCEINLINE static uint32 __PPO__m_CurrentMagMax() { return STRUCT_OFFSET(UPlayerInfo, m_CurrentMagMax); } \
	FORCEINLINE static uint32 __PPO__m_RemainMag() { return STRUCT_OFFSET(UPlayerInfo, m_RemainMag); } \
	FORCEINLINE static uint32 __PPO__m_Assult1Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Assult1Enable); } \
	FORCEINLINE static uint32 __PPO__m_Assult2Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Assult2Enable); } \
	FORCEINLINE static uint32 __PPO__m_Assult3Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Assult3Enable); } \
	FORCEINLINE static uint32 __PPO__m_Defence1Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Defence1Enable); } \
	FORCEINLINE static uint32 __PPO__m_Defence2Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Defence2Enable); } \
	FORCEINLINE static uint32 __PPO__m_Defence3Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Defence3Enable); } \
	FORCEINLINE static uint32 __PPO__m_Utility1Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Utility1Enable); } \
	FORCEINLINE static uint32 __PPO__m_Utility2Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Utility2Enable); } \
	FORCEINLINE static uint32 __PPO__m_Utility3Enable() { return STRUCT_OFFSET(UPlayerInfo, m_Utility3Enable); } \
	FORCEINLINE static uint32 __PPO__m_AssultLevel() { return STRUCT_OFFSET(UPlayerInfo, m_AssultLevel); } \
	FORCEINLINE static uint32 __PPO__m_DefenceLevel() { return STRUCT_OFFSET(UPlayerInfo, m_DefenceLevel); } \
	FORCEINLINE static uint32 __PPO__m_UtilityLevel() { return STRUCT_OFFSET(UPlayerInfo, m_UtilityLevel); } \
	FORCEINLINE static uint32 __PPO__m_AbilityPoint() { return STRUCT_OFFSET(UPlayerInfo, m_AbilityPoint); } \
	FORCEINLINE static uint32 __PPO__m_HaveSnipeMode() { return STRUCT_OFFSET(UPlayerInfo, m_HaveSnipeMode); } \
	FORCEINLINE static uint32 __PPO__m_HaveSuperSuppressor() { return STRUCT_OFFSET(UPlayerInfo, m_HaveSuperSuppressor); } \
	FORCEINLINE static uint32 __PPO__m_HaveNightVision() { return STRUCT_OFFSET(UPlayerInfo, m_HaveNightVision); } \
	FORCEINLINE static uint32 __PPO__m_HaveThermalVision() { return STRUCT_OFFSET(UPlayerInfo, m_HaveThermalVision); } \
	FORCEINLINE static uint32 __PPO__m_WaitTime() { return STRUCT_OFFSET(UPlayerInfo, m_WaitTime); }


#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_10_PROLOG
#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_INCLASS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UPlayerInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Player_PlayerInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
