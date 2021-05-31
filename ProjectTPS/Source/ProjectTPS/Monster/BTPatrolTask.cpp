// Fill out your copyright notice in the Description page of Project Settings.


#include "BTPatrolTask.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTPatrolTask::UBTPatrolTask()
{
	NodeName = TEXT("Patrol");
	bNotifyTick = true;
}


EBTNodeResult::Type UBTPatrolTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory)
{
	EBTNodeResult::Type eResult = Super::ExecuteTask(OwnerComp, NodeMemory);


	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (pTarget)
		return EBTNodeResult::Failed;

	if (pMonster->GetPatrolPointCount() <= 1)
		return EBTNodeResult::Succeeded;

	pMonster->SetMonsterAIType(MonsterAI::Patrol);
	pMonster->GetCharacterMovement()->MaxWalkSpeed = pMonster->GetWalkSpeed();
	return EBTNodeResult::InProgress;
}


void UBTPatrolTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (pTarget)
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

	// 이동 타겟을 얻어온다.
	AActor* pMoveTarget = pMonster->GetPatrolPoint();

	if (!pMoveTarget)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	UAIBlueprintHelperLibrary::SimpleMoveToActor(OwnerComp.GetAIOwner(), pMoveTarget);


	FVector	vLoc = pMonster->GetActorLocation();
	FVector	vMoveLoc = pMoveTarget->GetActorLocation();

	vMoveLoc.Z = vLoc.Z;

	float	fDist = FVector::Distance(vMoveLoc, vLoc);

	if (fDist <= 100.f)
	{
		OwnerComp.GetAIOwner()->StopMovement();
		pMonster->SetMonsterAIType(MonsterAI::Idle);
		pMonster->WaitStart();

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}
}