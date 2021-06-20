// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDWidget.h"
#include "PlayerHPWidget.h"
#include "PlayerEquipWidget.h"
#include "HitMarkerWidget.h"
#include "AbilityWindowWidget.h"
#include "BossHPWidget.h"
#include "Components/TextBlock.h"
#include "Components/BackgroundBlur.h"
#include "Components/ProgressBar.h"
#include "Components/Border.h"
#include "../Player/PlayerCharacter.h"

void UMainHUDWidget::NativePreConstruct()
{
	Super::NativePreConstruct();


	m_PlayerHPWidget = Cast<UPlayerHPWidget>(GetWidgetFromName(TEXT("UI_HPWidget")));
	m_PlayerEquipWidget = Cast<UPlayerEquipWidget>(GetWidgetFromName(TEXT("UI_EquipWidget")));
	m_HitMarkerWidget = Cast<UHitMarkerWidget>(GetWidgetFromName(TEXT("UI_HitMarker")));
	m_AbilityWindowWidget = Cast<UAbilityWindowWidget>(GetWidgetFromName(TEXT("UI_AbilityWindowWidget")));
	m_ScopeAim = Cast<UUserWidget>(GetWidgetFromName(TEXT("UI_ScopeAim")));
	m_BossHPWidget = Cast<UBossHPWidget>(GetWidgetFromName(TEXT("UI_BossHPBar")));

	m_AbilitySlotText1 = Cast<UTextBlock>(GetWidgetFromName(TEXT("AbilitySlotText1")));
	m_AbilitySlotText2 = Cast<UTextBlock>(GetWidgetFromName(TEXT("AbilitySlotText2")));
	m_BackgroundBlur = Cast<UBackgroundBlur>(GetWidgetFromName(TEXT("MainHUDBlur")));
	m_SlotProgress1 = Cast<UProgressBar>(GetWidgetFromName(TEXT("AbilitySlotProgress1")));
	m_SlotProgress2 = Cast<UProgressBar>(GetWidgetFromName(TEXT("AbilitySlotProgress2")));

	m_AlertCountText = Cast<UTextBlock>(GetWidgetFromName(TEXT("AlertCountText")));
	m_AlertText = Cast<UTextBlock>(GetWidgetFromName(TEXT("AlertText")));
	m_AlertBorder = Cast<UBorder>(GetWidgetFromName(TEXT("AlertBorder")));

	m_GuideText = Cast<UTextBlock>(GetWidgetFromName(TEXT("GuideText")));

	m_SlotInit = false;

}

void UMainHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
void UMainHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (m_bSlot1Disable)
	{
		m_SlotProgress1->SetPercent(1.f - (m_Slot1CooltimeAcc / m_Slot1Cooltime));
		if (m_Slot1CooltimeAcc >= m_Slot1Cooltime)
		{
			m_bSlot1Disable = false;
			m_Slot1CooltimeAcc = 0.f;
			m_SlotProgress1->SetPercent(0.f);

			APlayerCharacter* pPlayer = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			pPlayer->SetSlot1Enable(true);
		}
		m_Slot1CooltimeAcc += InDeltaTime;

	}

	if (m_bSlot2Disable)
	{
		m_SlotProgress2->SetPercent(1.f - (m_Slot2CooltimeAcc / m_Slot2Cooltime));
		if (m_Slot2CooltimeAcc >= m_Slot2Cooltime)
		{
			m_bSlot2Disable = false;
			m_Slot2CooltimeAcc = 0.f;
			m_SlotProgress1->SetPercent(0.f);

			APlayerCharacter* pPlayer = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			pPlayer->SetSlot2Enable(true);
		}
		m_Slot2CooltimeAcc += InDeltaTime;
	}
}

void UMainHUDWidget::AbilityWindowToggle()
{
	if (!m_SlotInit)
	{
		m_AbilityWindowWidget->InitAbilitySlot(m_AbilitySlotText1, m_AbilitySlotText2);
		m_SlotInit = true;
	}

	if (m_AbilityWindowWidget->GetVisibility() == ESlateVisibility::Collapsed)
	{
		UGameplayStatics::SetGamePaused(GetWorld(), true);

		m_AbilityWindowWidget->SetVisibility(ESlateVisibility::Visible);

		FInputModeGameAndUI	inputMode;
		GetWorld()->GetFirstPlayerController()->SetInputMode(inputMode);
		GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
		//m_BackgroundBlur->BlurStrength = 6.666f;
		m_BackgroundBlur->SetBlurStrength(6.666f);
	}
	else
	{
		UGameplayStatics::SetGamePaused(GetWorld(), false);

		m_AbilityWindowWidget->SetVisibility(ESlateVisibility::Collapsed);
		FInputModeGameOnly	inputMode;
		GetWorld()->GetFirstPlayerController()->SetInputMode(inputMode);
		GetWorld()->GetFirstPlayerController()->bShowMouseCursor = false;
		//m_BackgroundBlur->BlurStrength = 0.f;
		m_BackgroundBlur->SetBlurStrength(0.f);
		
	}
	
}

void UMainHUDWidget::ActiveSlot1Cooltime(float Cooltime)
{
	m_Slot1Cooltime = Cooltime;
	m_bSlot1Disable = true; 
	m_SlotProgress1->SetPercent(1.f);
}

void UMainHUDWidget::ActiveSlot2Cooltime(float Cooltime)
{
	m_Slot2Cooltime = Cooltime;
	m_bSlot2Disable = true;
	m_SlotProgress2->SetPercent(1.f);
}

void UMainHUDWidget::SetScopeAimVisible(bool visible)
{
	if (visible)
	{
		m_ScopeAim->SetVisibility(ESlateVisibility::HitTestInvisible);
	}
	else
	{
		m_ScopeAim->SetVisibility(ESlateVisibility::Collapsed);
	}
}


void UMainHUDWidget::SetAlertVisible(bool Visible)
{
	if (Visible)
	{
		m_AlertBorder->SetVisibility(ESlateVisibility::HitTestInvisible);
		m_AlertText->SetVisibility(ESlateVisibility::HitTestInvisible);
	}
	else
	{
		m_AlertBorder->SetVisibility(ESlateVisibility::Collapsed);
		m_AlertText->SetVisibility(ESlateVisibility::Collapsed);
	}

}
void UMainHUDWidget::SetAlertCountText(const FString& Text)
{
	m_AlertCountText->SetText(FText::FromString(Text));
}

void UMainHUDWidget::SetGuideTextVisible(bool Visible)
{
	if (Visible)
	{
		m_GuideText->SetVisibility(ESlateVisibility::HitTestInvisible);
	}
	else
	{
		m_GuideText->SetVisibility(ESlateVisibility::Collapsed);
	}

}