// Fill out your copyright notice in the Description page of Project Settings.


#include "BTWaitTask.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTWaitTask::UBTWaitTask()
{
	NodeName = TEXT("WaitTask");
	bNotifyTick = true;
}

EBTNodeResult::Type UBTWaitTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());
	if (!pMonster->GetWait())
		return EBTNodeResult::Succeeded;

	pMonster->SetMonsterAIType(MonsterAI::Idle);

	if (pMonster->GetPatrolPointCount() <= 1)
		return EBTNodeResult::Failed;



	pMonster->WaitStart();
	OwnerComp.GetAIOwner()->StopMovement();

	return EBTNodeResult::InProgress;
}

void UBTWaitTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	if (!pMonster->GetWait())
	{
		pMonster->NextPatrol();
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}
}
