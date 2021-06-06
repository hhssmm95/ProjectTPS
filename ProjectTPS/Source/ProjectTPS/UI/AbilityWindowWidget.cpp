// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityWindowWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/TileView.h"
#include "Components/Border.h"
#include "AbilitySlotData.h"
#include "../Player/PlayerCharacter.h"
#include "../ProjectTPSGameInstance.h"
#include "Components/RichTextBlock.h"
#include "AbilitySlotWidget.h"


void UAbilityWindowWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	m_Slot1Button = Cast<UButton>(GetWidgetFromName(TEXT("EquipSlot1Button")));
	m_Slot2Button = Cast<UButton>(GetWidgetFromName(TEXT("EquipSlot2Button")));
	m_TileView = Cast<UTileView>(GetWidgetFromName(TEXT("AbilityTileView")));
	m_SelectNameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SelectAbilityNameText")));
	m_SelectDescText = Cast<URichTextBlock>(GetWidgetFromName(TEXT("SelectAbilityDescriptionText")));
	m_AbilityPointText = Cast<UTextBlock>(GetWidgetFromName(TEXT("AbilityPointText")));

	m_AssultLine1 = Cast<UBorder>(GetWidgetFromName(TEXT("AssultLine1")));
	m_AssultLine2 = Cast<UBorder>(GetWidgetFromName(TEXT("AssultLine2")));
	m_DefenceLine1 = Cast<UBorder>(GetWidgetFromName(TEXT("DefenceLine1")));
	m_DefenceLine2 = Cast<UBorder>(GetWidgetFromName(TEXT("DefenceLine2")));
	m_UtilityLine1 = Cast<UBorder>(GetWidgetFromName(TEXT("UtilityLine1")));
	m_UtilityLine2 = Cast<UBorder>(GetWidgetFromName(TEXT("UtilityLine2")));

	m_TileView->OnItemClicked().AddUObject(this, &UAbilityWindowWidget::SlotClick);
	m_TileView->OnItemDoubleClicked().AddUObject(this, &UAbilityWindowWidget::SlotDoubleClick);
	//m_TileView->OnItemIsHoveredChanged().AddUObject(this, &UAbilityWindowWidget::MouseHovered);
	m_Slot1Button->OnClicked.AddDynamic(this, &UAbilityWindowWidget::ClickSlot1Button);
	m_Slot2Button->OnClicked.AddDynamic(this, &UAbilityWindowWidget::ClickSlot2Button);
	m_Slot1Key = EAbility::None;
	m_Slot2Key = EAbility::None;
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
			break;
		case 1:
			RawKeyName = TEXT("Assult2");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		case 2:
			RawKeyName = TEXT("Assult3");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		case 3:
			RawKeyName = TEXT("Defence1");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		case 4:
			RawKeyName = TEXT("Defence2");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		case 5:
			RawKeyName = TEXT("Defence3");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		case 6:
			RawKeyName = TEXT("Utility1");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		case 7:
			RawKeyName = TEXT("Utility2");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		case 8:
			RawKeyName = TEXT("Utility3");
			//IconPath = TEXT("Texture2D'/Game/UI/sword.sword'");
			break;
		}

		pItemInfo = pGameInst->GetPlayerAbilityInfo(RawKeyName);

		pData->SetAbilityName(pItemInfo->Name);
		pData->SetAbilityKey(pItemInfo->Key);
		//pData->SetSlotTexture(IconPath);
		pData->SetSlotSign(pItemInfo->Sign);
		pData->SetSlotText(pItemInfo->Sign);
		pData->SetAbilityDesc(pItemInfo->Desc);
		m_TileView->AddItem(pData);
	}

	m_AbilityPoint = 9;
	UpdateAbilityPoint();
}

void UAbilityWindowWidget::SlotClick(UObject* pObj)
{
	UAbilitySlotData* pSlotData = Cast<UAbilitySlotData>(pObj);
	m_SelectNameText->SetText(FText::FromString(pSlotData->GetAbilityName()));
	m_SelectDescText->SetText(FText::FromString(pSlotData->GetAbilityDesc()));

	m_CurrentSlotData = pSlotData;
}

