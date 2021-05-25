// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInfo.h"

DEFINE_LOG_CATEGORY(UEKR1);


GameInfo::GameInfo()
{
}

GameInfo::~GameInfo()
{
}

void PrintViewport(float fTime, const FColor& Color, const FString& strText)
{
	GEngine->AddOnScreenDebugMessage(-1, fTime, Color, strText);
}

