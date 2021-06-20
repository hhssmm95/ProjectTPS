// Fill out your copyright notice in the Description page of Project Settings.


#include "Revenant.h"
#include "../Player/PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MonsterAIController.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnemyBullet.h"
#include "../EffectNormal.h"
#include "../HitEffect.h"
#include "Grenade.h"
#include "../PlayerHUD.h"
#include "../UI/MainHUDWidget.h"
#include "../UI/BossHPWidget.h"

ARevenant::ARevenant()
{

	m_LongAttackDistance = 2000.f;
	m_CloseAttackDistance = 200.f;

	m_SkillTime = 0.f;
	m_SkillTimeMax = 5.f;
	m_bSkillEnable = false;
	m_bUseSkill = false;

	m_UseSkillIndex = -1;
	m_UseSkillType = ERevenantSkillType::None;
}

void ARevenant::BeginPlay()
{
	Super::BeginPlay();
	m_RevenantAI = Cast<AMonsterAIController>(GetController());

	
}

void ARevenant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Target)
	{
		Target = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		m_RevenantAI->SetTargetAsPlayer();

		
	}

	if (!m_HPWidget)
	{
		APlayerHUD* pHUD = Cast<APlayerHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
		if(pHUD)
			m_HPWidget = pHUD->GetMainHUDWidget()->GetBossHPWidget();

		if (m_HPWidget)
		{
			m_HPWidget->SetName(TEXT("Revenant"));
			m_HPWidget->SetHPBar((float)m_HP / (float)m_HPMax);
			m_HPWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
		}
	}


	//��ų ��Ÿ���� �����ؾ� �Ѵٸ�  ��ų ��Ÿ���� �����Ų��.
	for (int32 i = 0; i < m_SkillArray.Num(); i++)
	{
		if (!m_SkillArray[i].SkillEnable /*&& m_SkillArray[i].InPhase*/)
		{
			m_SkillArray[i].SkillTime += DeltaTime;
			if (m_SkillArray[i].SkillTime >= m_SkillArray[i].SkillTimeMax)
			{
				m_SkillArray[i].SkillTime = 0.f;
				m_SkillArray[i].SkillEnable = true;
			}
		}
	}


	//��ų �� ��� ���� ��Ÿ��
	if (!m_bSkillEnable)
	{
		m_SkillTime += DeltaTime;
		m_UseSkillIndex = -1;

		if (m_SkillTime >= m_SkillTimeMax)
		{
			m_bSkillEnable = true;
			m_SkillTime = 0.f;
		}
	}


	else if (!m_bUseSkill)
	{

		m_bUseSkill = true;

		for (int32 i = 0; i < m_SkillArray.Num(); i++)
		{
			if (m_SkillArray[i].SkillEnable && m_SkillArray[i].InPhase)
			{
				m_UseSkillIndex = i;
				break;
			}
		}

		//���� ����� �� �ִ� ��ų�� ���ٸ� (��� ��Ÿ�� ���̶��) ��ų ����� �ߴ��ϰ� ��Ÿ�� �ٲ۴�.
		if (m_UseSkillIndex == -1)
		{
			m_bSkillEnable = false;
			m_bUseSkill = false;
		}

		else
		{

			m_UseSkillType = m_SkillArray[m_UseSkillIndex].SkillType;
			m_RevenantAI->GetBlackboardComponent()->SetValueAsBool(TEXT("SkillEnable"), m_bSkillEnable);
			m_SkillArray[m_UseSkillIndex].SkillEnable = false;
			//m_bSkillEnable = false;
			m_RevenantAI->GetBlackboardComponent()->SetValueAsEnum(TEXT("SkillType"), (uint8)m_UseSkillType);
		}
	}
}
void ARevenant::MonsterSkillEnd()
{
	m_bSkillEnable = false;
	m_RevenantAI->GetBlackboardComponent()->SetValueAsBool(TEXT("SkillEnable"), m_bSkillEnable);
	//m_RevenantAI->GetBlackboardComponent()->SetValueAsEnum(TEXT("SkillType"), (uint8)ERevenantSkillType::None);
	m_bUseSkill = false;
	m_SkillTime = 0.f;
}


float ARevenant::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	//DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	m_HP -= DamageAmount;
	PrintViewport(2.f, FColor::Yellow, FString::Printf(TEXT("Enemy HP : %d"), m_HP));
	AMonsterAIController* pController = Cast<AMonsterAIController>(GetController());

	m_HPWidget->SetHPBar((float)m_HP / (float)m_HPMax);
	if (m_HP <= 0)
	{
		m_bDeath = true;
		m_eMonsterAIType = MonsterAI::Death;
		m_MonsterAnim->SetDeath();
		pController->SetDeath();
	}

	return DamageAmount;
}

