// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Panic.generated.h"

UCLASS()
class PROJECTTPS_API UBTTask_Panic : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_Panic();

protected:
	FNavLocation RandomLoc;

	FVector OriginLot;
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	//virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);
};