void UAbilityWindowWidget::SetAbility1Cooltime(EAbility Key)
{

	switch (Key)
	{
	case EAbility::Assult1:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Assult2:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Assult3:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Defence1:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Defence2:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Defence3:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Utility1:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Utility2:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	case EAbility::Utility3:
		m_Player->SetSlot1Cooltime(10.f);
		break;
	default:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	}

}

void UAbilityWindowWidget::SetAbility2Cooltime(EAbility Key)
{

	switch (Key)
	{
	case EAbility::Assult1:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Assult2:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Assult3:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Defence1:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Defence2:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Defence3:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Utility1:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Utility2:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	case EAbility::Utility3:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	default:
		m_Player->SetSlot2Cooltime(10.f);
		break;
	}

}
void UAbilityWindowWidget::ClickSlot1Button()
{
	if (!m_Player)
		m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (m_CurrentSlotData != nullptr && m_CurrentSlotData->GetSlotAvailable())
	{

		if (m_AbilitySlotText2->GetText().ToString() != m_CurrentSlotData->GetSlotSign())
		{
			m_AbilitySlotText1->SetText(FText::FromString(m_CurrentSlotData->GetSlotSign()));
			m_Slot1Key = m_CurrentSlotData->GetAbilityKey();
			//SetAbilityEnable(m_CurrentSlotData->GetAbilityKey());
		}
		else
		{
			m_AbilitySlotText2->SetText(m_AbilitySlotText1->GetText());
			m_AbilitySlotText1->SetText(FText::FromString(m_CurrentSlotData->GetSlotSign()));
			m_Slot2Key = m_Slot1Key;
			m_Slot1Key = m_CurrentSlotData->GetAbilityKey();
		}
		SetAbility1Cooltime(m_Slot1Key);
		SetAbility2Cooltime(m_Slot2Key);
		m_Player->SetSlot1Ability(EAbility::None);
		m_Player->SetSlot2Ability(EAbility::None);
		m_Player->SetSlot1Ability(m_Slot1Key);
		m_Player->SetSlot2Ability(m_Slot2Key);
		m_Player->SetSlot1Enable(true);
		/*SetAllAbilityDisable();
		SetAbilityEnable(m_Slot1Key);
		SetAbilityEnable(m_Slot2Key);*/
	}
}

void UAbilityWindowWidget::ClickSlot2Button()
{
	if (!m_Player)
		m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (m_CurrentSlotData != nullptr && m_CurrentSlotData->GetSlotAvailable())
	{
		if (m_AbilitySlotText1->GetText().ToString() != m_CurrentSlotData->GetSlotSign())
		{
			m_AbilitySlotText2->SetText(FText::FromString(m_CurrentSlotData->GetSlotSign()));
			m_Slot2Key = m_CurrentSlotData->GetAbilityKey();
		}
		else
		{
			m_AbilitySlotText1->SetText(m_AbilitySlotText2->GetText());
			m_AbilitySlotText2->SetText(FText::FromString(m_CurrentSlotData->GetSlotSign()));
			m_Slot1Key = m_Slot2Key;
			m_Slot2Key = m_CurrentSlotData->GetAbilityKey();
		}
		SetAbility1Cooltime(m_Slot1Key);
		SetAbility2Cooltime(m_Slot2Key);
		m_Player->SetSlot1Ability(EAbility::None);
		m_Player->SetSlot2Ability(EAbility::None);
		m_Player->SetSlot1Ability(m_Slot1Key);
		m_Player->SetSlot2Ability(m_Slot2Key);
		m_Player->SetSlot2Enable(true);
	}
}


