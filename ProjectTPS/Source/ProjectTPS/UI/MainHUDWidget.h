// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "MainHUDWidget.generated.h"


UCLASS()
class PROJECTTPS_API UMainHUDWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UPlayerHPWidget* m_PlayerHPWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UPlayerEquipWidget* m_PlayerEquipWidget;


protected:
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	UPlayerHPWidget* GetPlayerHPWidget()	const
	{
		return m_PlayerHPWidget;
	}

	UPlayerEquipWidget* GetPlayerEquipWidget()	const
	{
		return m_PlayerEquipWidget;
	}
};
