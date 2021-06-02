// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Panic.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_Panic::UBTTask_Panic()
{
	NodeName = TEXT("GetRandomLoc");
	bNotifyTick = true;
}


EBTNodeResult::Type UBTTask_Panic::ExecuteTask(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory)
{
	EBTNodeResult::Type eResult = Super::ExecuteTask(OwnerComp, NodeMemory);

	OriginLot = OwnerComp.GetBlackboardComponent()->GetValueAsVector(TEXT("BeforePanicLocation"));

	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	//TArray<AActor*> NavDataArray;
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARecastNavMesh::StaticClass(), NavDataArray);
	
	ANavigationData* NavData = Cast<ANavigationData>(GetWorld()->GetNavigationSystem()->GetMainNavData());
	
	

	if (OriginLot == FVector::ZeroVector)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("BeforePanicLocation"), pMonster->GetActorLocation());
		OriginLot = pMonster->GetActorLocation();
	}

	//OriginLot = OwnerComp.GetBlackboardComponent()->GetValueAsVector(TEXT("BeforePanicLocation"));

	if (NavData->GetRandomPointInNavigableRadius(OriginLot, 2500.f, RandomLoc))
	{ 
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("RandomLocation"), RandomLoc.Location);/*
		PrintViewport(2.f, FColor::Red, FString::Printf(TEXT("%s ,%f, %f, %f"), pMonster->GetFName().ToString(),
			RandomLoc.Location.X, RandomLoc.Location.Y, RandomLoc.Location.Z));*/

		//DrawDebugSphere(GetWorld(), RandomLoc.Location, 100.f, 16, FColor::Red, false, 5.f);

		return EBTNodeResult::Succeeded;
	}
	else
		return EBTNodeResult::Failed;


}

//
//void UBTTask_Panic::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
//{
//	//AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
//
//	ACharacter* pTarget = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
//
//	if (pTarget)
//	{
//		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
//		return;
//	}
//
//	if(RandomLoc)
//		RandomLoc.
//
//	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());
//	
//}
