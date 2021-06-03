// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityWindowWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/TileView.h"
#include "AbilitySlotData.h"
#include "../Player/PlayerCharacter.h"
#include "../ProjectTPSGameInstance.h"


void UAbilityWindowWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	m_Slot1Button = Cast<UButton>(GetWidgetFromName(TEXT("EquipSlot1Button")));
	m_Slot2Button = Cast<UButton>(GetWidgetFromName(TEXT("EquipSlot2Button")));
	m_TileView = Cast<UTileView>(GetWidgetFromName(TEXT("AbilityTileView")));
	m_SelectNameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SelectAbilityNameText")));
	m_SelectDescText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SelectAbilityDescriptionText")));
	m_AbilityPointText = Cast<UTextBlock>(GetWidgetFromName(TEXT("AbilityPointText")));


	m_TileView->OnItemClicked().AddUObject(this, &UAbilityWindowWidget::SlotClick);
	//m_TileView->OnItemIsHoveredChanged().AddUObject(this, &UAbilityWindowWidget::MouseHovered);
	m_Slot1Button->OnClicked.AddDynamic(this, &UAbilityWindowWidget::ClickSlot1Button);
	m_Slot2Button->OnClicked.AddDynamic(this, &UAbilityWindowWidget::ClickSlot2Button);

}


void UAbilityWindowWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitSlot();
}

void UAbilityWindowWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UAbilityWindowWidget::InitSlot()
{
	UProjectTPSGameInstance* pGameInst = Cast<UProjectTPSGameInstance>(GetWorld()->GetGameInstance());

	const FPlayerAbilityInfo* pItemInfo = nullptr;
	FString RawKeyName;
	//EAbility	AbilityKey = EAbility::None;
	//FString	IconPath;
	FString SlotText;

	for (int32 i = 0; i < 9; ++i)
	{
		UAbilitySlotData* pData = NewObject<UAbilitySlotData>(this,
			UAbilitySlotData::StaticClass());

		pData->SetSlotIndex(i);
		//pData->SetItemCount(1);
		
		switch(i)
		{
		case 0:
			RawKeyName = TEXT("Assult1");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("A1");
			break;
		case 1:
			RawKeyName = TEXT("Assult2");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("A2");
			break;
		case 2:
			RawKeyName = TEXT("Assult3");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("A3");
			break;
		case 3:
			RawKeyName = TEXT("Defence1");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("D1");
			break;
		case 4:
			RawKeyName = TEXT("Defence2");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("D2");
			break;
		case 5:
			RawKeyName = TEXT("Defence3");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("D3");
			break;
		case 6:
			RawKeyName = TEXT("Utility1");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("U1");
			break;
		case 7:
			RawKeyName = TEXT("Utility2");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("U2");
			break;
		case 8:
			RawKeyName = TEXT("Utility3");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			SlotText = TEXT("U3");
			break;
		}

		pItemInfo = pGameInst->GetPlayerAbilityInfo(RawKeyName);

		pData->SetAbilityName(pItemInfo->Name);
		pData->SetAbilityKey(pItemInfo->Key);
		//pData->SetSlotTexture(IconPath);
		pData->SetSlotText(SlotText);
		pData->SetAbilityDesc(pItemInfo->Desc);
		m_TileView->AddItem(pData);
	}
}

void UAbilityWindowWidget::SlotClick(UObject* pObj)
{
	UAbilitySlotData* pSlotData = Cast<UAbilitySlotData>(pObj);
	m_SelectNameText->SetText(FText::FromString(pSlotData->GetAbilityName()));
	m_SelectDescText->SetText(FText::FromString(pSlotData->GetAbilityDesc()));

}

void UAbilityWindowWidget::ClickSlot1Button()
{


}

void UAbilityWindowWidget::ClickSlot2Button()
{


}
//
//void UAbilityWindowWidget::MouseHovered(UObject* pObj, bool isHovered)
//{
//	if (isHovered)
//	{
//		UInventoryItemData* pData = Cast<UInventoryItemData>(pObj);
//		float mouseX;
//		float mouseY;
//		UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetMousePosition(mouseX, mouseY);
//		//UE_LOG(MyLog, Warning, TEXT("Mouse Location: %f, %f"), mouseX, mouseY);
//
//		if (pData)
//		{
//			m_InfoWidget->SetInfoIcon(pData->GetIconTexture());
//			m_InfoWidget->SetNameText(pData->GetItemName());
//			m_InfoWidget->SetGradeText(pData->GetItemGrade());
//			m_InfoWidget->SetDescText(pData->GetDesc());
//			m_InfoWidget->SetSellText(pData->GetSell());
//
//			//m_InfoWidget->SetPositionInViewport(FVector2D(mouseX, mouseY), false);
//
//			m_InfoWidget->SetVisibility(ESlateVisibility::Visible);
//
//			//m_InfoWidget->SetRenderTranslation(FVector2D(mouseX, mouseY));
//			//PrintViewport(1.f, FColor::Blue, TEXT("Item Click"));
//
//		}
//	}
//	else
//	{
//		//m_InfoWidget->SetRenderTranslation(FVector2D(mouseX, mouseY));
//		m_InfoWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//}

//
//void UAbilityWindowWidget::CloseButtonClick()
//{
//	SetVisibility(ESlateVisibility::Collapsed);
//}

