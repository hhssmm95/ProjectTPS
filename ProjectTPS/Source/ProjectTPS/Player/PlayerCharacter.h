// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* m_Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		USpringArmComponent* m_Arm;

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
		class APrimaryWeapon* m_PrimaryWeapon;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		TSubclassOf<class APrimaryWeapon> m_StartWeapon;

	bool m_bFire;

public:/*
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

	void MoveFront(float fScale);
	void MoveSide(float fScale);
	void Turn(float fScale);
	void LookUp(float fScale);

	void AddUpperYawInput(float fScale);


public:
	void InputJump();
	void AimPress();
	void AimRelease();

	void PrimaryFire();
	void PrimaryStop();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
