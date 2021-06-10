// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster.h"
#include "MonsterAIController.h"
#include "../Player/PlayerCharacter.h"
#include "EnemyBullet.h"
#include "../EffectNormal.h"
#include "Kismet/KismetMathLibrary.h"
#include "../HitEffect.h"
#include "../DropItem.h"
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

	//GetCapsuleComponent()->SetCollisionProfileName(TEXT("MonsterBody"));

	static ConstructorHelpers::FClassFinder<AHitEffect> HeadshotEffectAsset(TEXT("Blueprint'/Game/Monster/BP_HitEffect.BP_HitEffect_C'"));
	
	if (HeadshotEffectAsset.Succeeded())
		m_HeadshotEffect = HeadshotEffectAsset.Class;

	m_bDeath = false;
	m_IsDeathEnd = false;
}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();

	m_MonsterAnim = Cast<UMonsterAnim>(GetMesh()->GetAnimInstance());
	m_HPMax = 200;
	m_HP = 200;
	//m_SightDistance = 3000.f;
	//m_SightAngle = 30.f;

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
			m_TargetLoc = FVector::ZeroVector;
			break;
		case MonsterAI::Patrol:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Walk);
			m_TargetLoc = FVector::ZeroVector;
			break;
		case MonsterAI::Trace:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Run);
			m_TargetLoc = FVector::ZeroVector;
			break;
		case MonsterAI::Attack:
			break;
		case MonsterAI::Death:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Death);
			m_TargetLoc = FVector::ZeroVector;
			break;
		case MonsterAI::Suspicious:
			m_MonsterAnim->ChangeAnimType(EMonsterAnimType::Suspicious);
			m_TargetLoc = FVector::ZeroVector;
			break;
		}
	

	if (m_bWait)
	{
		m_WaitTimeAcc += DeltaTime;
		if (m_WaitTimeAcc >= m_WaitTime)
		{
			m_WaitTimeAcc = 0.f;
			m_bWait = false;
		}
	}

	
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
	FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("LongAttackMuzzle")) + GetActorForwardVector();
	FRotator vMuzzleRot = GetActorRotation();

	AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_LongAttackMuzzle, vMuzzlePos,
		vMuzzleRot);

	UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_LongAttackSound, GetActorLocation());

	FRotator BulletRot = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f, 
		FVector(m_TargetLoc.X, m_TargetLoc.Y, m_TargetLoc.Z + 50.f));

	AEnemyBullet* Bullet = GetWorld()->SpawnActor<AEnemyBullet>(m_LongAttackBullet, vMuzzlePos + GetActorForwardVector() * 80.f,
		BulletRot);
}

void AMonster::MonsterSuspectEnd()
{
	m_eMonsterAIType = MonsterAI::Idle;
}

void AMonster::MonsterDeathEnd()
{
	m_IsDeathEnd = true;
}

float AMonster::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	Damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	m_HP -= Damage;
	PrintViewport(2.f, FColor::Yellow, FString::Printf(TEXT("Enemy HP : %d"), m_HP));
	AMonsterAIController* pController = Cast<AMonsterAIController>(GetController());
	pController->Panic();

	if (m_HP <= 0)
	{
		m_bDeath = true;
		m_eMonsterAIType = MonsterAI::Death;
		m_MonsterAnim->SetDeath();
		pController->SetDeath();
	}

	m_MonsterAnim->MonsterHitReaction();
	

	return Damage;
}

void AMonster::EmitHitEffect(FVector ImpactLoc, FRotator Rot)
{
	FActorSpawnParameters	params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AHitEffect* pEffect = GetWorld()->SpawnActor<AHitEffect>(AHitEffect::StaticClass(),
		ImpactLoc, Rot, params);

	pEffect->SetActorScale3D(FVector(0.5f, 0.5f, 0.5f));

	pEffect->LoadParticle(m_HitParticle);
	pEffect->LoadSound(m_HitSound);

	int32 RandSound = FMath::FRandRange(0, 2);

	switch (RandSound)
	{
	case 0:
		pEffect->LoadAdditionalSound1(m_HurtSound1);
		break;

	case 1:
		pEffect->LoadAdditionalSound1(m_HurtSound2);
		break;
	}
}
void AMonster::EmitHeadshotEffect(FVector ImpactLoc, FRotator Rot)
{
	FActorSpawnParameters	params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AHitEffect* pEffect = GetWorld()->SpawnActor<AHitEffect>(m_HeadshotEffect,
		ImpactLoc, Rot, params);

	pEffect->SetActorScale3D(FVector(0.5f, 0.5f, 0.5f));

	pEffect->LoadSound(m_HeadShotSound);

	int32 RandSound = FMath::FRandRange(0, 2);

	switch (RandSound)
	{
	case 0:
		pEffect->LoadAdditionalSound1(m_HurtSound1);
		break;
	case 1:
		pEffect->LoadAdditionalSound1(m_HurtSound2);
		break;
	}
}

void AMonster::ItemDrop()
{
	GetWorld()->SpawnActor<ADropItem>(m_DropItem, GetActorLocation(), GetActorRotation());
}
