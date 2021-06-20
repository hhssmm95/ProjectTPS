// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster.h"

ABossAIController::ABossAIController()
{

}

void ABossAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (UseBlackboard(m_AIBlackBoard, Blackboard))
	{
		AMonster* pMonster = Cast<AMonster>(InPawn);

		Blackboard->SetValueAsFloat(TEXT("AttackDistance1"), pMonster->GetCloseAttackDistance());
		Blackboard->SetValueAsFloat(TEXT("AttackDistance2"), pMonster->GetLongAttackDistance());
		//SetTargetAsPlayer();
		////Cast<MonsterAI>(Blackboard->GetValueAsEnum(TEXT("MonsterAI")))
		if (!RunBehaviorTree(m_AITree))
		{
			LOG(TEXT("Monster BehaviorTree Error!!"));
		}
		//Blackboard->SetValueAsBool(TEXT("CallBackUpEnable"), pMonster->GetCallBackUpEnable());
	}
	PrintViewport(5.0f, FColor::Red, TEXT("Boss AIController Init"));
}

void ABossAIController::OnUnPossess()
{
	Super::OnUnPossess();
}

void ABossAIController::SetDeath()
{
	m_bDeath = true;
	Blackboard->SetValueAsBool(TEXT("Death"), true);
	StopMovement();
}
bool ABossAIController::GetTargetExist()
{
	if (Blackboard->GetValueAsObject(TEXT("Target")) == nullptr)
		return false;
	else
		return true;
}

void ABossAIController::SetTargetAsPlayer()
{
	Blackboard->SetValueAsObject(TEXT("Target"), GetWorld()->GetFirstPlayerController()->GetPawn());
}