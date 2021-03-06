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
	Suspicious,
	Skill1,
	Skill2,
	Skill3,
	Skill4
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
		float m_WalkSpeed;;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_RunSpeed;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		class UMonsterAnim* m_MonsterAnim;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_CloseAttackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_LongAttackDistance;


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
	TSubclassOf<class AEnemyBullet> m_LongAttackBullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class ADropItem> m_DropItem;
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TArray<AActor*> m_PatrolPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_WaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_bCallBackupEnable;

	int32 m_PatrolIndex;
	int32 m_PatrolDir;
	bool m_bPatrol;
	FVector m_vPatrolTargetLoc;

	FVector m_TargetLoc;

	class AMonsterSpawnPoint* m_SpawnPoint;

	float m_WaitTimeAcc;
	bool m_bWait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool m_bDeath;

	bool m_IsDeathEnd;

	int32 m_DropAmmoAmount;

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
	virtual void MonsterNearAttack();
	virtual void MonsterLongAttack();
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

	float GetHP() const
	{
		return m_HP;
	}
	float GetHPMax() const
	{
		return m_HPMax;
	}
public:

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser) override;

	virtual float TakeDamageFromClose(float Damage, struct FDamageEvent const& DamageEvent,
		AController* EventInstigator, AActor* DamageCauser);

	void EmitHitEffect(FVector ImpactLoc, FRotator Rot);
	void EmitHeadshotEffect(FVector ImpactLoc, FRotator Rot);
	void ItemDrop();

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

	void SetCallBackUpEnable(bool Enable)
	{
		m_bCallBackupEnable = Enable;
	}

	bool GetCallBackUpEnable()
	{
		return m_bCallBackupEnable;
	}

	void SetDropAmmoAmount(int32 Ammo)
	{
		m_DropAmmoAmount = Ammo;
	}

	virtual void MonsterSkillEnd();
};
