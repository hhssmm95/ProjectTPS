// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_CheckHP.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "Revenant.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTService_CheckHP::UBTService_CheckHP()
{
	NodeName = TEXT("CheckHP");
	Interval = 0.5f;

}

void UBTService_CheckHP::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);



	//AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	//if (!IsValid(pController))
	//	return;

	ARevenant* pRevenant = Cast<ARevenant>(OwnerComp.GetAIOwner()->GetPawn());

	if (!IsValid(pRevenant))
		return;
	float HPPercent = pRevenant->GetHP() / pRevenant->GetHPMax();

	if (HPPercent <= m_Phase2Percent && HPPercent > m_Phase3Percent)
	{
		OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsBool(TEXT("SecondPhaseEnable"), true);
		phase2enable = true;
	}
	
	else if (HPPercent <= m_Phase3Percent && HPPercent > m_Phase4Percent)
	{
		OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsBool(TEXT("ThirdPhaseEnable"), true);
		phase3enable = true;
	}

	else if (HPPercent <= m_Phase4Percent && HPPercent > 0.f)
	{
		OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsBool(TEXT("FourthPhaseEnable"), true);
		phase4enable = true;
	}

	if (!phase2Init && phase2enable)
	{
		TArray<FRevenantSkill> m_SkillArray = pRevenant->GetSkillArray();

		for (auto& Skill : m_SkillArray)
		{
			if (Skill.SkillEnablePhase == 2)
			{
				Skill.InPhase = true;
				phase2Init = true;
			}
		}
	}

	if (!phase3Init && phase3enable)
	{
		TArray<FRevenantSkill> m_SkillArray = pRevenant->GetSkillArray();

		for (auto& Skill : m_SkillArray)
		{
			if (Skill.SkillEnablePhase == 3)
			{
				Skill.InPhase = true;
				phase3Init = true;
			}
		}
	}

	if (!phase4Init && phase3enable)
	{
		TArray<FRevenantSkill> m_SkillArray = pRevenant->GetSkillArray();

		for (auto& Skill : m_SkillArray)
		{
			if (Skill.SkillEnablePhase == 4)
			{
				Skill.InPhase = true;
				phase4Init = true;
			}
		}
	}

}