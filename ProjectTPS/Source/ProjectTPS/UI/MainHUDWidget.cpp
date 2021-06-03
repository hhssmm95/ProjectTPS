// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDWidget.h"
#include "PlayerHPWidget.h"
#include "PlayerEquipWidget.h"
#include "HitMarkerWidget.h"
#include "AbilityWindowWidget.h"

void UMainHUDWidget::NativePreConstruct()
{
	Super::NativePreConstruct();


	m_PlayerHPWidget = Cast<UPlayerHPWidget>(GetWidgetFromName(TEXT("UI_HPWidget")));
	m_PlayerEquipWidget = Cast<UPlayerEquipWidget>(GetWidgetFromName(TEXT("UI_EquipWidget")));
	m_HitMarkerWidget = Cast<UHitMarkerWidget>(GetWidgetFromName(TEXT("UI_HitMarker")));
	m_AbilityWindowWidget = Cast<UAbilityWindowWidget>(GetWidgetFromName(TEXT("UI_AbilityWindowWidget")));
		
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
	if (m_AbilityWindowWidget->GetVisibility() == ESlateVisibility::Collapsed)
	{
		m_AbilityWindowWidget->SetVisibility(ESlateVisibility::Visible);

		FInputModeGameAndUI	inputMode;
		GetWorld()->GetFirstPlayerController()->SetInputMode(inputMode);
		GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
	}
	else
	{
		m_AbilityWindowWidget->SetVisibility(ESlateVisibility::Collapsed);
		FInputModeGameOnly	inputMode;
		GetWorld()->GetFirstPlayerController()->SetInputMode(inputMode);
		GetWorld()->GetFirstPlayerController()->bShowMouseCursor = false;
	}
	
}