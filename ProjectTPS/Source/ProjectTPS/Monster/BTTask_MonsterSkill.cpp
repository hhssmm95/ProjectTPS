// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_MonsterSkill.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "Revenant.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MonsterAnim.h"

UBTTask_MonsterSkill::UBTTask_MonsterSkill()
{
	NodeName = TEXT("MonsterSkill");
	bNotifyTick = true;

}

EBTNodeResult::Type UBTTask_MonsterSkill::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	ERevenantSkillType	SkillType = (ERevenantSkillType)OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsEnum(TEXT("SkillType"));

	ARevenant* pRevenant = Cast<ARevenant>(pMonster);
	if (pRevenant)
	{
		if(pRevenant->GetIsReloading())
			return EBTNodeResult::Failed;
	}

	switch (SkillType)
	{
	case ERevenantSkillType::Skill1:
		//pMonster->ChangeAnimation(EMonsterAnimType::Skill1);
		pMonster->SetMonsterAIType(MonsterAI::Skill1);
		break;
	case ERevenantSkillType::Skill2:
		//pMonster->ChangeAnimation(EMonsterAnimType::Skill2);
		pMonster->SetMonsterAIType(MonsterAI::Skill2);
		break;
	case ERevenantSkillType::Skill3:
		//pMonster->ChangeAnimation(EMonsterAnimType::Skill3);
		pMonster->SetMonsterAIType(MonsterAI::Skill3);
		break;
	case ERevenantSkillType::Skill4:
		//pMonster->ChangeAnimation(EMonsterAnimType::Skill4);
		pMonster->SetMonsterAIType(MonsterAI::Skill4);
		break;
	}
	UMonsterAnim* pMonsterAnim = pMonster->GetMonsterAnim();
	pMonsterAnim->SetSkillPlaying(true);

	//OwnerComp.GetAIOwner()->StopMovement();

	return EBTNodeResult::InProgress;
}

void UBTTask_MonsterSkill::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	UMonsterAnim* pMonsterAnim = pMonster->GetMonsterAnim();

	if (!pTarget)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	FVector vTarget = pTarget->GetActorLocation();
	FVector vLoc = pMonster->GetActorLocation();

	FVector vDir = vTarget - vLoc;
	vDir.Normalize();
	pMonster->SetActorRotation(FRotator(0.f, vDir.Rotation().Yaw, 0.f));



	if (pMonsterAnim)
	{
		if (pMonsterAnim->IsSkillEnd())
		{
			pMonsterAnim->ClearSkillEnd();
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
	}


}