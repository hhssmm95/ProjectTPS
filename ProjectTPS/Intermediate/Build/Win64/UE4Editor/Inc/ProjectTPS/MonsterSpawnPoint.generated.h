// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_MonsterSpawnPoint_generated_h
#error "MonsterSpawnPoint.generated.h already included, missing '#pragma once' in MonsterSpawnPoint.h"
#endif
#define PROJECTTPS_MonsterSpawnPoint_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterSpawnPoint(); \
	friend struct Z_Construct_UClass_AMonsterSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(AMonsterSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AMonsterSpawnPoint)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterSpawnPoint(); \
	friend struct Z_Construct_UClass_AMonsterSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(AMonsterSpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AMonsterSpawnPoint)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterSpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterSpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterSpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterSpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterSpawnPoint(AMonsterSpawnPoint&&); \
	NO_API AMonsterSpawnPoint(const AMonsterSpawnPoint&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterSpawnPoint(AMonsterSpawnPoint&&); \
	NO_API AMonsterSpawnPoint(const AMonsterSpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterSpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterSpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterSpawnPoint)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_SpawnType() { return STRUCT_OFFSET(AMonsterSpawnPoint, m_SpawnType); } \
	FORCEINLINE static uint32 __PPO__m_PatrolPoint() { return STRUCT_OFFSET(AMonsterSpawnPoint, m_PatrolPoint); } \
	FORCEINLINE static uint32 __PPO__m_SpawnTime() { return STRUCT_OFFSET(AMonsterSpawnPoint, m_SpawnTime); } \
	FORCEINLINE static uint32 __PPO__m_bSpawnEnable() { return STRUCT_OFFSET(AMonsterSpawnPoint, m_bSpawnEnable); } \
	FORCEINLINE static uint32 __PPO__m_bCallBackUpEnable() { return STRUCT_OFFSET(AMonsterSpawnPoint, m_bCallBackUpEnable); } \
	FORCEINLINE static uint32 __PPO__m_bSpawnContinuous() { return STRUCT_OFFSET(AMonsterSpawnPoint, m_bSpawnContinuous); } \
	FORCEINLINE static uint32 __PPO__m_bIsChasing() { return STRUCT_OFFSET(AMonsterSpawnPoint, m_bIsChasing); }


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_10_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class AMonsterSpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_MonsterSpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
