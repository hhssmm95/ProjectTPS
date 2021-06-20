// Fill out your copyright notice in the Description page of Project Settings.


#include "BTCheckDistanceDecorator.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster.h"
#include "MonsterAIController.h"

UBTCheckDistanceDecorator::UBTCheckDistanceDecorator()
{
	NodeName = TEXT("CheckDistance");

	m_Type = EDistanceCheckType::Attack1;//Trace;
}

bool UBTCheckDistanceDecorator::CalculateRawConditionValue(
	UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);


	//AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	float   CheckDistance = 0.f;

	switch (m_Type)
	{
	//case EDistanceCheckType::Trace:
	//	//CheckDistance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("TraceDistance"));
	//	break;{
	case EDistanceCheckType::Attack1:
		CheckDistance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("AttackDistance1"));
		break;
	case EDistanceCheckType::Attack2:
		CheckDistance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("AttackDistance2"));
		break;
	}



	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (pTarget)
	{
		float fDist = FVector::Distance(pMonster->GetActorLocation(), pTarget->GetActorLocation());
		//float fAttackDistance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("AttackDistance"));

		bResult = fDist <= CheckDistance;

		if (bResult)
			OwnerComp.GetAIOwner()->StopMovement();
	}
	return bResult;

}