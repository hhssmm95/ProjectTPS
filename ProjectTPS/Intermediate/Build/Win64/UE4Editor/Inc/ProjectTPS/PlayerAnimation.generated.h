// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_PlayerAnimation_generated_h
#error "PlayerAnimation.generated.h already included, missing '#pragma once' in PlayerAnimation.h"
#endif
#define PROJECTTPS_PlayerAnimation_generated_h

#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_RPC_WRAPPERS
#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimation(); \
	friend struct Z_Construct_UClass_UPlayerAnimation_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimation)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnimation(); \
	friend struct Z_Construct_UClass_UPlayerAnimation_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimation)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimation(UPlayerAnimation&&); \
	NO_API UPlayerAnimation(const UPlayerAnimation&); \
public:


#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimation(UPlayerAnimation&&); \
	NO_API UPlayerAnimation(const UPlayerAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAnimation)


#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_PRIVATE_PROPERTY_OFFSET
#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_20_PROLOG
#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_INCLASS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UPlayerAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Player_PlayerAnimation_h


#define FOREACH_ENUM_PLAYERANIMTYPE(op) \
	op(PlayerAnimType::Idle) \
	op(PlayerAnimType::Run) \
	op(PlayerAnimType::Attack) \
	op(PlayerAnimType::Jump) \
	op(PlayerAnimType::Death) 

enum class PlayerAnimType : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<PlayerAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
