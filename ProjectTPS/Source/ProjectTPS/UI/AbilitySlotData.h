// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "UObject/NoExportTypes.h"
#include "AbilitySlotData.generated.h"


UCLASS(Blueprintable, BlueprintType)
class PROJECTTPS_API UAbilitySlotData : public UObject
{
	GENERATED_BODY()


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EAbility m_AbilityKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString m_AbilityName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString m_AbilityDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UTexture2D* m_SlotTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString m_SlotText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FString m_SlotSign;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_SlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UAbilitySlotWidget* m_SlotWidget;

	bool m_SlotAvailable;
public:

	bool GetSlotAvailable()
	{
		return m_SlotAvailable;
	}

	UAbilitySlotWidget* GetSlotWidget()
	{
		return m_SlotWidget;
	}

	FString GetSlotSign()	const
	{
		return m_SlotSign;
	}

	int32 GetSlotIndex()	const
	{
		return m_SlotIndex;
	}

	EAbility GetAbilityKey()	const
	{
		return m_AbilityKey;
	}

	FString GetAbilityName()	const
	{
		return m_AbilityName;
	}

	FString GetAbilityDesc()	const
	{
		return m_AbilityDescription;
	}

	UTexture2D* GetSlotTexture()	const
	{
		return m_SlotTexture;
	}

	FString GetSlotText()	const
	{
		return m_SlotText;
	}
public:

	void SetSlotAvailable(bool enable)
	{
		m_SlotAvailable = enable;
	}
	void SetSlotWidget(UAbilitySlotWidget* widget)
	{
		m_SlotWidget = widget;
	}
	void SetSlotSign(const FString& Sign)
	{
		m_SlotSign = Sign;
	}

	void SetSlotIndex(int32 index)
	{
		m_SlotIndex = index;
	}

	void SetAbilityKey(EAbility Key)
	{
		m_AbilityKey = Key;
	}

	void SetAbilityName(const FString& Name)
	{
		m_AbilityName = Name;
	}

	void SetAbilityDesc(const FString& Desc)
	{
		m_AbilityDescription = Desc;
	}

	void SetSlotTexture(UTexture2D* Texture)
	{
		m_SlotTexture = Texture;
	}

	void SetSlotText(const FString& Text)
	{
		m_SlotText = Text;
	}
};
