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
	class UUserWidget* m_ScopeAim;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UBackgroundBlur* m_BackgroundBlur;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UProgressBar* m_SlotProgress1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UProgressBar* m_SlotProgress2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_AlertCountText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_AlertText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UBorder* m_AlertBorder;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_GuideText;

	class UTextBlock* m_AbilitySlotText1;
	class UTextBlock* m_AbilitySlotText2;

	/*class UImage* m_AbilitySlotImage1;
	class UImage* m_AbilitySlotImage2;*/

	bool m_SlotInit;
	bool m_bSlot1Disable;
	bool m_bSlot2Disable;

	float m_Slot1Cooltime;
	float m_Slot2Cooltime;
	float m_Slot1CooltimeAcc;
	float m_Slot2CooltimeAcc;

protected:
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	void SetScopeAimVisible(bool visible);

	void AbilityWindowToggle();
	void ActiveSlot1Cooltime(float Cooltime);
	void ActiveSlot2Cooltime(float Cooltime);

	void SetAlertVisible(bool Visible);
	void SetAlertCountText(const FString& Text);

	void SetGuideTextVisible(bool Visible);
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
