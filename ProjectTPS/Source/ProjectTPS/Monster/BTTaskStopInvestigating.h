// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskStopInvestigating.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UBTTaskStopInvestigating : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTaskStopInvestigating();
	

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);
};