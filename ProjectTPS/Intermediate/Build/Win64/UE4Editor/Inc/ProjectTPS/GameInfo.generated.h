// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTPS_GameInfo_generated_h
#error "GameInfo.generated.h already included, missing '#pragma once' in GameInfo.h"
#endif
#define PROJECTTPS_GameInfo_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTPS_Source_ProjectTPS_GameInfo_h


#define FOREACH_ENUM_EABILITY(op) \
	op(EAbility::None) \
	op(EAbility::Assult1) \
	op(EAbility::Assult2) \
	op(EAbility::Assult3) \
	op(EAbility::Defence1) \
	op(EAbility::Defence2) \
	op(EAbility::Defence3) \
	op(EAbility::Utility1) \
	op(EAbility::Utility2) \
	op(EAbility::Utility3) 

enum class EAbility : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<EAbility>();

#define FOREACH_ENUM_EMOVEDIR(op) \
	op(EMoveDir::None) \
	op(EMoveDir::Forward) \
	op(EMoveDir::ForwardRight) \
	op(EMoveDir::Right) \
	op(EMoveDir::BackwardRight) \
	op(EMoveDir::Backward) \
	op(EMoveDir::BackwardLeft) \
	op(EMoveDir::Left) \
	op(EMoveDir::ForwardLeft) 

enum class EMoveDir : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<EMoveDir>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::None) \
	op(EItemType::Ammo) \
	op(EItemType::AbilityPoint) 

enum class EItemType : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EGEARTYPE(op) \
	op(EGearType::None) \
	op(EGearType::Suppressor) \
	op(EGearType::Scope) \
	op(EGearType::NightVision) \
	op(EGearType::ThermalVision) 

enum class EGearType : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<EGearType>();

#define FOREACH_ENUM_EREVENANTSKILLTYPE(op) \
	op(ERevenantSkillType::None) \
	op(ERevenantSkillType::Skill1) \
	op(ERevenantSkillType::Skill2) \
	op(ERevenantSkillType::Skill3) \
	op(ERevenantSkillType::Skill4) 

enum class ERevenantSkillType : uint8;
template<> PROJECTTPS_API UEnum* StaticEnum<ERevenantSkillType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
