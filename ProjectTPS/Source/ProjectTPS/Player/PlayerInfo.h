// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ActorComponent.h"
#include "PlayerInfo.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTTPS_API UPlayerInfo : public UActorComponent
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
		int32 m_CurrentMag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_CurrentMagMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_RemainMag;


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Assult1Enable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Assult2Enable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Assult3Enable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Defence1Enable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Defence2Enable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Defence3Enable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Utility1Enable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Utility2Enable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_Utility3Enable;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_AssultLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_DefenceLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_UtilityLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 m_AbilityPoint;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_HaveSnipeMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_HaveSuperSuppressor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_HaveNightVision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		bool m_HaveThermalVision;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float m_WaitTime;

	float m_WaitTimeAcc;
	bool m_bWait;


public:	
	// Sets default values for this component's properties
	UPlayerInfo();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	void SetAssult1Enable(bool Enable)
	{
		m_Assult1Enable = Enable;
	}
	void SetAssult2Enable(bool Enable)
	{
		m_Assult2Enable = Enable;
	}
	void SetAssult3Enable(bool Enable)
	{
		m_Assult3Enable = Enable;
	}

	void SetDefence1Enable(bool Enable)
	{
		m_Defence1Enable = Enable;
	}
	void SetDefence2Enable(bool Enable)
	{
		m_Defence2Enable = Enable;
	}
	void SetDefence3Enable(bool Enable)
	{
		m_Defence3Enable = Enable;
	}

	void SetUtility1Enable(bool Enable)
	{
		m_Utility1Enable = Enable;
	}
	void SetUtility2Enable(bool Enable)
	{
		m_Utility2Enable = Enable;
	}
	void SetUtility3Enable(bool Enable)
	{
		m_Utility3Enable = Enable;
	}

public:

	void SetAssultLevel(int32 Level)
	{
		m_AssultLevel = Level;
	}
	void SetDefenceLevel(int32 Level)
	{
		m_DefenceLevel = Level;
	}
	void SetUtilityLevel(int32 Level)
	{
		m_UtilityLevel = Level;
	}

	void SetAbilityPoint(int32 Point)
	{
		m_AbilityPoint = Point;
	}
	void SetHP(int32 HP)
	{
		m_HP = HP;
	}
	void SetHPMax(int32 HPMax)
	{
		m_HPMax = HPMax;
	}
	void SetAttack(int32 Attack)
	{
		m_Attack = Attack;
	}
	void SetArmor(int32 Armor)
	{
		m_Armor = Armor;
	}
	void SetCurrentMag(int32 CurrentMag)
	{
		m_CurrentMag = CurrentMag;
	}
	void SetCurrentMagMax(int32 CurrentMagMax)
	{
		m_CurrentMagMax = CurrentMagMax;
	}
	void SetRemainMag(int32 RemainMag)
	{
		m_RemainMag = RemainMag;
	}



	void AddHP(int32 HP)
	{
		m_HP += HP;
	}
	void AddCurrentMag(int32 CurrentMag)
	{
		m_CurrentMag += CurrentMag;
	}
	void AddRemainMag(int32 RemainMag)
	{
		m_RemainMag += RemainMag;
	}



public:
	int32 GetHP()
	{
		return m_HP;
	}
	int32 GetHPMax()
	{
		return m_HPMax;
	}

	float GetHPPercent()
	{
		return m_HP / (float)m_HPMax;
	}

	int32 GetAttack()
	{
		return m_Attack;
	}
	int32 GetArmor()
	{
		return m_Armor;
	}
	int32 GetCurrentMag()
	{
		return m_CurrentMag;
	}
	int32 GetCurrentMagMax()
	{
		return m_CurrentMagMax;
	}
	int32 GetRemainMag()
	{
		return m_RemainMag;
	}
	int32 GetAssultLevel()
	{
		return m_AssultLevel;
	}

	int32 GetDefenceLevel()
	{
		return m_DefenceLevel;
	}

	int32 GetUtilityLevel()
	{
		return m_UtilityLevel;
	}




	
};
