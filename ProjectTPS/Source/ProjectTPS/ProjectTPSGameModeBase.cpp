// Copyright Epic Games, Inc. All Rights Reserved.


#include "ProjectTPSGameModeBase.h"
#include "PlayerHUD.h"
#include "UI/MainHUDWidget.h"
#include "Monster/MonsterSpawnPoint.h"


AProjectTPSGameModeBase::AProjectTPSGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	//static ConstructorHelpers::FClassFinder<ACharacter> PlayerAsset(TEXT("Blueprint'/Game/Player/BPPlayerCharacter.BPPlayerCharacter_C'"));

	//if (PlayerAsset.Succeeded())
		//m_PlayerCharacter = PlayerAsset.Class;



}

void AProjectTPSGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//DefaultPawnClass = m_PlayerCharacter;

	FInputModeGameOnly inputMode;
	GetWorld()->GetFirstPlayerController()->SetInputMode(inputMode);
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("AlertSpawnPoint"), m_AlertSpawnPoint);
	FActorSpawnParameters Param;
	m_bGuideTextEnable = false;
	m_GuideTextTimeAcc = 0.f;
}


void AProjectTPSGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_bAlertEnable)
	{
		m_MainHUDWidget->SetAlertCountText(FString::Printf(TEXT("%d.%d"), (int32)m_AlertTimeAcc, (int32)((m_AlertTimeAcc - (int32)m_AlertTimeAcc)*100.f)));
		if (m_AlertTimeAcc <= 0)
		{
			m_bAlertEnable = false;
			m_AlertTimeAcc = m_AlertTime;
			m_MainHUDWidget->SetAlertVisible(false);

			for (auto& Point : m_AlertSpawnPoint)
			{
				AMonsterSpawnPoint* pPoint = Cast<AMonsterSpawnPoint>(Point);
				pPoint->SetSpawnEnable(false);
			}

			if (m_AlarmAmbientActor)
			{
				m_AlarmAmbientActor->Stop();
			}
			m_bGuideTextEnable = true;
			m_MainHUDWidget->SetGuideTextVisible(true);
		}
		m_AlertTimeAcc -= DeltaTime;
	}

	if (m_bGuideTextEnable)
	{
		if (m_GuideTextTimeAcc >= 4.f)
		{
			m_bGuideTextEnable = false;
			m_GuideTextTimeAcc = 0.f;
			m_MainHUDWidget->SetGuideTextVisible(false);
		}
		m_GuideTextTimeAcc += DeltaTime;
	}
}

void AProjectTPSGameModeBase::SetAlertWithTime()
{
	if (!m_MainHUDWidget)
	{
		APlayerHUD* m_HUD = Cast<APlayerHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
		m_MainHUDWidget = Cast<UMainHUDWidget>(m_HUD->GetMainHUDWidget());
	}
	m_AlertTimeAcc = m_AlertTime;
	m_bAlertEnable = true;
	m_MainHUDWidget->SetAlertVisible(true);

	for (auto& Point : m_AlertSpawnPoint)
	{
		AMonsterSpawnPoint* pPoint = Cast<AMonsterSpawnPoint>(Point);
		pPoint->SetSpawnEnable(true);
	}

	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("AlarmAmbient"), m_AlarmAmbient);

	if (!m_AlarmAmbientActor)
	{
		for (auto& Ambient : m_AlarmAmbient)
		{
			m_AlarmAmbientActor = Cast<AAmbientSound>(Ambient);
			m_AlarmAmbientActor->Play();
		}
	}
	else
	{
		m_AlarmAmbientActor->Play();
	}


}