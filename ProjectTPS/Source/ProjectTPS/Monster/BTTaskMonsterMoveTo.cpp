// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskMonsterMoveTo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster.h"
#include "MonsterAIController.h"


UBTTaskMonsterMoveTo::UBTTaskMonsterMoveTo()
{
	NodeName = TEXT("MonsterMoveTo");
	bNotifyTick = true;
	BlackboardKeyName = TEXT("");
	TargetActor = nullptr;
	TargetLocation = FVector::ZeroVector;
	TargetIsActor = false;
	IsRun = false;
}

EBTNodeResult::Type UBTTaskMonsterMoveTo::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type eResult = Super::ExecuteTask(OwnerComp, NodeMemory);

	TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(BlackboardKeyName));
	TargetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(BlackboardKeyName);

	//PrintViewport(20.f, FColor::Green, OwnerComp.GetName());
	//PrintViewport(20.f, FColor::Blue, OwnerComp.GetAIOwner()->GetName());
	//PrintViewport(20.f, FColor::Yellow, OwnerComp.GetAIOwner()->GetPawn()->GetName());

	if (TargetActor)
	{
		TargetIsActor = true;

		AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

		if (IsRun)
		{

			pMonster->SetMonsterAIType(MonsterAI::Trace);
			pMonster->GetCharacterMovement()->MaxWalkSpeed = pMonster->GetRunSpeed();
		}
		else
		{
			pMonster->SetMonsterAIType(MonsterAI::Patrol);
			pMonster->GetCharacterMovement()->MaxWalkSpeed = pMonster->GetWalkSpeed();
		}

		return EBTNodeResult::InProgress;
	}
	else if (TargetLocation != FVector::ZeroVector)
	{
		AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

		if (IsRun)
		{

			pMonster->SetMonsterAIType(MonsterAI::Trace);
			pMonster->GetCharacterMovement()->MaxWalkSpeed = pMonster->GetRunSpeed();
		}
		else
		{
			pMonster->SetMonsterAIType(MonsterAI::Patrol);
			pMonster->GetCharacterMovement()->MaxWalkSpeed = pMonster->GetWalkSpeed();
		}

		return EBTNodeResult::InProgress;
	}
	else
		return EBTNodeResult::Failed;

}

void UBTTaskMonsterMoveTo::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (pTarget)              
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsInvestigating"), false);
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}


	TargetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(BlackboardKeyName);
	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());


	if (TargetIsActor)
		UAIBlueprintHelperLibrary::SimpleMoveToActor(OwnerComp.GetAIOwner(), TargetActor);
	else
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(OwnerComp.GetAIOwner(), TargetLocation);


	FVector	vLoc = pMonster->GetActorLocation();
	FVector	vMoveLoc;

	if (TargetIsActor)
		vMoveLoc = TargetActor->GetActorLocation();
	else
		vMoveLoc = TargetLocation;

	//vMoveLoc.Z = vLoc.Z;

	float	fDist = FVector::Distance(vMoveLoc, vLoc);

	if (fDist <= 100.f)
	{
		OwnerComp.GetAIOwner()->StopMovement();
		pMonster->SetMonsterAIType(MonsterAI::Idle);
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}

}

