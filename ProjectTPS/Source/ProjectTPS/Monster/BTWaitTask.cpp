// Fill out your copyright notice in the Description page of Project Settings.


#include "BTWaitTask.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTWaitTask::UBTWaitTask()
{
	NodeName = TEXT("WaitTask");
	bNotifyTick = true;
	ManualWaitTimeControl = false;
	WaitTime = 0.f;
	EnableRecognizeEnemy = false;
}

EBTNodeResult::Type UBTWaitTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	pMonster->SetMonsterAIType(MonsterAI::Idle);

	if (!ManualWaitTimeControl)
	{
		if (!pMonster->GetWait())
			return EBTNodeResult::Succeeded;

		if (pMonster->GetPatrolPointCount() <= 1)
			return EBTNodeResult::Failed;



		pMonster->WaitStart();
	}
	OwnerComp.GetAIOwner()->StopMovement();

	return EBTNodeResult::InProgress;
}

void UBTWaitTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	if (EnableRecognizeEnemy)
	{
		ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
		
		if (pTarget)
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsInvestigating"), false);
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

		}
	}

	if (!ManualWaitTimeControl)
	{
		if (!pMonster->GetWait())
		{
			pMonster->NextPatrol();
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		}
	}
	else
	{
		WaitTimeAcc += DeltaSeconds;
		if(WaitTimeAcc>=WaitTime)
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
