// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_AbilitySlotData_generated_h
#error "AbilitySlotData.generated.h already included, missing '#pragma once' in AbilitySlotData.h"
#endif
#define PROJECTTPS_AbilitySlotData_generated_h

#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySlotData(); \
	friend struct Z_Construct_UClass_UAbilitySlotData_Statics; \
public: \
	DECLARE_CLASS(UAbilitySlotData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySlotData)


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySlotData(); \
	friend struct Z_Construct_UClass_UAbilitySlotData_Statics; \
public: \
	DECLARE_CLASS(UAbilitySlotData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySlotData)


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySlotData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySlotData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySlotData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySlotData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySlotData(UAbilitySlotData&&); \
	NO_API UAbilitySlotData(const UAbilitySlotData&); \
public:


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySlotData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySlotData(UAbilitySlotData&&); \
	NO_API UAbilitySlotData(const UAbilitySlotData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySlotData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySlotData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySlotData)


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_AbilityKey() { return STRUCT_OFFSET(UAbilitySlotData, m_AbilityKey); } \
	FORCEINLINE static uint32 __PPO__m_AbilityName() { return STRUCT_OFFSET(UAbilitySlotData, m_AbilityName); } \
	FORCEINLINE static uint32 __PPO__m_AbilityDescription() { return STRUCT_OFFSET(UAbilitySlotData, m_AbilityDescription); } \
	FORCEINLINE static uint32 __PPO__m_SlotTexture() { return STRUCT_OFFSET(UAbilitySlotData, m_SlotTexture); } \
	FORCEINLINE static uint32 __PPO__m_SlotText() { return STRUCT_OFFSET(UAbilitySlotData, m_SlotText); } \
	FORCEINLINE static uint32 __PPO__m_SlotIndex() { return STRUCT_OFFSET(UAbilitySlotData, m_SlotIndex); }


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_10_PROLOG
#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_INCLASS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UAbilitySlotData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_UI_AbilitySlotData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
