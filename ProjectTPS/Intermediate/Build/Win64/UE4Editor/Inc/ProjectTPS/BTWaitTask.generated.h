// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_BTWaitTask_generated_h
#error "BTWaitTask.generated.h already included, missing '#pragma once' in BTWaitTask.h"
#endif
#define PROJECTTPS_BTWaitTask_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTWaitTask(); \
	friend struct Z_Construct_UClass_UBTWaitTask_Statics; \
public: \
	DECLARE_CLASS(UBTWaitTask, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UBTWaitTask)


#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBTWaitTask(); \
	friend struct Z_Construct_UClass_UBTWaitTask_Statics; \
public: \
	DECLARE_CLASS(UBTWaitTask, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UBTWaitTask)


#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTWaitTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTWaitTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTWaitTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTWaitTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTWaitTask(UBTWaitTask&&); \
	NO_API UBTWaitTask(const UBTWaitTask&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTWaitTask(UBTWaitTask&&); \
	NO_API UBTWaitTask(const UBTWaitTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTWaitTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTWaitTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTWaitTask)


#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ManualWaitTimeControl() { return STRUCT_OFFSET(UBTWaitTask, ManualWaitTimeControl); } \
	FORCEINLINE static uint32 __PPO__WaitTime() { return STRUCT_OFFSET(UBTWaitTask, WaitTime); } \
	FORCEINLINE static uint32 __PPO__EnableRecognizeEnemy() { return STRUCT_OFFSET(UBTWaitTask, EnableRecognizeEnemy); }


#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_12_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UBTWaitTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_BTWaitTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
