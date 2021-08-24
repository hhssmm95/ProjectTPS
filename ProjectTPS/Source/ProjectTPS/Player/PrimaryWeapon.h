// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/Actor.h"
#include "PrimaryWeapon.generated.h"

UCLASS()
class PROJECTTPS_API APrimaryWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APrimaryWeapon();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* m_Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USceneComponent* m_RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* m_SuppressorMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* m_ScopeMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* m_ScopeCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_FireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_CurrentMag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_CurrentMagMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_RemainMag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_SPDurabilityMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		float m_SPDurabilityDecrease;

	float m_SPDurability;
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class ABullet>	m_BulletClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class ABullet>	m_BurstBulletClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AExplosiveBullet>	m_ExplosiveBulletClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_SuppressorSoundClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_EquipSoundClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_DischargeSoundClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_MuzzleSoundClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_EmptySoundClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_BurstModeSoundClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AEffectNormal>	m_MuzzleClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AEffectNormal>	m_BurstMuzzleClass;



protected:

	class APlayerCharacter* m_Player;

	class APlayerHUD* m_PlayerHUD;

	float m_Pitch;

	bool Delay;
	float DelayTime;
	float DelayTimeAcc;

	bool m_bSuppressorUsing;
	bool m_bScopeUsing;

	bool m_bBurst;
	float m_BurstTime;
	float m_BurstTimeAcc;


	//float m_BulletSpreadYaw;
	//float m_CurrentBulletSpreadYaw;
	//float m_BulletSpreadYawMax;

	//float m_BulletSpreadPitch;
	//float m_CurrentBulletSpreadPitch;
	//float m_BulletSpreadPitchMax;

	int m_RecoilStack;

public:
	float GetSPDurability()	const
	{
		return m_SPDurability;
	}

	USkeletalMeshComponent* GetMesh()	const
	{
		return m_Mesh;
	}

	bool GetSuppressorUsing()
	{
		return m_bSuppressorUsing;
	}

	bool GetScopeUsing()
	{
		return m_bScopeUsing;
	}

	UCameraComponent* GetScopeCamera()
	{
		return m_ScopeCamera;
	}

	FVector GetCameraLoc()
	{
		return m_ScopeCamera->GetComponentLocation();
	}

	FVector GetCameraForward()
	{
		return m_ScopeCamera->GetForwardVector();
	}

	void BurstMode(float BurstTime);
	void BurstEnd();

	void EquipSuppressor();
	void EquipScope();

	//void Fire(FVector CameraPos, FVector CameraForward);
	//void ExplosiveFire(FVector CameraPos, FVector CameraForward);
	void AutoFire(FVector CameraPos,  FVector TargetPos);
	void Fire(UCameraComponent* PlayerCamera);
	void ExplosiveFire(UCameraComponent* PlayerCamera);
	//void AutoFire(UCameraComponent* PlayerCamera);
	void Reload();

	void LookUp(float fScale);

	FVector2D RandPointInCircle(float Radius);

	void RecoilRecovery();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void LoadMesh(const FString& strPath);

};
