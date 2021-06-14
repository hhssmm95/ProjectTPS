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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UParticleSystemComponent* m_TimeAccelParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UParticleSystemComponent* m_ScopeParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UPostProcessComponent* m_PostProcess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UPostProcessComponent* m_NightVision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UPostProcessComponent* m_ThermalVision;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		TSubclassOf<class AEffectNormal> m_ThrusterParticle;

	class AEffectNormal* m_Thruster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_ThrusterSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_TimeAccelOnSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_TimeAccelOffSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_NightVisionSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_ButtonSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USoundBase* m_GearSearchSound;

	FVector m_AssistLoc;
	bool m_bAimAssist;
	float m_AimAssistTime;
	float m_AimAssistTimeAcc;

	bool m_bShield;
	float m_ShieldTime;
	float m_ShieldTimeAcc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
	float m_HPRegenTime;
	float m_HPRegenTimeAcc;

	bool m_bOverload;
	float m_OverloadTime;
	float m_OverloadTimeAcc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
	bool m_bDashEnable;

	bool m_bIsRightDashing;
	bool m_bIsLeftDashing;
	bool m_bIsDashing;
	float m_DashingTime;
	float m_DashingTimeAcc;

	float m_DashEnableTime;
	float m_DashEnableTimeAcc;

	bool m_bTimeAccel;
	float m_TimeAccelTime;
	float m_TimeAccelTimeAcc;

	class APlayerHUD* m_HUD;

	float m_AutoShotRange;

	bool m_bFire;
	bool m_bMagEmpty;

	bool m_bNightVision;
	bool m_bThermalVision;
	bool m_bScope;

	bool m_Slot1AbilityEnable;
	bool m_Slot2AbilityEnable;

	float m_Slot1AbilityCooltime;
	float m_Slot2AbilityCooltime;

	EAbility m_eSlot1Ability;
	EAbility m_eSlot2Ability;

	bool m_bCloseAttackEnable;


public:

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

	void WheelEvent(float fScale);

	void Detection();

public:
	void InputJump();
	void AimPress();
	void AimRelease();
	void ReloadStart();
	void ReloadEnd();

	void PrimaryFire();
	void PrimaryStop();

	void DashRight();
	void DashLeft ();

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

	void SetIsDead()
	{
		m_bIsDead = true;
	}

	void SetHaveScope(bool Enable)
	{
		m_PlayerInfo->SetHaveScope(Enable);
	}
	void SetHaveSuppressor(bool Enable)
	{
		m_PlayerInfo->SetHaveSuppressor(Enable);
	}
	void SetHaveNightVision(bool Enable)
	{
		m_PlayerInfo->SetHaveNightVision(Enable);
	}
	void SetHaveThermalVision(bool Enable)
	{
		m_PlayerInfo->SetHaveNightVision(Enable);
	}
public:
	void MagEmpty();

	void SetHP(float HP)
	{
		m_PlayerInfo->SetHP(HP);
	}
	void SetHPMax(float HPMax)
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


	void AddHP(float HP);
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
	float GetHP()
	{
		return m_PlayerInfo->GetHP();
	}
	float GetHPMax()
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

	bool GetHaveScope()
	{
		return m_PlayerInfo->GetHaveScope();
	}
	bool GetHaveSuppressor()
	{
		return m_PlayerInfo->GetHaveSuppressor();
	}
	bool GetHaveNightVision()
	{
		return m_PlayerInfo->GetHaveNightVision();
	}
	bool GSetHaveThermalVision()
	{
		return m_PlayerInfo->GetHaveNightVision();
	}

	bool GetIsDead()
	{
		return m_bIsDead;
	}

	bool GetUsingScope()
	{
		return m_bScope;
	}

	bool GetUsingSuppressor();

	bool GetUsingNightVision()
	{
		return m_bNightVision;
	}

	bool GetUsingThermalVision()
	{
		return m_bThermalVision;
	}
public:

	void EquipGear();
	void EmitHitEffect(FVector ImpactLoc, FRotator Rot);
	void ShowHitMark();
	void ShowHeadShotMark();
	void AimAssist();
	void PlasmaShield();
	void ReactorOverload();
	void UpdateRemainMag();
	void GetAmmoFromItem(int Ammo);
	void TimeAccecleration();

	void CloseAttack();
	void CloseAttackStart();
	void CloseAttackEnd();

};
