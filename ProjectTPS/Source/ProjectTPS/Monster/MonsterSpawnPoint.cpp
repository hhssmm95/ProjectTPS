// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterSpawnPoint.h"
#include "MonsterAIController.h"

// Sets default values
AMonsterSpawnPoint::AMonsterSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_SpawnTime = 2.f;
	m_SpawnTimeAcc = 0.f;
	m_SpawnMonster = nullptr;

	m_PatrolPoint.Add(this);

}

// Called when the game starts or when spawned
void AMonsterSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonsterSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!m_SpawnMonster && IsValid(m_SpawnType) && m_bSpawnEnable)
	{
		m_SpawnTimeAcc += DeltaTime;

		if (m_SpawnTimeAcc >= m_SpawnTime)
		{
			m_SpawnTimeAcc = 0.f;



			FActorSpawnParameters	param;
			param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			m_SpawnMonster = GetWorld()->SpawnActor<AMonster>(m_SpawnType, GetActorLocation(),
				GetActorRotation(), param);

			m_SpawnMonster->SetSpawnPoint(this);

			for (auto& actor : m_PatrolPoint)
			{
				m_SpawnMonster->AddPatrolPoint(actor);
			}
			AMonsterAIController* pController = Cast<AMonsterAIController>(m_SpawnMonster->GetController());

			if (m_bCallBackUpEnable)
			{
				m_SpawnMonster->SetCallBackUpEnable(true);
				pController->SetCallBackUpEnable(m_bCallBackUpEnable);
			}

			if (m_bIsChasing)
			{
				pController->SetTargetAsPlayer();
			}

			if (m_bSpawnContinuous)
				m_SpawnMonster = nullptr;
		}
	}
}

