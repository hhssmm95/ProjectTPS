// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_PlayerEquipWidget_generated_h
#error "PlayerEquipWidget.generated.h already included, missing '#pragma once' in PlayerEquipWidget.h"
#endif
#define PROJECTTPS_PlayerEquipWidget_generated_h

#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerEquipWidget(); \
	friend struct Z_Construct_UClass_UPlayerEquipWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerEquipWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerEquipWidget)


#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerEquipWidget(); \
	friend struct Z_Construct_UClass_UPlayerEquipWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerEquipWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerEquipWidget)


#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerEquipWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerEquipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerEquipWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerEquipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerEquipWidget(UPlayerEquipWidget&&); \
	NO_API UPlayerEquipWidget(const UPlayerEquipWidget&); \
public:


#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerEquipWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerEquipWidget(UPlayerEquipWidget&&); \
	NO_API UPlayerEquipWidget(const UPlayerEquipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerEquipWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerEquipWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerEquipWidget)


#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CurrentMagText() { return STRUCT_OFFSET(UPlayerEquipWidget, m_CurrentMagText); } \
	FORCEINLINE static uint32 __PPO__m_RemainMagText() { return STRUCT_OFFSET(UPlayerEquipWidget, m_RemainMagText); } \
	FORCEINLINE static uint32 __PPO__m_GearText() { return STRUCT_OFFSET(UPlayerEquipWidget, m_GearText); } \
	FORCEINLINE static uint32 __PPO__m_Player() { return STRUCT_OFFSET(UPlayerEquipWidget, m_Player); }


#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_12_PROLOG
#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_INCLASS \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UPlayerEquipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_UI_PlayerEquipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
