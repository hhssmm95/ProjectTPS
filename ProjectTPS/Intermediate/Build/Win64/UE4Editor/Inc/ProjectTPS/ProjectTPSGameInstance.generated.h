// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_ProjectTPSGameInstance_generated_h
#error "ProjectTPSGameInstance.generated.h already included, missing '#pragma once' in ProjectTPSGameInstance.h"
#endif
#define PROJECTTPS_ProjectTPSGameInstance_generated_h

#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerAbilityInfo_Statics; \
	PROJECTTPS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PROJECTTPS_API UScriptStruct* StaticStruct<struct FPlayerAbilityInfo>();

#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectTPSGameInstance(); \
	friend struct Z_Construct_UClass_UProjectTPSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UProjectTPSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UProjectTPSGameInstance)


#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUProjectTPSGameInstance(); \
	friend struct Z_Construct_UClass_UProjectTPSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UProjectTPSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UProjectTPSGameInstance)


#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectTPSGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectTPSGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectTPSGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectTPSGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectTPSGameInstance(UProjectTPSGameInstance&&); \
	NO_API UProjectTPSGameInstance(const UProjectTPSGameInstance&); \
public:


#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectTPSGameInstance(UProjectTPSGameInstance&&); \
	NO_API UProjectTPSGameInstance(const UProjectTPSGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectTPSGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectTPSGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectTPSGameInstance)


#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_AbilityInfoTable() { return STRUCT_OFFSET(UProjectTPSGameInstance, m_AbilityInfoTable); }


#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_31_PROLOG
#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_INCLASS \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UProjectTPSGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_ProjectTPSGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
