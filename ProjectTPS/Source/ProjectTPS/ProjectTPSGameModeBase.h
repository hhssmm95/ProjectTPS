// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameInfo.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectTPSGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class PROJECTTPS_API AProjectTPSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProjectTPSGameModeBase();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<ACharacter> m_PlayerCharacter;

	UPROPERTY()
	TArray<AActor*> m_AlarmAmbient;

	UPROPERTY(VisibleAnywhere)
	AAmbientSound* m_AlarmAmbientActor;

	UPROPERTY()
	TArray<AActor*> m_AlertSpawnPoint;

	UPROPERTY()
		class UMainHUDWidget* m_MainHUDWidget;

	bool m_bAlertEnable;
	float m_AlertTimeAcc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_AlertTime;

	bool m_bGuideTextEnable;
	float m_GuideTextTimeAcc;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void SetAlertWithTime();
	UFUNCTION(BlueprintCallable)
	void SetAlertWithTime(float AlertTime);

	UFUNCTION(BlueprintCallable)
	UMainHUDWidget* GetMainHUDWidget() const
	{
		return m_MainHUDWidget;
	}
	

};
