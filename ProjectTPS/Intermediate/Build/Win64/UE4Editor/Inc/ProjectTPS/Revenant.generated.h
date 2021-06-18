// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_Revenant_generated_h
#error "Revenant.generated.h already included, missing '#pragma once' in Revenant.h"
#endif
#define PROJECTTPS_Revenant_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRevenantSkill_Statics; \
	PROJECTTPS_API static class UScriptStruct* StaticStruct();


template<> PROJECTTPS_API UScriptStruct* StaticStruct<struct FRevenantSkill>();

#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARevenant(); \
	friend struct Z_Construct_UClass_ARevenant_Statics; \
public: \
	DECLARE_CLASS(ARevenant, AMonster, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(ARevenant)


#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_INCLASS \
private: \
	static void StaticRegisterNativesARevenant(); \
	friend struct Z_Construct_UClass_ARevenant_Statics; \
public: \
	DECLARE_CLASS(ARevenant, AMonster, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(ARevenant)


#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARevenant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARevenant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARevenant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARevenant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARevenant(ARevenant&&); \
	NO_API ARevenant(const ARevenant&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARevenant(ARevenant&&); \
	NO_API ARevenant(const ARevenant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARevenant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARevenant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARevenant)


#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_SkillArray() { return STRUCT_OFFSET(ARevenant, m_SkillArray); } \
	FORCEINLINE static uint32 __PPO__m_SkillTimeMax() { return STRUCT_OFFSET(ARevenant, m_SkillTimeMax); } \
	FORCEINLINE static uint32 __PPO__Target() { return STRUCT_OFFSET(ARevenant, Target); }


#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_37_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_Revenant_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class ARevenant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_Revenant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
