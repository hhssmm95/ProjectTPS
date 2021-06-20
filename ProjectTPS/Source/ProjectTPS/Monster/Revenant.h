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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TArray<AActor*>	m_TeleportSpotArray;

	bool m_bSkillEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_SkillTimeMax;

	float m_SkillTime;

	class AMonsterAIController* m_RevenantAI;

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

	virtual void MonsterNearAttack();
	virtual void MonsterLongAttack();

	void SetSkill1InPhase()
	{
		for (auto& Skill : m_SkillArray)
		{
			if (Skill.SkillType == ERevenantSkillType::Skill1)
			{
				Skill.InPhase = true;
			}
		}
	}
	void SetSkill2InPhase()
	{
		for (auto& Skill : m_SkillArray)
		{
			if (Skill.SkillType == ERevenantSkillType::Skill2)
			{
				Skill.InPhase = true;
			}
		}
	}
	void SetSkill3InPhase()
	{
		for (auto& Skill : m_SkillArray)
		{
			if (Skill.SkillType == ERevenantSkillType::Skill3)
			{
				Skill.InPhase = true;
			}
		}
	}
	void SetSkill4InPhase()
	{
		for (auto& Skill : m_SkillArray)
		{
			if (Skill.SkillType == ERevenantSkillType::Skill4)
			{
				Skill.InPhase = true;
			}
		}
	}

	virtual void MonsterSkillEnd();
	void Teleport();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);

};
