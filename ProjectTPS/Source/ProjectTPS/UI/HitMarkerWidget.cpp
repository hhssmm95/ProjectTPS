// Fill out your copyright notice in the Description page of Project Settings.


#include "HitMarkerWidget.h"


void UHitMarkerWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

}

void UHitMarkerWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
void UHitMarkerWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
}


void UHitMarkerWidget::CallBodyShotEvent()
{
	OnBodyShot();
}
void UHitMarkerWidget::CallHeadShotEvent()
{
	OnHeadShot();
}