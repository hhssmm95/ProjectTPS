// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster.h"
#include "MonsterAIController.h"

// Sets default values
AMonster::AMonster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	AIControllerClass = AMonsterAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	
	m_eMonsterAIType = MonsterAI::Idle;

	m_WaitTime = 0.5f;
	m_WaitTimeAcc = 0.f;
	m_bWait = true;
	m_bDeath = false;
	m_PatrolDir = 1;

	m_WalkSpeed = 250.f;
	m_RunSpeed = 500.f;

	m_CloseAttackDistance = 250.f;
	m_LongAttackDistance = 1000.f;

}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();

	m_MonsterAnim = Cast<UMonsterAnim>(GetMesh()->GetAnimInstance());

	//m_SightDistance = 3000.f;
	//m_SightAngle = 30.f;

	//PrintViewport(5.f, FColor::Blue, TEXT("Monster Init"));
	//AMonsterAIController* pController = Cast<AMonsterAIController>(GetController());
	//pController->PerceptionInit();
}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


		switch (m_eMonsterAIType)
		{
		case MonsterAI::Idle:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Idle);
			break;
		case MonsterAI::Patrol:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Walk);
			break;
		case MonsterAI::Trace:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Run);
			break;
		case MonsterAI::Attack:
			break;
		case MonsterAI::Death:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Death);
			break;
		}
	

	if (m_bWait)
	{
		m_WaitTimeAcc += DeltaTime;
		if (m_WaitTimeAcc >= m_WaitTime)
		{
			m_WaitTimeAcc = 0.f;
			m_bWait = false;
			PrintViewport(1.5f, FColor::Green, TEXT("WaitFalse"));
		}
	}
	//PrintViewport(1.5f, FColor::Green, FString::Printf(TEXT("%f"), m_WaitTimeAcc));

	
}

// Called to bind functionality to input
void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMonster::MonsterAttackEnd()
{
	m_eMonsterAIType = MonsterAI::Idle;
}


void AMonster::MonsterNearAttack()
{
	FHitResult* Result;

	FCollisionQueryParams	params(NAME_None, false, this);

}

void AMonster::MonsterLongAttack()
{

}