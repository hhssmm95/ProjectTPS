// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Monster.h"
#include "MonsterPatrolPoint.h"
#include "GameFramework/Actor.h"
#include "MonsterSpawnPoint.generated.h"

UCLASS()
class PROJECTTPS_API AMonsterSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMonsterSpawnPoint();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<AMonster>	m_SpawnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TArray<AActor*>			m_PatrolPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_SpawnTime;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_bSpawnEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_bCallBackUpEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_bSpawnContinuous;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_bIsChasing;

	float m_SpawnTimeAcc;
	AMonster* m_SpawnMonster;

public:
	void StartSpawn()
	{
		m_SpawnMonster = nullptr;
	}

	void SetSpawnEnable(bool enable)
	{
		m_bSpawnEnable = enable;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
