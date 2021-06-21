// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "DeathScreenWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UDeathScreenWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_DefeatText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UTextBlock* m_RestartText;


	FString m_FullText;
	FString m_CurrentText;
	bool m_bIsTextAnimEnd;

	bool m_bPlayTextAnim;
	float m_IntervalTime;
	float m_IntervalTimeAcc;
	int32 m_WriteCount;



protected:
	virtual void NativePreConstruct();
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

public:
	void ShowDefeatText();

	bool GetTextAnimationEnd()
	{
		return m_bIsTextAnimEnd;
	}
};
