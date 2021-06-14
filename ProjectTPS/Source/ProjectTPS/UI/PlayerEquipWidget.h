// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "PlayerEquipWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UPlayerEquipWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_CurrentMagText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_RemainMagText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_GearText;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class APlayerCharacter* m_Player;
	EGearType m_CurrentGear;

protected:
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);


public:
	void SetCurrentMagText(int32 Ammo);
	void SetRemainMagText(int32 Ammo);
	void ChangeGear(float fScale);

	EGearType GetCurrentGear();
	void SetGearTextColorBlue();
	void SetGearTextColorOrigin();


};
