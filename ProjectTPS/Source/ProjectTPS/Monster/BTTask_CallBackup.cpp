// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_CallBackup.h"
#include "MonsterAIController.h"
#include "Monster.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "../ProjectTPSGameModeBase.h"

UBTTask_CallBackup::UBTTask_CallBackup()
{
	NodeName = TEXT("CallBackUp");
	bNotifyTick = true;
}


EBTNodeResult::Type UBTTask_CallBackup::ExecuteTask(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory)
{
	EBTNodeResult::Type eResult = Super::ExecuteTask(OwnerComp, NodeMemory);


	AMonster* pMonster = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());

	if (!pMonster)
		return EBTNodeResult::Failed;
	if(!OwnerComp.GetBlackboardComponent()->GetValueAsBool(TEXT("CallBackUpEnable")))
		return EBTNodeResult::Failed;

	AProjectTPSGameModeBase* pGameMode = Cast<AProjectTPSGameModeBase>(GetWorld()->GetAuthGameMode());
	pGameMode->SetAlertWithTime();

	OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("CallBackUpEnable"), false);
	return EBTNodeResult::Succeeded;

}


void UBTTask_CallBackup::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AMonsterAIController* pController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	AMonster* pMonster = Cast<AMonster>(pController->GetPawn());

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return;
}

