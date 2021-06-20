// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_MonsterAIController_generated_h
#error "MonsterAIController.generated.h already included, missing '#pragma once' in MonsterAIController.h"
#endif
#define PROJECTTPS_MonsterAIController_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterAIController(); \
	friend struct Z_Construct_UClass_AMonsterAIController_Statics; \
public: \
	DECLARE_CLASS(AMonsterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AMonsterAIController)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterAIController(); \
	friend struct Z_Construct_UClass_AMonsterAIController_Statics; \
public: \
	DECLARE_CLASS(AMonsterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AMonsterAIController)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterAIController(AMonsterAIController&&); \
	NO_API AMonsterAIController(const AMonsterAIController&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterAIController(AMonsterAIController&&); \
	NO_API AMonsterAIController(const AMonsterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterAIController)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_AITree() { return STRUCT_OFFSET(AMonsterAIController, m_AITree); } \
	FORCEINLINE static uint32 __PPO__m_AIBlackBoard() { return STRUCT_OFFSET(AMonsterAIController, m_AIBlackBoard); } \
	FORCEINLINE static uint32 __PPO__m_bIsBoss() { return STRUCT_OFFSET(AMonsterAIController, m_bIsBoss); } \
	FORCEINLINE static uint32 __PPO__m_bDeath() { return STRUCT_OFFSET(AMonsterAIController, m_bDeath); }


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_12_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class AMonsterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_MonsterAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
