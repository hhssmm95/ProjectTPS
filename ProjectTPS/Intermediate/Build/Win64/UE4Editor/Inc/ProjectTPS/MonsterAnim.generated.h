// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_MonsterAnim_generated_h
#error "MonsterAnim.generated.h already included, missing '#pragma once' in MonsterAnim.h"
#endif
#define PROJECTTPS_MonsterAnim_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_MonsterSuspectEnd); \
	DECLARE_FUNCTION(execAnimNotify_MonsterLongAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterNearAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterAttackEnd);


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_MonsterSuspectEnd); \
	DECLARE_FUNCTION(execAnimNotify_MonsterLongAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterNearAttack); \
	DECLARE_FUNCTION(execAnimNotify_MonsterAttackEnd);


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonsterAnim(); \
	friend struct Z_Construct_UClass_UMonsterAnim_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnim)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMonsterAnim(); \
	friend struct Z_Construct_UClass_UMonsterAnim_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnim)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterAnim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnim(UMonsterAnim&&); \
	NO_API UMonsterAnim(const UMonsterAnim&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnim(UMonsterAnim&&); \
	NO_API UMonsterAnim(const UMonsterAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMonsterAnim)


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_eMonsterAnim() { return STRUCT_OFFSET(UMonsterAnim, m_eMonsterAnim); } \
	FORCEINLINE static uint32 __PPO__m_HitMontage() { return STRUCT_OFFSET(UMonsterAnim, m_HitMontage); }


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_22_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class UMonsterAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_MonsterAnim_h


#define FOREACH_ENUM_EMONSTERANIMTYPE(op) \
	op(EMonsterAnimType::Idle) \
	op(EMonsterAnimType::Walk) \
	op(EMonsterAnimType::Run) \
	op(EMonsterAnimType::Attack1) \
	op(EMonsterAnimType::Attack2) \
	op(EMonsterAnimType::Death) \
	op(EMonsterAnimType::Suspicious) 

enum class EMonsterAnimType : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<EMonsterAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
