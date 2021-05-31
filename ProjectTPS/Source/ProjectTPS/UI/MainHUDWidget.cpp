// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDWidget.h"
#include "PlayerHPWidget.h"
#include "PlayerEquipWidget.h"
#include "HitMarkerWidget.h"

void UMainHUDWidget::NativePreConstruct()
{
	Super::NativePreConstruct();


	m_PlayerHPWidget = Cast<UPlayerHPWidget>(GetWidgetFromName(TEXT("UI_HPWidget")));
	m_PlayerEquipWidget = Cast<UPlayerEquipWidget>(GetWidgetFromName(TEXT("UI_EquipWidget")));
	m_HitMarkerWidget = Cast<UHitMarkerWidget>(GetWidgetFromName(TEXT("UI_HitMarker")));
}

void UMainHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
void UMainHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}