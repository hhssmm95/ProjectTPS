// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster.h"
#include "MonsterAIController.h"
#include "../Player/PlayerCharacter.h"

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
	m_Attack = 100.f;

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("MonsterBody"));

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
	FHitResult result;

	FCollisionQueryParams	params(NAME_None, false, this);


	bool bSweep = GetWorld()->SweepSingleByChannel(result, GetActorLocation() - GetActorForwardVector() * m_CloseAttackDistance,
		GetActorLocation() + GetActorForwardVector() * m_CloseAttackDistance, FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel5,
		FCollisionShape::MakeSphere(m_CloseAttackDistance),
		params);
	if (bSweep)
	{
		PrintViewport(2.f, FColor::Red, TEXT("Player Hit"));
		/*
		

		/*vDir = GetActorLocation() - result.ImpactPoint;
		vDir.Normalize();
		FRotator	vRot = vDir.ToOrientationRotator();

		FActorSpawnParameters	param;
		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;*/

	/*	AHitEffect* pHitEffect = GetWorld()->SpawnActor<AHitEffect>(AHitEffect::StaticClass(),
			result1.ImpactPoint, vRot, param);

		pHitEffect->LoadParticle(TEXT("ParticleSystem'/Game/ParagonKhaimera/FX/ParticleSystems/Abilities/Primary/FX/P_Khaimera_LMB_Impact.P_Khaimera_LMB_Impact'"));;
		pHitEffect->LoadSound(TEXT("SoundWave'/Game/Monster/420674__sypherzent__deep-cut-slash-gash.420674__sypherzent__deep-cut-slash-gash'"));*/

		APlayerCharacter* pPlayer = Cast<APlayerCharacter>(result.GetActor());

		if (pPlayer)
		{
			FDamageEvent DmgEvent;
			pPlayer->TakeDamage((float)m_Attack, DmgEvent, GetController(), this);
		}
	}

#if ENABLE_DRAW_DEBUG
	FColor	DrawColor = bSweep ? FColor::Yellow : FColor::Blue;



	DrawDebugCone(GetWorld(), GetActorLocation(), GetActorForwardVector(), m_CloseAttackDistance, 
		FMath::DegreesToRadians(22.5f), FMath::DegreesToRadians(22.5f), 20, DrawColor, false, 1.f);
#endif // ENABLE_DRAW_DEBUGEDITOR

}

void AMonster::MonsterLongAttack()
{

}