void UAbilityWindowWidget::SlotDoubleClick(UObject* pObj)
{
	UAbilitySlotData* pSlotData = Cast<UAbilitySlotData>(pObj);

	UAbilitySlotWidget* pSlotWidget = Cast<UAbilitySlotWidget>(pSlotData->GetSlotWidget());

	if (pSlotWidget && m_AbilityPoint > 0)
	{
		
		switch (pSlotData->GetAbilityKey())
		{
		case EAbility::Assult1:
			if (AssultLevel == 0)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Red);
				m_AbilityPoint--;
				AssultLevel = 1;
				pSlotData->SetSlotAvailable(true);

			}
			break;
		case EAbility::Assult2:
			if (AssultLevel == 1)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Red);
				m_AbilityPoint--;
				AssultLevel = 2;
				pSlotData->SetSlotAvailable(true);
				FLinearColor BorderColor;
				BorderColor.R = 1.f;
				BorderColor.G = 0.1f;
				BorderColor.B = 0.f;
				BorderColor.A = 1.f;
				m_AssultLine1->SetBrushColor(BorderColor);
			}
			break;
		case EAbility::Assult3:
			if (AssultLevel == 2)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Red);
				m_AbilityPoint--;
				AssultLevel = 3;
				pSlotData->SetSlotAvailable(true);
				FLinearColor BorderColor;
				BorderColor.R = 1.f;
				BorderColor.G = 0.1f;
				BorderColor.B = 0.f;
				BorderColor.A = 1.f;
				m_AssultLine2->SetBrushColor(BorderColor);
			}
			break;
		case EAbility::Defence1:

			if (DefenceLevel == 0)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Blue);
				m_AbilityPoint--;
				DefenceLevel = 1;
				pSlotData->SetSlotAvailable(true);
			}
			break;
		case EAbility::Defence2:
			if (DefenceLevel == 1)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Blue);
				m_AbilityPoint--;
				DefenceLevel = 2;
				pSlotData->SetSlotAvailable(true);

				FLinearColor BorderColor;
				BorderColor.R = 0.f;
				BorderColor.G = 0.5f;
				BorderColor.B = 1.f;
				BorderColor.A = 1.f;
				m_DefenceLine1->SetBrushColor(BorderColor);
			}
			break;
		case EAbility::Defence3:
			if (DefenceLevel == 2)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Blue);
				m_AbilityPoint--;
				DefenceLevel = 3;
				pSlotData->SetSlotAvailable(true);

				FLinearColor BorderColor;
				BorderColor.R = 0.f;
				BorderColor.G = 0.5f;
				BorderColor.B = 1.f;
				BorderColor.A = 1.f;
				m_DefenceLine2->SetBrushColor(BorderColor);
			}
			break;
		case EAbility::Utility1:
			if (UtilityLevel == 0)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Green);
				m_AbilityPoint--;
				UtilityLevel = 1;
				pSlotData->SetSlotAvailable(true);
			}
			break;
		case EAbility::Utility2:
			if (UtilityLevel == 1)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Green);
				m_AbilityPoint--;
				UtilityLevel = 2;
				pSlotData->SetSlotAvailable(true);

				FLinearColor BorderColor;
				BorderColor.R = 0.3f;
				BorderColor.G = 1.f;
				BorderColor.B = 0.f;
				BorderColor.A = 1.f;
				m_UtilityLine1->SetBrushColor(BorderColor);
			}
			break;
		case EAbility::Utility3:
			if (UtilityLevel == 2)
			{
				pSlotData->GetSlotWidget()->SetSlotBorderColor(FColor::Green);
				m_AbilityPoint--;
				UtilityLevel = 3;
				pSlotData->SetSlotAvailable(true);
				FLinearColor BorderColor;
				BorderColor.R = 0.3f;
				BorderColor.G = 1.f;
				BorderColor.B = 0.f;
				BorderColor.A = 1.f;
				m_UtilityLine2->SetBrushColor(BorderColor);
			}
			break;
		}
		if (m_AbilityPoint < 0)
			m_AbilityPoint = 0;
		UpdateAbilityPoint();
	}
}

void UAbilityWindowWidget::UpdateAbilityPoint()
{
	m_AbilityPointText->SetText(FText::FromString(FString::FromInt(m_AbilityPoint)));
}