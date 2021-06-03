// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Engine/GameInstance.h"
#include "ProjectTPSGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAbilityInfo : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EAbility Key;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString	Desc;

};

UCLASS()
class PROJECTTPS_API UProjectTPSGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UProjectTPSGameInstance();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UDataTable* m_AbilityInfoTable;

public:
	
	virtual void Init();

public:
	const FPlayerAbilityInfo* GetPlayerAbilityInfo(const FString& KeyName);
};
