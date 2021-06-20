// Fill out your copyright notice in the Description page of Project Settings.


#include "BossHPWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"


void UBossHPWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	m_BossHPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("BossHPBar")));
	m_BossNameText = Cast<UTextBlock>(GetWidgetFromName(TEXT("BossNameText")));
}

void UBossHPWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UBossHPWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}


void UBossHPWidget::SetHPBar(float HP)
{
	m_BossHPBar->SetPercent(HP);
}

void UBossHPWidget::SetName(const FString& Text)
{
	m_BossNameText->SetText(FText::FromString(Text));
}

