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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UHitMarkerWidget* m_HitMarkerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UAbilityWindowWidget* m_AbilityWindowWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UBackgroundBlur* m_BackgroundBlur;

	class UTextBlock* m_AbilitySlotText1;
	class UTextBlock* m_AbilitySlotText2;

	/*class UImage* m_AbilitySlotImage1;
	class UImage* m_AbilitySlotImage2;*/

	bool m_SlotInit;
protected:
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	void AbilityWindowToggle();

public:
	UPlayerHPWidget* GetPlayerHPWidget()	const
	{
		return m_PlayerHPWidget;
	}

	UPlayerEquipWidget* GetPlayerEquipWidget()	const
	{
		return m_PlayerEquipWidget;
	}

	UHitMarkerWidget* GetHitMarkerWidget()	const
	{
		return m_HitMarkerWidget;
	}
};
