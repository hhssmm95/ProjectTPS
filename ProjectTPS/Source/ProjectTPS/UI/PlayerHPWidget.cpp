// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHPWidget.h"
#include "Components/ProgressBar.h"


void UPlayerHPWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	m_HPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("Player_HPBar")));
}

void UPlayerHPWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
void UPlayerHPWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}




void UPlayerHPWidget::SetHPBar(float HP)
{
	m_HPBar->SetPercent(HP);
}
