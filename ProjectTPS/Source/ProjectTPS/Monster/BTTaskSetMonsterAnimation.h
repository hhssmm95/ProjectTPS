// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Monster.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskSetMonsterAnimation.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UBTTaskSetMonsterAnimation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTaskSetMonsterAnimation();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		MonsterAI SelectAI;

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
