// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAnim.h"
#include "Monster.h"

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