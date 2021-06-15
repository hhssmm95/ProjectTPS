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
}


void AProjectTPSGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_bAlertEnable)
	{
		m_MainHUDWidget->SetAlertCountText((int32)m_AlertTimeAcc);
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
		}
		m_AlertTimeAcc -= DeltaTime;
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

}