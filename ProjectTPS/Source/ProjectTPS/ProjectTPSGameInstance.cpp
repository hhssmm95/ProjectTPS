// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectTPSGameInstance.h"

UProjectTPSGameInstance::UProjectTPSGameInstance()
{

	/*static ConstructorHelpers::FObjectFinder<UDataTable>	AbilityInfoAsset(TEXT("DataTable'/Game/UI/DTItemInfo.DTItemInfo'"));

	if (ItemInfoAsset.Succeeded())
		m_ItemInfoTable = ItemInfoAsset.Object;*/

}

void UProjectTPSGameInstance::Init()
{
	Super::Init();
}

const FPlayerAbilityInfo* UProjectTPSGameInstance::GetPlayerAbilityInfo(const FString& KeyName)
{
	return m_AbilityInfoTable->FindRow<FPlayerAbilityInfo>(*KeyName, TEXT(""));
}
