// Fill out your copyright notice in the Description page of Project Settings.


#include "HitEffect.h"

// Sets default values
AHitEffect::AHitEffect()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	SetRootComponent(m_Particle);


}

// Called when the game starts or when spawned
void AHitEffect::BeginPlay()
{
	Super::BeginPlay();
	//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FOnProjectileStopDelegate, const FHitResult&, ImpactResult );
	//Movement->OnProjectileStop.AddDynamic(this, &AProjectileSkill::ProjectileStop);
	//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FOnSystemFinished, class UParticleSystemComponent*, PSystem );
	m_Particle->OnSystemFinished.AddDynamic(this, &AHitEffect::OnEffectEnd);
}

// Called every frame
void AHitEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHitEffect::OnEffectEnd(UParticleSystemComponent* particle)
{
	Destroy();
}

void AHitEffect::LoadParticle(const FString& strPath)
{
	//���ڷ� ���� ��θ� �̿��ؼ� ������ �ε��Ѵ�. (������)
	UParticleSystem* Asset = LoadObject<UParticleSystem>(nullptr, *strPath);

	if (IsValid(Asset))
		m_Particle->SetTemplate(Asset);
}

void AHitEffect::LoadParticle(UParticleSystem* Particle)
{
	if (IsValid(Particle))
		m_Particle->SetTemplate(Particle);
}


void AHitEffect::LoadSound(const FString& strPath)
{
	//���ڷ� ���� ��θ� �̿��ؼ� ������ �ε��Ѵ�. (������)
	m_Sound = LoadObject<USoundBase>(nullptr, *strPath);


	if (IsValid(m_Sound))
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_Sound, GetActorLocation());
}

void AHitEffect::LoadSound(USoundBase* Sound)
{
	//���ڷ� ���� ��θ� �̿��ؼ� ������ �ε��Ѵ�. (������)
	m_Sound = Sound;


	if (IsValid(m_Sound))
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_Sound, GetActorLocation());
}

void AHitEffect::LoadAdditionalSound1(USoundBase* Sound)
{
	//���ڷ� ���� ��θ� �̿��ؼ� ������ �ε��Ѵ�. (������)
	m_AdditionalSound1 = Sound;


	if (IsValid(m_AdditionalSound1))
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_AdditionalSound1, GetActorLocation());
}

void AHitEffect::LoadAdditionalSound2(USoundBase* Sound)
{
	//���ڷ� ���� ��θ� �̿��ؼ� ������ �ε��Ѵ�. (������)
	m_AdditionalSound2 = Sound;


	if (IsValid(m_AdditionalSound2))
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_AdditionalSound2, GetActorLocation());
}

