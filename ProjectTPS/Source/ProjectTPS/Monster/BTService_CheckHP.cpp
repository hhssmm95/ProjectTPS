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

	if (!phase1Init)
	{
		pRevenant->SetSkill1InPhase();
		PrintViewport(2.f, FColor::Yellow, TEXT("Skill1InPhase"));
		phase1Init = true;
	}

	if (HPPercent <= m_Phase2Percent && HPPercent > m_Phase3Percent && !phase2enable)
	{
		OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsBool(TEXT("SecondPhaseEnable"), true);
		pRevenant->SetSkill2InPhase();
		phase2enable = true;
	}
	
	else if (HPPercent <= m_Phase3Percent && HPPercent > m_Phase4Percent && !phase3enable)
	{
		OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsBool(TEXT("ThirdPhaseEnable"), true);
		pRevenant->SetSkill3InPhase();
		phase3enable = true;
	}

	else if (HPPercent <= m_Phase4Percent && HPPercent > 0.f && !phase4enable)
	{
		OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsBool(TEXT("FourthPhaseEnable"), true);
		pRevenant->SetSkill4InPhase();
		phase4enable = true;
	}

	//if (!phase1Init)
	//{
	//	TArray<FRevenantSkill> m_SkillArray = pRevenant->GetSkillArray();

	//	for (auto& Skill : m_SkillArray)
	//	{
	//		if (Skill.SkillType == ERevenantSkillType::Skill1)
	//		{
	//			Skill.InPhase = true;
	//			phase1Init = true;
	//		}
	//	}
	//}

	//if (!phase2Init && phase2enable)
	//{
	//	TArray<FRevenantSkill> m_SkillArray = pRevenant->GetSkillArray();

	//	for (auto& Skill : m_SkillArray)
	//	{
	//		if (Skill.SkillType == ERevenantSkillType::Skill2)
	//		{
	//			Skill.InPhase = true;
	//			phase2Init = true;
	//		}
	//	}
	//}

	//if (!phase3Init && phase3enable)
	//{
	//	TArray<FRevenantSkill> m_SkillArray = pRevenant->GetSkillArray();

	//	for (auto& Skill : m_SkillArray)
	//	{
	//		if (Skill.SkillType == ERevenantSkillType::Skill3)
	//		{
	//			Skill.InPhase = true;
	//			phase3Init = true;
	//		}
	//	}
	//}

	//if (!phase4Init && phase3enable)
	//{
	//	TArray<FRevenantSkill> m_SkillArray = pRevenant->GetSkillArray();

	//	for (auto& Skill : m_SkillArray)
	//	{
	//		if (Skill.SkillType == ERevenantSkillType::Skill4)
	//		{
	//			Skill.InPhase = true;
	//			phase4Init = true;
	//		}
	//	}
	//}

}