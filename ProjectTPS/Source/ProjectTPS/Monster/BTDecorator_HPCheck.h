// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HPCheck.generated.h"


UCLASS()
class PROJECTTPS_API UBTDecorator_HPCheck : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	UBTDecorator_HPCheck();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_PhaseHPPercent;



protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
};
