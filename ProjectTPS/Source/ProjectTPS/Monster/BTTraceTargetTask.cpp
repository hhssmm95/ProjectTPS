// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTraceTargetTask.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "../Player/PlayerCharacter.h"

UBTTraceTargetTask::UBTTraceTargetTask()
{
	NodeName = TEXT("TraceTarget");
	bNotifyTick = true;

	m_DistanceName = TEXT("AttackDistance2");
}

EBTNodeResult::Type UBTTraceTargetTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type eResult = Super::ExecuteTask(OwnerComp, NodeMemory);

	//AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	//if (!IsValid(pController))
	//	return EBTNodeResult::Failed;

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	if (!IsValid(pMonster))
		return EBTNodeResult::Failed;

	//if (pMonster->GetMonsterAIType() == MonsterAI::Skill1)
	//	return EBTNodeResult::Failed;

	UObject* pTarget = OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target"));

	if (!IsValid(pTarget))
		return EBTNodeResult::Failed;

	/*if (pMonster->GetMonsterAIType() != MonsterAI::Trace)
		pMonster->SetMonsterAIType(MonsterAI::Trace);*/

	pMonster->ChangeAnimation(EMonsterAnimType::Run);

	pMonster->SetMonsterAIType(MonsterAI::Trace);
	pMonster->GetCharacterMovement()->MaxWalkSpeed = pMonster->GetRunSpeed();
	return EBTNodeResult::InProgress;
}

void UBTTraceTargetTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	//AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (pMonster->GetIsDeath())
	{
		OwnerComp.GetAIOwner()->StopMovement();
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}

	if (!pTarget)
	{
		OwnerComp.GetAIOwner()->StopMovement();

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	TArray<AActor*> IgnoreActor;
	IgnoreActor.Add(pMonster);

	FHitResult result;

	UAIBlueprintHelperLibrary::SimpleMoveToActor(OwnerComp.GetAIOwner(), pTarget);
	//pMonster->SetMonsterAIType(MonsterAI::Trace);
	FVector vLoc = pMonster->GetMesh()->GetSocketLocation(TEXT("LongAttackMuzzle"));

	bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), vLoc, pTarget->GetActorLocation(),
		UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), true, IgnoreActor,
		EDrawDebugTrace::None, result, true, FLinearColor::Red, FLinearColor::Green, 0.1f);

	APlayerCharacter* pPlayer = Cast<APlayerCharacter>(result.Actor);


	float fAttackDistance = OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsFloat(m_DistanceName);

	float fDist = FVector::Distance(pTarget->GetActorLocation(), pMonster->GetActorLocation());

	if (fDist <= fAttackDistance && pPlayer)
	{
		OwnerComp.GetAIOwner()->StopMovement();

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}


	//???? ???????? ????
	//static bool bTest;

	//if (!bTest)
	//{
	//	//bTest = true;
	//	UNavigationPath* pPath = UAIBlueprintHelperLibrary::GetCurrentPath(pController);

	//	if (IsValid(pPath))
	//	{
	//		int32 iCount = pPath->PathPoints.Num();

	//		LOG(TEXT("Path Count : %d"), iCount);

	//		for (int32 i = 0; i < iCount; ++i)
	//		{
	//			LOG(TEXT("Path Point : %s"), *pPath->PathPoints[i].ToString());
	//		}
	//	}
	//}


}

