// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerEquipWidget.h"
#include "Components/TextBlock.h"


void UPlayerEquipWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	m_CurrentMagText = Cast<UTextBlock>(GetWidgetFromName(TEXT("Player_CurrentMag")));
	m_RemainMagText = Cast<UTextBlock>(GetWidgetFromName(TEXT("Player_RemainMag")));
}

void UPlayerEquipWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
void UPlayerEquipWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}


void UPlayerEquipWidget::SetCurrentMagText(int32 Ammo)
{
	m_CurrentMagText->SetText(FText::FromString(FString::FromInt(Ammo)));
}


void UPlayerEquipWidget::SetRemainMagText(int32 Ammo)
{

	m_RemainMagText->SetText(FText::FromString(FString::FromInt(Ammo)));
}
