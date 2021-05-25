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

PRAGMA_ENABLE_DEPRECATION_WARNINGS
