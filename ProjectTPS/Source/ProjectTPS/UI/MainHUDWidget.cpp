// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDWidget.h"
#include "PlayerHPWidget.h"
#include "PlayerEquipWidget.h"
#include "HitMarkerWidget.h"
#include "AbilityWindowWidget.h"
#include "Components/TextBlock.h"
#include "Components/BackgroundBlur.h"

void UMainHUDWidget::NativePreConstruct()
{
	Super::NativePreConstruct();


	m_PlayerHPWidget = Cast<UPlayerHPWidget>(GetWidgetFromName(TEXT("UI_HPWidget")));
	m_PlayerEquipWidget = Cast<UPlayerEquipWidget>(GetWidgetFromName(TEXT("UI_EquipWidget")));
	m_HitMarkerWidget = Cast<UHitMarkerWidget>(GetWidgetFromName(TEXT("UI_HitMarker")));
	m_AbilityWindowWidget = Cast<UAbilityWindowWidget>(GetWidgetFromName(TEXT("UI_AbilityWindowWidget")));
	m_AbilitySlotText1 = Cast<UTextBlock>(GetWidgetFromName(TEXT("AbilitySlotText1")));
	m_AbilitySlotText2 = Cast<UTextBlock>(GetWidgetFromName(TEXT("AbilitySlotText2")));
	m_BackgroundBlur = Cast<UBackgroundBlur>(GetWidgetFromName(TEXT("MainHUDBlur")));
	m_SlotInit = false;
}

void UMainHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
void UMainHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
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