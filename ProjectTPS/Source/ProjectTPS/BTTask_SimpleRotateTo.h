// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SimpleRotateTo.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UBTTask_SimpleRotateTo : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_SimpleRotateTo();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FName BlackboardKeyName;

	AActor* TargetActor;
	FVector TargetLocation;
	bool TargetIsActor;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
