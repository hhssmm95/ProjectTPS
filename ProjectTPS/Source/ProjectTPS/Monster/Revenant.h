// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Monster.h"
#include "Revenant.generated.h"

USTRUCT(BlueprintType)
struct FRevenantSkill
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool SkillEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float SkillTimeMax;

	float SkillTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		ERevenantSkillType	SkillType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32	SkillEnablePhase;

		bool InPhase;
	FRevenantSkill()
	{
		SkillTime = 0.f;
	}
};

UCLASS()
class PROJECTTPS_API ARevenant : public AMonster
{
	GENERATED_BODY()

public:
	ARevenant();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TArray<FRevenantSkill>	m_SkillArray;

	bool m_bSkillEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_SkillTimeMax;

	float m_SkillTime;

	class ABossAIController* m_RevenantAI;

	int32		m_UseSkillIndex;
	ERevenantSkillType	m_UseSkillType;
	bool		m_bUseSkill;

	bool	m_Phase2Enable;
	bool	m_Phase3Enable;
	bool	m_Phase4Enable;

	UPROPERTY()
	class APlayerCharacter* Target;

public:
	TArray<FRevenantSkill> GetSkillArray()
	{
		return m_SkillArray;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);

};
