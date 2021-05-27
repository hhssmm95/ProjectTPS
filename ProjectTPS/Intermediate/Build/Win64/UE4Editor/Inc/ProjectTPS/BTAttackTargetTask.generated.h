// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_BTAttackTargetTask_generated_h
#error "BTAttackTargetTask.generated.h already included, missing '#pragma once' in BTAttackTargetTask.h"
#endif
#define PROJECTTPS_BTAttackTargetTask_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTAttackTargetTask(); \
	friend struct Z_Construct_UClass_UBTAttackTargetTask_Statics; \
public: \
	DECLARE_CLASS(UBTAttackTargetTask, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UBTAttackTargetTask)


#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBTAttackTargetTask(); \
	friend struct Z_Construct_UClass_UBTAttackTargetTask_Statics; \
public: \
	DECLARE_CLASS(UBTAttackTargetTask, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UBTAttackTargetTask)


#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTAttackTargetTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTAttackTargetTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTAttackTargetTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTAttackTargetTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTAttackTargetTask(UBTAttackTargetTask&&); \
	NO_API UBTAttackTargetTask(const UBTAttackTargetTask&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTAttackTargetTask(UBTAttackTargetTask&&); \
	NO_API UBTAttackTargetTask(const UBTAttackTargetTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTAttackTargetTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTAttackTargetTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTAttackTargetTask)


#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Type() { return STRUCT_OFFSET(UBTAttackTargetTask, m_Type); }


#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_17_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UBTAttackTargetTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_BTAttackTargetTask_h


#define FOREACH_ENUM_EATTACKTYPE(op) \
	op(EAttackType::Attack1_Near) \
	op(EAttackType::Attack2_Far) 

enum class EAttackType : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<EAttackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
