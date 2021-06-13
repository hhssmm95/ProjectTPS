// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerEquipWidget.h"
#include "Components/TextBlock.h"


void UPlayerEquipWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	m_CurrentMagText = Cast<UTextBlock>(GetWidgetFromName(TEXT("Player_CurrentMag")));
	m_RemainMagText = Cast<UTextBlock>(GetWidgetFromName(TEXT("Player_RemainMag")));
	m_GearText = Cast<UTextBlock>(GetWidgetFromName(TEXT("GearText")));
	m_CurrentGear = EGearType::None;
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

EGearType UPlayerEquipWidget::GetCurrentGear()
{
	return m_CurrentGear;
}


void UPlayerEquipWidget::ChangeGear(float fScale)
{
	if (fScale > 0)
	{
		switch (m_CurrentGear)
		{
		case EGearType::None:
			m_CurrentGear = EGearType::Suppressor;
			m_GearText->SetText(FText::FromString(TEXT("SP")));
			break;
		case EGearType::Suppressor:
			m_CurrentGear = EGearType::Scope;
			m_GearText->SetText(FText::FromString(TEXT("SC")));
			break;
		case EGearType::Scope:
			m_CurrentGear = EGearType::NightVision;
			m_GearText->SetText(FText::FromString(TEXT("NV")));
			break;
		case EGearType::NightVision:
			m_CurrentGear = EGearType::ThermalVision;
			m_GearText->SetText(FText::FromString(TEXT("TM")));
			break;
		case EGearType::ThermalVision:
			m_CurrentGear = EGearType::None;
			m_GearText->SetText(FText::FromString(TEXT("- -")));
			break;
		}
	}
	else if (fScale < 0)
	{
		switch (m_CurrentGear)
		{
		case EGearType::None:
			m_CurrentGear = EGearType::ThermalVision;
			m_GearText->SetText(FText::FromString(TEXT("TM")));
			break;
		case EGearType::Suppressor:
			m_CurrentGear = EGearType::None;
			m_GearText->SetText(FText::FromString(TEXT("- -")));
			break;
		case EGearType::Scope:
			m_CurrentGear = EGearType::Suppressor;
			m_GearText->SetText(FText::FromString(TEXT("SP")));
			break;
		case EGearType::NightVision:
			m_CurrentGear = EGearType::Scope;
			m_GearText->SetText(FText::FromString(TEXT("SC")));
			break;
		case EGearType::ThermalVision:
			m_CurrentGear = EGearType::NightVision;
			m_GearText->SetText(FText::FromString(TEXT("NV")));
			break;
		}
	}
}