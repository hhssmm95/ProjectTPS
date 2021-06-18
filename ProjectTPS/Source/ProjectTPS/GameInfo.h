// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Engine.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Engine/DataTable.h"

DECLARE_LOG_CATEGORY_EXTERN(UEKR1, Log, All);
#define LOG_CALLINFO	(FString(__FUNCTION__) + TEXT("{") + FString::FromInt(__LINE__) + TEXT("}"))
#define LOG(Format, ...)	UE_LOG(UEKR1, Warning, TEXT("%s : %s"), *LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

void PrintViewport(float fTime, const FColor& Color, const FString& strText);

UENUM(BlueprintType)
enum class ERevenantSkillType : uint8
{
	None,
	Skill1,
	Skill2,
	Skill3,
	Skill4
};

UENUM(BlueprintType)
enum class EGearType : uint8
{
	None,
	Suppressor,
	Scope,
	NightVision,
	ThermalVision

};

UENUM(BlueprintType)
enum class EItemType : uint8
{
	None,
	Ammo,
	AbilityPoint
};

UENUM(BlueprintType)
enum class EMoveDir : uint8
{
	None,
	Forward,
	ForwardRight,
	Right,
	BackwardRight,
	Backward,
	BackwardLeft,
	Left,
	ForwardLeft
};

UENUM(BlueprintType)
enum class EAbility : uint8
{
	None,
	Assult1,
	Assult2,
	Assult3,
	Defence1,
	Defence2,
	Defence3,
	Utility1,
	Utility2,
	Utility3
};

class PROJECTTPS_API GameInfo
{
public:
	GameInfo();
	~GameInfo();
};
