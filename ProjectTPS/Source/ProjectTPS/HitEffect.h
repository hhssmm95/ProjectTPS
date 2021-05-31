// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"

#include "GameFramework/Actor.h"
#include "HitEffect.generated.h"

UCLASS()
class PROJECTTPS_API AHitEffect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHitEffect();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* m_Particle;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	//UNiagaraComponent* m_NiagaraParticle;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_Sound;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_AdditionalSound1;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_AdditionalSound2;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		USoundBase* m_AdditionalSound3;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UFUNCTION()
		void OnEffectEnd(UParticleSystemComponent* particle);

public:
	void SetParticle(UParticleSystem* pParticle)
	{
		m_Particle->SetTemplate(pParticle);
	}

	void LoadParticle(const FString& strPath);
	void LoadParticle(UParticleSystem* Particle);
	//void LoadNiagaraParticle(UNiagaraSystem* Particle);
	void LoadSound(const FString& strPath);
	void LoadSound(USoundBase* Sound);
	void LoadAdditionalSound1(USoundBase* Sound);
	void LoadAdditionalSound2(USoundBase* Sound);


};
