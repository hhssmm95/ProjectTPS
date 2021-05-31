// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "HitMarkerWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UHitMarkerWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	void CallBodyShotEvent();
	void CallHeadShotEvent();

	UFUNCTION(BlueprintImplementableEvent, Category = "HitMarker")
	void OnBodyShot();

	UFUNCTION(BlueprintImplementableEvent, Category = "HitMarker")
	void OnHeadShot();
};
