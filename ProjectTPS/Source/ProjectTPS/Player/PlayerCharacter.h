// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerInfo.h"
#include "../PlayerHUD.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class PROJECTTPS_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UPlayerInfo* m_PlayerInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* m_Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USpringArmComponent* m_Arm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		class UWidgetComponent* m_AimLock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UParticleSystemComponent* m_AimAssistParticle;
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		//USceneComponent* m_Scene;
	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		EMoveDir			m_eDirection;*/

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_bIsDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		class UPlayerAnimation* m_pPlayerAnim;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		float m_UpperYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_IsAiming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool m_IsReloading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		class APrimaryWeapon* m_PrimaryWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		TSubclassOf<class APrimaryWeapon> m_StartWeapon;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UParticleSystem* m_HitParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_HurtSound1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_HurtSound2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_HurtSound3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		int32 m_ShieldHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		int32 m_ShieldHPMax;

	FVector m_AssistLoc;
	bool m_bAimAssist;
	float m_AimAssistTime;
	float m_AimAssistTimeAcc;

	bool m_bShield;
	float m_ShieldTime;
	float m_ShieldTimeAcc;

	class APlayerHUD* m_HUD;

	float m_AutoShotRange;

	bool m_bFire;
	bool m_bMagEmpty;

	bool m_Slot1AbilityEnable;
	bool m_Slot2AbilityEnable;

	float m_Slot1AbilityCooltime;
	float m_Slot2AbilityCooltime;

	EAbility m_eSlot1Ability;
	EAbility m_eSlot2Ability;


	//float m_Slot1AbilityAcc;
	//float m_Slot2AbilityAcc;
public:
	/*
	EMoveDir GetDirection() const
	{
		return m_eDirection;
	}*/

	UFUNCTION(BlueprintCallable)
		float GetUpperYaw()	const
	{
		return m_UpperYaw;
	}

public:
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, 
		AController* EventInstigator, AActor* DamageCauser) override;

	void MoveFront(float fScale);
	void MoveSide(float fScale);
	void Turn(float fScale);
	void LookUp(float fScale);

	void AddUpperYawInput(float fScale);

	void Detection();

public:
	void InputJump();
	void AimPress();
	void AimRelease();
	void ReloadStart();
	void ReloadEnd();

	void PrimaryFire();
	void PrimaryStop();

	void AbilityWindowVisiblity();

public:
	void UseAbility1();
	void UseAbility2();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:

	
	void SetSlot1Enable(bool Enable)
	{
		m_Slot1AbilityEnable = Enable;
	}

	void SetSlot2Enable(bool Enable)
	{
		m_Slot2AbilityEnable = Enable;
	}

	void SetSlot1Cooltime(float Cooltime)
	{
		m_Slot1AbilityCooltime = Cooltime;
	}

	void SetSlot2Cooltime(float Cooltime)
	{
		m_Slot2AbilityCooltime = Cooltime;
	}

	void SetSlot1Ability(EAbility Key)
	{
		m_eSlot1Ability = Key;
	}

	void SetSlot2Ability(EAbility Key)
	{
		m_eSlot2Ability = Key;
	}

	void SetAssultLevel(int32 Level)
	{
		m_PlayerInfo->SetAssultLevel(Level);
	}

	void SetDefenceLevel(int32 Level)
	{
		m_PlayerInfo->SetDefenceLevel(Level);
	}

	void SetUtilityLevel(int32 Level)
	{
		m_PlayerInfo->SetUtilityLevel(Level);
	}

	void SetAbilityPoint(int32 Point)
	{
		m_PlayerInfo->SetAbilityPoint(Point);
	}

	/*
	void SetAssult1Enable(bool Enable)
	{
		m_PlayerInfo->SetAssult1Enable(Enable);
	}
	void SetAssult2Enable(bool Enable)
	{
		m_PlayerInfo->SetAssult2Enable(Enable);
	}
	void SetAssult3Enable(bool Enable)
	{
		m_PlayerInfo->SetAssult3Enable(Enable);
	}

	void SetDefence1Enable(bool Enable)
	{
		m_PlayerInfo->SetDefence1Enable(Enable);
	}
	void SetDefence2Enable(bool Enable)
	{
		m_PlayerInfo->SetDefence2Enable(Enable);
	}
	void SetDefence3Enable(bool Enable)
	{
		m_PlayerInfo->SetDefence3Enable(Enable);
	}

	void SetUtility1Enable(bool Enable)
	{
		m_PlayerInfo->SetUtility1Enable(Enable);
	}
	void SetUtility2Enable(bool Enable)
	{
		m_PlayerInfo->SetUtility2Enable(Enable);
	}
	void SetUtility3Enable(bool Enable)
	{
		m_PlayerInfo->SetUtility3Enable(Enable);
	}
	*/
public:
	void MagEmpty();

	void SetHP(int32 HP)
	{
		m_PlayerInfo->SetHP(HP);
	}
	void SetHPMax(int32 HPMax)
	{
		m_PlayerInfo->SetHPMax(HPMax);
	}
	void SetAttack(int32 Attack)
	{
		m_PlayerInfo->SetAttack(Attack);
	}
	void SetArmor(int32 Armor)
	{
		m_PlayerInfo->SetArmor(Armor);
	}
	void SetCurrentMag(int32 CurrentMag)
	{
		m_PlayerInfo->SetCurrentMag(CurrentMag);
	}
	void SetRemainMag(int32 RemainMag)
	{
		m_PlayerInfo->SetRemainMag(RemainMag);
	}


	void AddHP(int32 HP);
	void AddCurrentMag(int32 CurrentMag)
	{
		m_PlayerInfo->AddCurrentMag(CurrentMag);
	}
	void AddRemainMag(int32 RemainMag)
	{
		m_PlayerInfo->AddRemainMag(RemainMag);
	}
	void AddAbilityPoint(int32 Point)
	{
		m_PlayerInfo->AddAbilityPoint(Point);
	}



public:
	int32 GetHP()
	{
		return m_PlayerInfo->GetHP();
	}
	int32 GetHPMax()
	{
		return m_PlayerInfo->GetHPMax();
	}
	int32 GetAttack()
	{
		return m_PlayerInfo->GetAttack();
	}
	int32 GetArmor()
	{
		return m_PlayerInfo->GetArmor();
	}
	int32 GetCurrentMag()
	{
		return m_PlayerInfo->GetCurrentMag();
	}
	int32 GetRemainMag()
	{
		return m_PlayerInfo->GetRemainMag();
	}

	int32 GetAbilityPoint()
	{
		return m_PlayerInfo->GetAbilityPoint();
	}

public:

	void EquipSuppressor();
	void EmitHitEffect(FVector ImpactLoc, FRotator Rot);
	void ShowHitMark();
	void ShowHeadShotMark();
	void AimAssist();
	void PlasmaShield();
	void UpdateRemainMag();
};