float ARevenant::TakeDamageFromClose(float Damage, struct FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	Damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	AMonsterAIController* pController = Cast<AMonsterAIController>(GetController());

		m_HP -= Damage;

		m_HPWidget->SetHPBar((float)m_HP / (float)m_HPMax);

		if (m_HP <= 0)
		{
			m_bDeath = true;
			m_eMonsterAIType = MonsterAI::Death;
			m_MonsterAnim->SetDeath();
			pController->SetDeath();
			return Damage;
		}


	//m_MonsterAnim->MonsterHitReaction();
	return Damage;
}


void ARevenant::MonsterNearAttack()
{
	if (m_IsReloading)
		return;

	FHitResult result;

	FCollisionQueryParams	params(NAME_None, false, this);


	bool bSweep = GetWorld()->SweepSingleByChannel(result, GetActorLocation() - GetActorForwardVector() * m_CloseAttackDistance,
		GetActorLocation() + GetActorForwardVector() * m_CloseAttackDistance, FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel5,
		FCollisionShape::MakeSphere(m_CloseAttackDistance),
		params);
	if (bSweep)
	{

		PrintViewport(2.f, FColor::Red, result.Actor->GetFName().ToString());
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
			//pPlayer->GetCapsuleComponent()->AddImpulse(result.ImpactNormal * 1000.f);
		}
	}

#if ENABLE_DRAW_DEBUG
	FColor	DrawColor = bSweep ? FColor::Yellow : FColor::Blue;



	DrawDebugCone(GetWorld(), GetActorLocation(), GetActorForwardVector(), m_CloseAttackDistance,
		FMath::DegreesToRadians(22.5f), FMath::DegreesToRadians(22.5f), 20, DrawColor, false, 1.f);
#endif // ENABLE_DRAW_DEBUGEDITOR

}

void ARevenant::MonsterLongAttack()
{
	if (m_IsReloading)
		return;
	FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("LongAttackMuzzle")) + GetActorForwardVector();
	FRotator vMuzzleRot = GetActorRotation();


	if (!m_SpecialBulletEnable)
	{
		AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_LongAttackMuzzle, vMuzzlePos,
			vMuzzleRot);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_LongAttackSound, GetActorLocation());

		FRotator BulletRot = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f,
			FVector(m_TargetLoc.X, m_TargetLoc.Y, m_TargetLoc.Z + 50.f));

		AEnemyBullet* Bullet = GetWorld()->SpawnActor<AEnemyBullet>(m_LongAttackBullet, vMuzzlePos + GetActorForwardVector() * 80.f,
			BulletRot);
	}
	else if (m_SpecialBulletEnable && m_SpecialBulletRemain >= 1)
	{
		AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_LongAttackMuzzle, vMuzzlePos,
			vMuzzleRot);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_LongAttackSound, GetActorLocation());

		FRotator BulletRot1 = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f,
		FVector(m_TargetLoc.X + 50.f, m_TargetLoc.Y, m_TargetLoc.Z + 50.f));
	FRotator BulletRot2 = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f,
		FVector(m_TargetLoc.X - 50.f, m_TargetLoc.Y, m_TargetLoc.Z + 50.f));
	FRotator BulletRot3 = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f,
		FVector(m_TargetLoc.X + 100.f , m_TargetLoc.Y, m_TargetLoc.Z + 50.f));
	FRotator BulletRot4 = UKismetMathLibrary::FindLookAtRotation(vMuzzlePos + GetActorForwardVector() * 80.f,
		FVector(m_TargetLoc.X - 100.f , m_TargetLoc.Y, m_TargetLoc.Z + 50.f));

		AEnemyBullet* Bullet1 = GetWorld()->SpawnActor<AEnemyBullet>(m_LongAttackBullet, vMuzzlePos + GetActorForwardVector() * 80.f,
			BulletRot1);
		AEnemyBullet* Bullet2 = GetWorld()->SpawnActor<AEnemyBullet>(m_LongAttackBullet, vMuzzlePos + GetActorForwardVector() * 80.f,
			BulletRot2);
		AEnemyBullet* Bullet3 = GetWorld()->SpawnActor<AEnemyBullet>(m_LongAttackBullet, vMuzzlePos + GetActorForwardVector() * 80.f,
			BulletRot3);
		AEnemyBullet* Bullet4 = GetWorld()->SpawnActor<AEnemyBullet>(m_LongAttackBullet, vMuzzlePos + GetActorForwardVector() * 80.f,
			BulletRot4);

		m_SpecialBulletRemain--;

	}
	else if (m_SpecialBulletEnable && m_SpecialBulletRemain <= 0)
	{
		m_IsReloading = true;
		m_MonsterAnim->RevenantReloadMontage();
	}

	
}

