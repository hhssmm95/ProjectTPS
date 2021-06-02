// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskMonsterMoveTo.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UBTTaskMonsterMoveTo : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTaskMonsterMoveTo();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		FName BlackboardKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool IsRun;

	AActor* TargetActor;
	FVector TargetLocation;
	bool TargetIsActor;
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);
};
