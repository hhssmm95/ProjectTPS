// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CallBackup.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UBTTask_CallBackup : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_CallBackup();

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);
};
