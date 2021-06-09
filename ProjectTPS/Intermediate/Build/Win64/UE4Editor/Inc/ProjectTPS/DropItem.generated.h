// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROJECTTPS_DropItem_generated_h
#error "DropItem.generated.h already included, missing '#pragma once' in DropItem.h"
#endif
#define PROJECTTPS_DropItem_generated_h

#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnItemBeginOverlap);


#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnItemBeginOverlap);


#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADropItem(); \
	friend struct Z_Construct_UClass_ADropItem_Statics; \
public: \
	DECLARE_CLASS(ADropItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(ADropItem)


#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADropItem(); \
	friend struct Z_Construct_UClass_ADropItem_Statics; \
public: \
	DECLARE_CLASS(ADropItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(ADropItem)


#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADropItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADropItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropItem(ADropItem&&); \
	NO_API ADropItem(const ADropItem&); \
public:


#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADropItem(ADropItem&&); \
	NO_API ADropItem(const ADropItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADropItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADropItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADropItem)


#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Body() { return STRUCT_OFFSET(ADropItem, m_Body); } \
	FORCEINLINE static uint32 __PPO__m_ItemType() { return STRUCT_OFFSET(ADropItem, m_ItemType); } \
	FORCEINLINE static uint32 __PPO__m_AmmoAmount() { return STRUCT_OFFSET(ADropItem, m_AmmoAmount); } \
	FORCEINLINE static uint32 __PPO__m_AbilityPoint() { return STRUCT_OFFSET(ADropItem, m_AbilityPoint); }


#define ProjectTPS_Source_ProjectTPS_DropItem_h_9_PROLOG
#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_INCLASS \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_DropItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_DropItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class ADropItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_DropItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
