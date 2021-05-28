// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SimpleRotateTo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster/Monster.h"
#include "Monster/MonsterAIController.h"


UBTTask_SimpleRotateTo::UBTTask_SimpleRotateTo()
{
	NodeName = TEXT("SimpleRotateTo");
	bNotifyTick = true;
	BlackboardKeyName = TEXT("");
	TargetActor = nullptr;
	TargetLocation = FVector::ZeroVector;
	TargetIsActor = false;
}

EBTNodeResult::Type UBTTask_SimpleRotateTo::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type eResult = Super::ExecuteTask(OwnerComp, NodeMemory);

	TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(BlackboardKeyName));
	TargetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(BlackboardKeyName);

	if (TargetActor)
	{
		TargetIsActor = true;
	}
	OwnerComp.GetAIOwner()->StopMovement();

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());
	pMonster->SetMonsterAIType(MonsterAI::Idle);
	FVector vTargetLoc;

	if (TargetIsActor)
		vTargetLoc = TargetActor->GetActorLocation();
	else
		vTargetLoc = TargetLocation;

	FVector vLoc = pMonster->GetActorLocation();

	FVector vDir = vTargetLoc - vLoc;
	vDir.Normalize();
	pMonster->SetActorRotation(FRotator(0.f, vDir.Rotation().Yaw, 0.f));


	return EBTNodeResult::Succeeded;
}
