// Fill out your copyright notice in the Description page of Project Settings.


#include "EffectNormal.h"

// Sets default values
AEffectNormal::AEffectNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));

	SetRootComponent(m_Particle);

	m_EffectEnd = false;
}

// Called when the game starts or when spawned
void AEffectNormal::BeginPlay()
{
	Super::BeginPlay();

	if (m_EffectEnd)
		m_Particle->OnSystemFinished.AddDynamic(this, &AEffectNormal::OnEffectEnd);
}

// Called every frame
void AEffectNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AEffectNormal::OnEffectEnd(UParticleSystemComponent* particle)
{
	Destroy();
}
