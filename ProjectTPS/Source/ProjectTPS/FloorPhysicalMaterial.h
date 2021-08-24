// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "FloorPhysicalMaterial.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTPS_API UFloorPhysicalMaterial : public UPhysicalMaterial
{
	GENERATED_BODY()

public:
	UFloorPhysicalMaterial();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_HitSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		UParticleSystem* m_HitParticle;


public:
	USoundBase* PlaySound() const
	{
		return m_Sound;
	}

	USoundBase* GetHitSound() const
	{
		return m_HitSound;
	}

	UParticleSystem* GetHitParticle() const
	{
		return m_HitParticle;
	}
};
