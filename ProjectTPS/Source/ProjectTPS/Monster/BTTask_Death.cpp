// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Death.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_Death::UBTTask_Death()
{
	NodeName = TEXT("Death");
	bNotifyTick = true;
}


EBTNodeResult::Type UBTTask_Death::ExecuteTask(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory)
{
	EBTNodeResult::Type eResult = Super::ExecuteTask(OwnerComp, NodeMemory);


	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	if (!pMonster)
		return EBTNodeResult::Failed;

	OwnerComp.GetAIOwner()->StopMovement();
	if(pMonster->GetMonsterAIType() != MonsterAI::Death)
		pMonster->SetMonsterAIType(MonsterAI::Death);


	return EBTNodeResult::InProgress;
}


void UBTTask_Death::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	AMonster* pMonster = Cast<AMonster>(pController->GetPawn());

	if (pMonster->IsDeathEnd())
	{
		pMonster->ItemDrop();

		pMonster->Destroy();

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}
}