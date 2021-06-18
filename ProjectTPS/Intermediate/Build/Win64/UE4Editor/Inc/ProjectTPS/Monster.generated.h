// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class MonsterAI : uint8;
class UMonsterAnim;
enum class EMonsterAnimType : uint8;
#ifdef PROJECTTPS_Monster_generated_h
#error "Monster.generated.h already included, missing '#pragma once' in Monster.h"
#endif
#define PROJECTTPS_Monster_generated_h

#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_SPARSE_DATA
#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execSetMonsterAIType); \
	DECLARE_FUNCTION(execGetMonsterAIType); \
	DECLARE_FUNCTION(execGetMonsterAnim); \
	DECLARE_FUNCTION(execChangeAnimation);


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execSetMonsterAIType); \
	DECLARE_FUNCTION(execGetMonsterAIType); \
	DECLARE_FUNCTION(execGetMonsterAnim); \
	DECLARE_FUNCTION(execChangeAnimation);


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectTPS"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public:


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster(AMonster&&); \
	NO_API AMonster(const AMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster)


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_HP() { return STRUCT_OFFSET(AMonster, m_HP); } \
	FORCEINLINE static uint32 __PPO__m_HPMax() { return STRUCT_OFFSET(AMonster, m_HPMax); } \
	FORCEINLINE static uint32 __PPO__m_Attack() { return STRUCT_OFFSET(AMonster, m_Attack); } \
	FORCEINLINE static uint32 __PPO__m_Armor() { return STRUCT_OFFSET(AMonster, m_Armor); } \
	FORCEINLINE static uint32 __PPO__m_MovementSpeed() { return STRUCT_OFFSET(AMonster, m_MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__m_AttackRate() { return STRUCT_OFFSET(AMonster, m_AttackRate); } \
	FORCEINLINE static uint32 __PPO__m_WalkSpeed() { return STRUCT_OFFSET(AMonster, m_WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__m_RunSpeed() { return STRUCT_OFFSET(AMonster, m_RunSpeed); } \
	FORCEINLINE static uint32 __PPO__m_MonsterAnim() { return STRUCT_OFFSET(AMonster, m_MonsterAnim); } \
	FORCEINLINE static uint32 __PPO__m_CloseAttackDistance() { return STRUCT_OFFSET(AMonster, m_CloseAttackDistance); } \
	FORCEINLINE static uint32 __PPO__m_LongAttackDistance() { return STRUCT_OFFSET(AMonster, m_LongAttackDistance); } \
	FORCEINLINE static uint32 __PPO__m_SuspiciousVoice() { return STRUCT_OFFSET(AMonster, m_SuspiciousVoice); } \
	FORCEINLINE static uint32 __PPO__m_EnemySpotVoice() { return STRUCT_OFFSET(AMonster, m_EnemySpotVoice); } \
	FORCEINLINE static uint32 __PPO__m_LongAttackSound() { return STRUCT_OFFSET(AMonster, m_LongAttackSound); } \
	FORCEINLINE static uint32 __PPO__m_HitSound() { return STRUCT_OFFSET(AMonster, m_HitSound); } \
	FORCEINLINE static uint32 __PPO__m_HeadShotSound() { return STRUCT_OFFSET(AMonster, m_HeadShotSound); } \
	FORCEINLINE static uint32 __PPO__m_HitParticle() { return STRUCT_OFFSET(AMonster, m_HitParticle); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound1() { return STRUCT_OFFSET(AMonster, m_HurtSound1); } \
	FORCEINLINE static uint32 __PPO__m_HurtSound2() { return STRUCT_OFFSET(AMonster, m_HurtSound2); } \
	FORCEINLINE static uint32 __PPO__m_HeadshotEffect() { return STRUCT_OFFSET(AMonster, m_HeadshotEffect); } \
	FORCEINLINE static uint32 __PPO__m_LongAttackMuzzle() { return STRUCT_OFFSET(AMonster, m_LongAttackMuzzle); } \
	FORCEINLINE static uint32 __PPO__m_LongAttackBullet() { return STRUCT_OFFSET(AMonster, m_LongAttackBullet); } \
	FORCEINLINE static uint32 __PPO__m_DropItem() { return STRUCT_OFFSET(AMonster, m_DropItem); } \
	FORCEINLINE static uint32 __PPO__m_PatrolPoint() { return STRUCT_OFFSET(AMonster, m_PatrolPoint); } \
	FORCEINLINE static uint32 __PPO__m_WaitTime() { return STRUCT_OFFSET(AMonster, m_WaitTime); } \
	FORCEINLINE static uint32 __PPO__m_bCallBackupEnable() { return STRUCT_OFFSET(AMonster, m_bCallBackupEnable); } \
	FORCEINLINE static uint32 __PPO__m_bDeath() { return STRUCT_OFFSET(AMonster, m_bDeath); }


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_26_PROLOG
#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_RPC_WRAPPERS \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_INCLASS \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_PRIVATE_PROPERTY_OFFSET \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_SPARSE_DATA \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_INCLASS_NO_PURE_DECLS \
	ProjectTPS_Source_ProjectTPS_Monster_Monster_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTPS_API UClass* StaticClass<class AMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_Monster_Monster_h


#define FOREACH_ENUM_MONSTERAI(op) \
	op(MonsterAI::None) \
	op(MonsterAI::Idle) \
	op(MonsterAI::Patrol) \
	op(MonsterAI::Trace) \
	op(MonsterAI::Attack) \
	op(MonsterAI::Death) \
	op(MonsterAI::Suspicious) \
	op(MonsterAI::Skill1) \
	op(MonsterAI::Skill2) \
	op(MonsterAI::Skill3) \
	op(MonsterAI::Skill4) 

enum class MonsterAI : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<MonsterAI>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
