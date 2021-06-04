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
		class URichTextBlock* m_SelectDescText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_AbilityPointText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTileView* m_TileView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_AbilityPoint;

	class UTextBlock* m_AbilitySlotText1;
	class UTextBlock* m_AbilitySlotText2;

	/*class UImage* m_AbilitySlotImage1;
	class UImage* m_AbilitySlotImage2;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 AssultLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 DefenceLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 UtilityLevel;

	class UAbilitySlotData* m_CurrentSlotData;
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

	UFUNCTION()
		void SlotDoubleClick(UObject* pObj);


	void InitAbilitySlot(class UTextBlock* slot1, class UTextBlock* slot2)
	{
		m_AbilitySlotText1 = slot1;
		m_AbilitySlotText2 = slot2;
	}

};
