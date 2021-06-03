// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "AbilityWindowWidget.generated.h"


UCLASS()
class PROJECTTPS_API UAbilityWindowWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UImage* m_TitleBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UButton* m_Slot1Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UButton* m_Slot2Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_SelectNameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_SelectDescText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_AbilityPointText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTileView* m_TileView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_AbilityPoint;

protected:
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

protected:
	void InitSlot();

public:
	UFUNCTION(BlueprintCallable)
		void SlotClick(UObject* pObj);

	UFUNCTION(BlueprintCallable)
		void ClickSlot1Button();

	UFUNCTION(BlueprintCallable)
		void ClickSlot2Button();
};
