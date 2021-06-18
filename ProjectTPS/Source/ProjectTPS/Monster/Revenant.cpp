// Fill out your copyright notice in the Description page of Project Settings.


#include "Revenant.h"
#include "../Player/PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BossAIController.h"

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
	m_RevenantAI = Cast<ABossAIController>(GetController());


}

void ARevenant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!Target)
		Target = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

	//��ų ��Ÿ���� �����ؾ� �Ѵٸ�  ��ų ��Ÿ���� �����Ų��.
	for (int32 i = 0; i < m_SkillArray.Num(); i++)
	{
		if (!m_SkillArray[i].SkillEnable && m_SkillArray[i].InPhase)
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
float ARevenant::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	
	return DamageAmount;
}
