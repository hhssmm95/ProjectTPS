// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAnim.h"
#include "Monster.h"
#include "Revenant.h"

UMonsterAnim::UMonsterAnim()
{
	m_bDeath = false;
}

void UMonsterAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void UMonsterAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

}


void UMonsterAnim::AnimNotify_MonsterAttackEnd()
{
	AMonster* pMonster = Cast<AMonster>(TryGetPawnOwner());

	pMonster->MonsterAttackEnd();
}

void UMonsterAnim::AnimNotify_MonsterNearAttack()
{
	AMonster* pMonster = Cast<AMonster>(TryGetPawnOwner());

	pMonster->MonsterNearAttack();
}


void UMonsterAnim::AnimNotify_MonsterLongAttack()
{
	AMonster* pMonster = Cast<AMonster>(TryGetPawnOwner());

	pMonster->MonsterLongAttack();
}

void UMonsterAnim::AnimNotify_MonsterSuspectEnd()
{
	AMonster* pMonster = Cast<AMonster>(TryGetPawnOwner());

	pMonster->MonsterSuspectEnd();
}

void UMonsterAnim::AnimNotify_MonsterDeathEnd()
{
	AMonster* pMonster = Cast<AMonster>(TryGetPawnOwner());

	pMonster->MonsterDeathEnd();
}

void UMonsterAnim::MonsterHitReaction()
{
	if(!m_bDeath)
		Montage_Play(m_HitMontage);
}

void UMonsterAnim::AnimNotify_MonsterSkillEnd()
{
	m_SkillEnd = true;

	AMonster* pMonster = Cast<AMonster>(TryGetPawnOwner());

	m_bSkillPlaying = false;;
	if (pMonster)
		pMonster->MonsterSkillEnd();
}

void UMonsterAnim::RevenantReloadMontage()
{
	if(m_RevenantReloadMontage)
		Montage_Play(m_RevenantReloadMontage);
}

void UMonsterAnim::AnimNotify_RevenantSpecialBullet()
{
	ARevenant* pRevenant = Cast<ARevenant>(TryGetPawnOwner());
	if (pRevenant)
	{
		pRevenant->SpecialBullet();
	}
}

void UMonsterAnim::AnimNotify_RevenantReloadEnd()
{
	ARevenant* pRevenant = Cast<ARevenant>(TryGetPawnOwner());
	if (pRevenant)
	{
		pRevenant->ReloadEnd();
	}
}

void UMonsterAnim::AnimNotify_RevenantTeleport()
{
	ARevenant* pRevenant = Cast<ARevenant>(TryGetPawnOwner());

	if (pRevenant)
	{
		pRevenant->Teleport();
	}
}

void UMonsterAnim::AnimNotify_RevenantGrenade()
{
	ARevenant* pRevenant = Cast<ARevenant>(TryGetPawnOwner());

	if (pRevenant)
	{
		pRevenant->ThrowGrenade();
	}
}

void UMonsterAnim::AnimNotify_RevenantBackup()
{
	ARevenant* pRevenant = Cast<ARevenant>(TryGetPawnOwner());

	if (pRevenant)
	{
		pRevenant->CallBackup();
	}
}