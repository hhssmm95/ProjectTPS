// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_RevenantAnim_generated_h
#error "RevenantAnim.generated.h already included, missing '#pragma once' in RevenantAnim.h"
#endif
#define PROJECTTPS_RevenantAnim_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_MonsterDeathEnd); \
	DECLARE_FUNCTION(execAnimNotify_MonsterLongAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterNearAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterAttackEnd);


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_MonsterDeathEnd); \
	DECLARE_FUNCTION(execAnimNotify_MonsterLongAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterNearAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterAttackEnd);


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevenantAnim(); \
	friend struct Z_Construct_UClass_URevenantAnim_Statics; \
public: \
	DECLARE_CLASS(URevenantAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(URevenantAnim)


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURevenantAnim(); \
	friend struct Z_Construct_UClass_URevenantAnim_Statics; \
public: \
	DECLARE_CLASS(URevenantAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(URevenantAnim)


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevenantAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevenantAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevenantAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevenantAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URevenantAnim(URevenantAnim&&); \
	NO_API URevenantAnim(const URevenantAnim&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevenantAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URevenantAnim(URevenantAnim&&); \
	NO_API URevenantAnim(const URevenantAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevenantAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevenantAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevenantAnim)


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_eMonsterAnim() { return STRUCT_OFFSET(URevenantAnim, m_eMonsterAnim); } \
	FORCEINLINE static uint32 __PPO__m_HitMontage() { return STRUCT_OFFSET(URevenantAnim, m_HitMontage); } \
	FORCEINLINE static uint32 __PPO__m_bDeath() { return STRUCT_OFFSET(URevenantAnim, m_bDeath); }


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_23_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class URevenantAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_RevenantAnim_h


#define FOREACH_ENUM_EBOSSANIMTYPE(op) \
	op(EBossAnimType::Idle) \
	op(EBossAnimType::Walk) \
	op(EBossAnimType::Run) \
	op(EBossAnimType::Attack1) \
	op(EBossAnimType::Attack2) \
	op(EBossAnimType::Death) \
	op(EBossAnimType::Suspicious) 

enum class EBossAnimType : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<EBossAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
