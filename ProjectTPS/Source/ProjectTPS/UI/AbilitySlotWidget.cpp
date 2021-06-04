// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySlotWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/Border.h"
#include "AbilitySlotData.h"

void UAbilitySlotWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	m_SlotIcon = Cast<UImage>(GetWidgetFromName(TEXT("SlotImage")));
	m_SlotText = Cast<UTextBlock>(GetWidgetFromName(TEXT("SlotText")));
	m_SlotBorder = Cast<UBorder>(GetWidgetFromName(TEXT("SlotBorder")));
}

void UAbilitySlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
void UAbilitySlotWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UAbilitySlotWidget::SetSlotTexture(const FString& Path)
{
	UTexture2D* pIconTex = LoadObject<UTexture2D>(nullptr, *Path);

	m_SlotIcon->SetBrushFromTexture(pIconTex);
}

void UAbilitySlotWidget::SetSlotTexture(UTexture2D* pTex)
{
	m_SlotIcon->SetBrushFromTexture(pTex);
}

void UAbilitySlotWidget::SetSlotText(const FString& Text)
{
	m_SlotText->SetText(FText::FromString(Text));
}

void UAbilitySlotWidget::SetSlotBorderColor(FColor Color)
{
	m_SlotBorder->SetBrushColor(Color.ReinterpretAsLinear());
}

void UAbilitySlotWidget::SetData(UAbilitySlotData* pData)
{
	m_Index = pData->GetSlotIndex();
	m_AbilityKey = pData->GetAbilityKey();
	m_AbilityName = pData->GetAbilityName();
	m_AbilityDescription = pData->GetAbilityDesc();
	//SetSlotTexture(pData->GetSlotTexture());
	SetSlotText(pData->GetSlotText());
}
