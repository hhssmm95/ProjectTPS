// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster.h"

AMonsterAIController::AMonsterAIController()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree>	TreeObj(TEXT("BehaviorTree'/Game/Monster/BT_MonsterAI.BT_MonsterAI'"));

	if (TreeObj.Succeeded())
		m_AITree = TreeObj.Object;

	static ConstructorHelpers::FObjectFinder<UBlackboardData>	BlackboardObj(TEXT("BlackboardData'/Game/Monster/BB_GuardMonster.BB_GuardMonster'"));

	if (BlackboardObj.Succeeded())
		m_AIBlackBoard = BlackboardObj.Object;
}

void AMonsterAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (UseBlackboard(m_AIBlackBoard, Blackboard))
	{
		AMonster* pMonster = Cast<AMonster>(InPawn);

		Blackboard->SetValueAsFloat(TEXT("AttackDistance1"), pMonster->GetCloseAttackDistance());
		Blackboard->SetValueAsFloat(TEXT("AttackDistance2"), pMonster->GetLongAttackDistance());

		////Cast<MonsterAI>(Blackboard->GetValueAsEnum(TEXT("MonsterAI")))
		if (!RunBehaviorTree(m_AITree))
		{
			LOG(TEXT("Monster BehaviorTree Error!!"));
		}
	}
	PrintViewport(5.0f, FColor::Red, TEXT("Monster AIController Init"));
}

void AMonsterAIController::OnUnPossess()
{
	Super::OnUnPossess();
}/*

void AMonsterAIController::PerceptionInit()
{
	AMonster* pMonster = Cast<AMonster>(GetPawn());

	m_SightConfig->SightRadius = pMonster->GetSightDistance();
	m_SightConfig->LoseSightRadius = pMonster->GetSightDistance() + 500.f;
	m_SightConfig->PeripheralVisionAngleDegrees = pMonster->GetSightAngle();

	m_SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	m_SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	m_SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	m_SightConfig->IsEnabled();

	GetPerceptionComponent()->ConfigureSense(*m_SightConfig);
	PrintViewport(5.f, FColor::Yellow, TEXT("Perception Init"));
}*/