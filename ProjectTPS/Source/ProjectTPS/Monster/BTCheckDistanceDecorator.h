// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTCheckDistanceDecorator.generated.h"

UENUM(BlueprintType)
enum class EDistanceCheckType : uint8
{
	/*Trace,*/
	Attack1,
	Attack2
};

UCLASS()
class PROJECTTPS_API UBTCheckDistanceDecorator : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	UBTCheckDistanceDecorator();
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EDistanceCheckType m_Type;



protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
};
