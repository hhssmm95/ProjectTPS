// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Engine.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

DECLARE_LOG_CATEGORY_EXTERN(UEKR1, Log, All);
#define LOG_CALLINFO	(FString(__FUNCTION__) + TEXT("{") + FString::FromInt(__LINE__) + TEXT("}"))
#define LOG(Format, ...)	UE_LOG(UEKR1, Warning, TEXT("%s : %s"), *LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

void PrintViewport(float fTime, const FColor& Color, const FString& strText);


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

class PROJECTTPS_API GameInfo
{
public:
	GameInfo();
	~GameInfo();
};