void ARevenant::Teleport()
{
	if (m_TeleportSpotArray.Num() <= 0)
		return;

	int32 SpotNumber = FMath::RandRange(0, m_TeleportSpotArray.Num()-1);

	SetActorLocation(m_TeleportSpotArray[SpotNumber]->GetActorLocation());

	int32 RandSound = FMath::RandRange(0, 1);
	if(RandSound == 0)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_TeleportSound1, GetActorLocation());
	else
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_TeleportSound2, GetActorLocation());

	//m_eMonsterAIType = MonsterAI::Idle;
}

void ARevenant::ThrowGrenade()
{
	if (!m_GrenadeClass)
		return;

	int32 RandSound = FMath::RandRange(0, 1);
	if (RandSound == 0)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_GrenadeSound1, GetActorLocation());
	else
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_GrenadeSound2, GetActorLocation());

	FActorSpawnParameters param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	FVector vLoc = GetMesh()->GetSocketLocation(TEXT("hand_r_ability_socket"));
	ACharacter* pTarget = Cast<ACharacter>(m_RevenantAI->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
	FVector vTargetLoc = pTarget->GetActorLocation();
	AGrenade* pGrenade1 = GetWorld()->SpawnActor<AGrenade>(m_GrenadeClass, vLoc, FRotator::ZeroRotator, param);

	AGrenade* pGrenade2 = GetWorld()->SpawnActor<AGrenade>(m_GrenadeClass, vLoc, FRotator::ZeroRotator, param);

	AGrenade* pGrenade3 = GetWorld()->SpawnActor<AGrenade>(m_GrenadeClass, vLoc, FRotator::ZeroRotator, param);

	pGrenade1->Throw(vLoc, FVector(vTargetLoc.X, vTargetLoc.Y, 0.f), this);
	pGrenade2->Throw(vLoc, FVector(vTargetLoc.X, vTargetLoc.Y + 700.f , 0.f), this);
	pGrenade3->Throw(vLoc, FVector(vTargetLoc.X, vTargetLoc.Y - 700.f, 0.f), this);


}


void ARevenant::CallBackup()
{
	if (!m_BackupMonsterClass)
		return;

	int32 RandSound = FMath::RandRange(0, 1);
	if (RandSound == 0)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_BackupSound1, GetActorLocation());
	else
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_BackupSound2, GetActorLocation());

	FActorSpawnParameters param;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	FActorSpawnParameters EffectParam;
	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	FNavLocation SpawnLot;

	for (int i = 0; i < 4; i++)
	{
		ANavigationData* NavData = Cast<ANavigationData>(GetWorld()->GetNavigationSystem()->GetMainNavData());
		NavData->GetRandomPointInNavigableRadius(GetActorLocation(), 1200.f, SpawnLot);

		FVector SpawnFloorLot = FVector(SpawnLot.Location.X, SpawnLot.Location.Y, SpawnLot.Location.Z + 100.f);
		

		AMonster* pMonster = GetWorld()->SpawnActor<AMonster>(m_BackupMonsterClass, SpawnFloorLot, GetActorRotation(), param);
		pMonster->SetDropAmmoAmount(15);
		AMonsterAIController* pController = Cast<AMonsterAIController>(pMonster->GetController());
		pController->SetTargetAsPlayer();

		AHitEffect* pEffect = GetWorld()->SpawnActor<AHitEffect>(AHitEffect::StaticClass(), pMonster->GetActorLocation(), 
			FRotator::ZeroRotator, EffectParam);

		pEffect->LoadParticle(m_BackupParticle);
		pEffect->LoadSound(m_BackupEffectSound);

	}



}

void ARevenant::SpecialBullet()
{
	/*int32 RandSound = FMath::RandRange(0, 1);
	if (RandSound == 0)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ReloadSound1, GetActorLocation());
	else
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ReloadSound2, GetActorLocation());*/

	m_SpecialBulletEnable = true;
	m_SpecialBulletRemain = 4;
}

void ARevenant::ReloadEnd()
{
	int32 RandSound = FMath::RandRange(0, 1);
	if (RandSound == 0)
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ReloadSound1, GetActorLocation());
	else
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_ReloadSound2, GetActorLocation());

	m_SpecialBulletRemain = 4;
	m_IsReloading = false;
}