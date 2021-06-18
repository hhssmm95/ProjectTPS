// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_HPCheck.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster.h"
#include "MonsterAIController.h"

UBTDecorator_HPCheck::UBTDecorator_HPCheck()
{
	NodeName = TEXT("CheckHP");

	m_PhaseHPPercent = 100.f;;
}

bool UBTDecorator_HPCheck::CalculateRawConditionValue(
	UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);


	AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	AMonster* pMonster = Cast<AMonster>(pController->GetPawn());
	

	return bResult;

}

