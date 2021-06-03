// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "GameFramework/HUD.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API APlayerHUD : public AHUD
{
	GENERATED_BODY()

protected:

	class UMainHUDWidget* m_MainHUDWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<UMainHUDWidget>	m_MainHUDWidgetClass;

public:
	APlayerHUD();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UMainHUDWidget* GetMainHUDWidget()	const
	{
		return m_MainHUDWidget;
	}
	void AbilityWindowToggle();

	void UpdatePlayerHP(float HP);
	void HeadShot();
	void BodyShot();
};
