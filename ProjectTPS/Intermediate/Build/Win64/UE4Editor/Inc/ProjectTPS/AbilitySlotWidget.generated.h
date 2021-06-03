// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySlotData;
#ifdef PROJECTTPS_AbilitySlotWidget_generated_h
#error "AbilitySlotWidget.generated.h already included, missing '#pragma once' in AbilitySlotWidget.h"
#endif
#define PROJECTTPS_AbilitySlotWidget_generated_h

#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetData);


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetData);


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySlotWidget(); \
	friend struct Z_Construct_UClass_UAbilitySlotWidget_Statics; \
public: \
	DECLARE_CLASS(UAbilitySlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySlotWidget)


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySlotWidget(); \
	friend struct Z_Construct_UClass_UAbilitySlotWidget_Statics; \
public: \
	DECLARE_CLASS(UAbilitySlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySlotWidget)


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySlotWidget(UAbilitySlotWidget&&); \
	NO_API UAbilitySlotWidget(const UAbilitySlotWidget&); \
public:


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySlotWidget(UAbilitySlotWidget&&); \
	NO_API UAbilitySlotWidget(const UAbilitySlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySlotWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySlotWidget)


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Index() { return STRUCT_OFFSET(UAbilitySlotWidget, m_Index); } \
	FORCEINLINE static uint32 __PPO__m_SlotIcon() { return STRUCT_OFFSET(UAbilitySlotWidget, m_SlotIcon); } \
	FORCEINLINE static uint32 __PPO__m_SlotText() { return STRUCT_OFFSET(UAbilitySlotWidget, m_SlotText); } \
	FORCEINLINE static uint32 __PPO__m_AbilityKey() { return STRUCT_OFFSET(UAbilitySlotWidget, m_AbilityKey); } \
	FORCEINLINE static uint32 __PPO__m_AbilityName() { return STRUCT_OFFSET(UAbilitySlotWidget, m_AbilityName); } \
	FORCEINLINE static uint32 __PPO__m_AbilityDescription() { return STRUCT_OFFSET(UAbilitySlotWidget, m_AbilityDescription); }


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_10_PROLOG
#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_INCLASS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UAbilitySlotWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_UI_AbilitySlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
