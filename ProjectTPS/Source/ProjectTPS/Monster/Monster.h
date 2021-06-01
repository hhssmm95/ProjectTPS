// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MonsterAnim.h"
//#include "NiagaraSystem.h"
#include "GameFramework/Character.h"
#include "Monster.generated.h"



UENUM(BlueprintType)
enum class MonsterAI : uint8
{
	None,
	Idle,
	Patrol,
	Trace,
	Attack,
	Death,
	Suspicious
};

UCLASS()
class PROJECTTPS_API AMonster : public ACharacter
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_Armor;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_AttackRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_CloseAttackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_LongAttackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_SightDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_SightAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_HearingDistance;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_WalkSpeed;;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_RunSpeed;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		class UMonsterAnim* m_MonsterAnim;


	MonsterAI	m_eMonsterAIType;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_SuspiciousVoice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_EnemySpotVoice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_LongAttackSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_HeadShotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UParticleSystem* m_HitParticle;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	//	UNiagaraSystem* m_HeadShotParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_HurtSound1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_HurtSound2;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AHitEffect> m_HeadshotEffect;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AEffectNormal> m_LongAttackMuzzle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class ABullet> m_LongAttackBullet;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TArray<AActor*> m_PatrolPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_WaitTime;

	int32 m_PatrolIndex;
	int32 m_PatrolDir;
	bool m_bPatrol;
	FVector m_vPatrolTargetLoc;

	FVector m_TargetLoc;

	class AMonsterSpawnPoint* m_SpawnPoint;

	float m_WaitTimeAcc;
	bool m_bWait;

	bool m_bDeath;
	bool m_IsDeathEnd;

public:
	// Sets default values for this character's properties
	AMonster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void MonsterAttackEnd();
	void MonsterNearAttack();
	void MonsterLongAttack();
	void MonsterSuspectEnd();
	void MonsterDeathEnd();
public:

	float GetWalkSpeed() const
	{
		return m_WalkSpeed;
	}

	float GetRunSpeed() const
	{
		return m_RunSpeed;
	}

public:

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;

	void EmitHitEffect(FVector ImpactLoc, FRotator Rot);
	void EmitHeadshotEffect(FVector ImpactLoc, FRotator Rot);


	UFUNCTION(BlueprintCallable)
	void ChangeAnimation(EMonsterAnimType AnimType)
	{
		m_MonsterAnim->ChangeAnimType(AnimType);
	}


	UFUNCTION(BlueprintCallable)
	UMonsterAnim* GetMonsterAnim()
	{
		return m_MonsterAnim;
	}

	bool IsDeathEnd()
	{
		return m_IsDeathEnd;
	}


	float GetCloseAttackDistance()	const
	{
		return m_CloseAttackDistance;
	}

	float GetLongAttackDistance()	const
	{
		return m_LongAttackDistance;
	}

	float GetSightDistance()	const
	{
		return m_SightDistance;
	}

	float GetSightAngle()	const
	{
		return m_SightAngle;
	}

	float GetHearingDistance()	const
	{
		return m_HearingDistance;
	}


	bool GetIsDeath() const
	{
		return m_bDeath;
	}

	void WaitStart()
	{
		m_bWait = true;
		m_WaitTimeAcc = 0.f;
	}

	AActor* GetPatrolPoint() const
	{
		if (m_PatrolPoint.Num() <= 1)
		{
			return nullptr;
		}

		return m_PatrolPoint[m_PatrolIndex];
	}

	int32 GetPatrolPointCount() const
	{
		return m_PatrolPoint.Num();
	}

	void NextPatrol()
	{
		m_PatrolIndex += m_PatrolDir;

		if (m_PatrolIndex >= m_PatrolPoint.Num())
		{
			m_PatrolIndex = m_PatrolPoint.Num() - 2;
			m_PatrolDir = -1;
		}

		else if (m_PatrolIndex < 0)
		{
			m_PatrolIndex = 1;
			m_PatrolDir = 1;
		}
	}

	bool GetWait() const
	{
		return m_bWait;
	}

	void SetSpawnPoint(class AMonsterSpawnPoint* aPoint)
	{
		m_SpawnPoint = aPoint;
	}

	void AddPatrolPoint(AActor* pPoint)
	{
		m_PatrolPoint.Add(pPoint);
	}

	UFUNCTION(BlueprintCallable)
	MonsterAI GetMonsterAIType() const
	{
		return m_eMonsterAIType;
	}

	UFUNCTION(BlueprintCallable)
	void SetMonsterAIType(MonsterAI AIType)
	{
		m_eMonsterAIType = AIType;
	}

	UFUNCTION(BlueprintCallable)
		void SetTargetLocation(FVector Loc)
	{
		m_TargetLoc = Loc;
	}

};
