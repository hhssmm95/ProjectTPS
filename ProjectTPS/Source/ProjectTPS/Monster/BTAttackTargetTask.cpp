// Fill out your copyright notice in the Description page of Project Settings.


#include "BTAttackTargetTask.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "../Player/PlayerCharacter.h"

UBTAttackTargetTask::UBTAttackTargetTask()
{
	NodeName = TEXT("AttackTarget");
	bNotifyTick = true;

	m_Type = EAttackType::Attack1_Near;
}

EBTNodeResult::Type UBTAttackTargetTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	//if (pMonster->GetMonsterAIType() == MonsterAI::Skill1)
	//	return EBTNodeResult::Failed;

	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
	if (!pTarget)
	{

		return EBTNodeResult::Failed;
	}

	FVector vTarget = pTarget->GetActorLocation();
	FVector vLoc = pMonster->GetActorLocation();

	FVector vDir = vTarget - vLoc;
	vDir.Normalize();
	pMonster->SetActorRotation(FRotator(0.f, vDir.Rotation().Yaw, 0.f));


	pMonster->SetMonsterAIType(MonsterAI::Attack);

	switch (m_Type)
	{
	case EAttackType::Attack1_Near:

		pMonster->ChangeAnimation(EMonsterAnimType::Attack1);
		break;

	case EAttackType::Attack2_Far:

		pMonster->ChangeAnimation(EMonsterAnimType::Attack2);
		pMonster->SetTargetLocation(vTarget);
		break;
	default:
		break;
	}

	OwnerComp.GetAIOwner()->StopMovement();

	return EBTNodeResult::InProgress;
}

void UBTAttackTargetTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());


	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (!pTarget)
	{

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;

	}
		
	FVector vTarget = pTarget->GetActorLocation();
	FVector vLoc = pMonster->GetActorLocation();

	FVector vDir = vTarget - vLoc;
	vDir.Normalize();
	pMonster->SetActorRotation(FRotator(0.f, vDir.Rotation().Yaw, 0.f));


	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return;
	//if (pMonster->GetMonsterAIType() != MonsterAI::Attack)
	//{
	//	//타겟을 바라보도록 회전한다.
	//	FVector vTarget = pTarget->GetActorLocation();
	//	FVector vLoc = pMonster->GetActorLocation();

	//	FVector vDir = vTarget - vLoc;
	//	vDir.Normalize();
	//	pMonster->SetActorRotation(FRotator(0.f, vDir.Rotation().Yaw, 0.f));

	//	//Task종료
	//	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	//	return;
	//}

}
