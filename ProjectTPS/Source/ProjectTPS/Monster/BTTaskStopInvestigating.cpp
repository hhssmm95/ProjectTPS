// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskStopInvestigating.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster.h"
#include "MonsterAIController.h"

UBTTaskStopInvestigating::UBTTaskStopInvestigating()
{

	bNotifyTick = true;
}

EBTNodeResult::Type UBTTaskStopInvestigating::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	pMonster->SetMonsterAIType(MonsterAI::Suspicious);

	return EBTNodeResult::InProgress;
}


void UBTTaskStopInvestigating::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);


	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if(pTarget)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsInvestigating"), false);
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

	}


	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	if (pMonster->GetMonsterAIType() != MonsterAI::Suspicious)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsInvestigating"), false);
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
	
}
