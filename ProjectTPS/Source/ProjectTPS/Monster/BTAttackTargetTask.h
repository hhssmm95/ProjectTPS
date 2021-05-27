// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTAttackTargetTask.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8
{
	Attack1_Near,
	Attack2_Far
};


UCLASS()
class PROJECTTPS_API UBTAttackTargetTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTAttackTargetTask();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EAttackType m_Type;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);
};
