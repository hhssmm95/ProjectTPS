// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerEquipWidget.h"
#include "Components/TextBlock.h"
#include "../Player/PlayerCharacter.h"


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
	if (!m_Player)
		m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	m_CurrentMagText->SetText(FText::FromString(FString::FromInt(Ammo)));
}


void UPlayerEquipWidget::SetRemainMagText(int32 Ammo)
{

	if (!m_Player)
		m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
	m_RemainMagText->SetText(FText::FromString(FString::FromInt(Ammo)));
}

EGearType UPlayerEquipWidget::GetCurrentGear()
{
	return m_CurrentGear;
}


void UPlayerEquipWidget::ChangeGear(float fScale)
{
	FSlateColor OriginColor = FLinearColor(0.33f * 255.f, 0.8611f * 255.f, 0.8697f * 255.f, 1.0f);
	FSlateColor LColor = FLinearColor(0.f * 255.f, 0.8713f * 255.f, 0.3112f * 255.f, 1.0f);
	
	if (!m_Player)
		m_Player = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (fScale > 0)
	{
		switch (m_CurrentGear)
		{
		case EGearType::None:
			m_CurrentGear = EGearType::Suppressor;
			m_GearText->SetText(FText::FromString(TEXT("SP")));

			if (m_Player->GetUsingSuppressor())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			
			break;
		case EGearType::Suppressor:
			m_CurrentGear = EGearType::Scope;
			m_GearText->SetText(FText::FromString(TEXT("SC")));
			if (m_Player->GetUsingScope())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			break;
		case EGearType::Scope:
			m_CurrentGear = EGearType::NightVision;
			m_GearText->SetText(FText::FromString(TEXT("NV")));
			if (m_Player->GetUsingNightVision())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			break;
		case EGearType::NightVision:
			m_CurrentGear = EGearType::ThermalVision;
			m_GearText->SetText(FText::FromString(TEXT("TM")));
			if (m_Player->GetUsingThermalVision())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			break;
		case EGearType::ThermalVision:
			m_CurrentGear = EGearType::None;
			m_GearText->SetText(FText::FromString(TEXT("- -")));
			m_GearText->SetColorAndOpacity(OriginColor);


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
			if (m_Player->GetUsingThermalVision())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			break;
		case EGearType::Suppressor:
			m_CurrentGear = EGearType::None;
			m_GearText->SetText(FText::FromString(TEXT("- -")));
			m_GearText->SetColorAndOpacity(OriginColor);
			break;
		case EGearType::Scope:
			m_CurrentGear = EGearType::Suppressor;
			m_GearText->SetText(FText::FromString(TEXT("SP")));
			if (m_Player->GetUsingSuppressor())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			break;
		case EGearType::NightVision:
			m_CurrentGear = EGearType::Scope;
			m_GearText->SetText(FText::FromString(TEXT("SC")));
			if (m_Player->GetUsingScope())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			break;
		case EGearType::ThermalVision:
			m_CurrentGear = EGearType::NightVision;
			m_GearText->SetText(FText::FromString(TEXT("NV")));
			if (m_Player->GetUsingNightVision())
				m_GearText->SetColorAndOpacity(LColor);
			else
				m_GearText->SetColorAndOpacity(OriginColor);
			break;
		}
	}
}

void UPlayerEquipWidget::SetGearTextColorBlue()
{
	FSlateColor LColor = FLinearColor(0.f * 255.f, 0.8713f * 255.f, 0.3112f * 255.f, 1.0f);
	m_GearText->SetColorAndOpacity(LColor);
}
void UPlayerEquipWidget::SetGearTextColorOrigin()
{

	FSlateColor LColor = FLinearColor(0.33f * 255.f, 0.8611f * 255.f, 0.8697f * 255.f, 1.0f);
	m_GearText->SetColorAndOpacity(LColor);
}