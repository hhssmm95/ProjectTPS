// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskSetMonsterAnimation.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster.h"
#include "MonsterAIController.h"

UBTTaskSetMonsterAnimation::UBTTaskSetMonsterAnimation()
{
	bNotifyTick = true;
	SelectAI = MonsterAI::None;
}

EBTNodeResult::Type UBTTaskSetMonsterAnimation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);


	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	pMonster->SetMonsterAIType(SelectAI);

	return EBTNodeResult::Succeeded;
}

