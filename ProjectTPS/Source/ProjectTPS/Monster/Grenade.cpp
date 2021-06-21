// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"
#include "../HitEffect.h"
#include "../Player/PlayerCharacter.h"

// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_Body = CreateDefaultSubobject<USphereComponent>(TEXT("Body"));
	m_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	m_Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));

	SetRootComponent(m_Body);

	m_Mesh->SetupAttachment(m_Body);
	m_Particle->SetupAttachment(m_Body);
	Movement->SetUpdatedComponent(m_Body);

	m_Velocity = FVector::ZeroVector;
	m_ArcValue = 0.1f;

	m_Launched = false;
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();
	m_Body->OnComponentHit.AddDynamic(this, &AGrenade::OnGrenadeHit);
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorRotation(GetActorRotation() + FRotator(0.f, 0.f, 2.f));
}


void AGrenade::Throw(FVector LaunchLoc, FVector TargetLoc, APawn* Invenstigator)
{
	m_Investigator = Invenstigator;

	if (UGameplayStatics::SuggestProjectileVelocity_CustomArc(this, m_Velocity, LaunchLoc, TargetLoc, GetWorld()->GetDefaultGravityZ(), m_ArcValue))
	//if (UGameplayStatics::SuggestProjectileVelocity(this, m_Velocity, LaunchLoc, TargetLoc, 1000.f, false, 0.0f, GetWorld()->GetDefaultGravityZ()))
	{
		//FPredictProjectilePathParams predictParams(20.0f, LaunchLoc, LaunchLoc, 15.0f);   // 20: tracing 보여질 프로젝타일 크기, 15: 시물레이션되는 Max 시간(초)
		//predictParams.DrawDebugTime = 2.0f;     //디버그 라인 보여지는 시간 (초)
		//predictParams.DrawDebugType = EDrawDebugTrace::Type::ForDuration;  // DrawDebugTime 을 지정하면 EDrawDebugTrace::Type::ForDuration 필요.
		//predictParams.OverrideGravityZ = GetWorld()->GetDefaultGravityZ();
		//FPredictProjectilePathResult result;
		//UGameplayStatics::PredictProjectilePath(this, predictParams, result);

		//Movement->Velocity = m_Velocity * m_Box->GetMass();
		//Movement->InitialSpeed = m_Box->GetMass() * 100.f;
		//Movement->AddForce(m_Velocity * m_Box->GetMass());
		////m_Capsule->AddForce(m_Velocity);
		//float time = FMath::sin m_Velocity * m_Box->GetMass();
		m_Body->AddImpulse(m_Velocity * m_Body->GetMass());
		m_Launched = true;
	}
	else
	{

	}

}

void AGrenade::OnGrenadeHit(UPrimitiveComponent* HitComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{

		FDamageEvent DmgEvent;

		FVector vDir = GetActorLocation() - Hit.ImpactPoint;
		vDir.Normalize();
		FRotator	vRot = vDir.ToOrientationRotator();


		TArray<AActor*> IgnoreActor;
		IgnoreActor.Add(this);

		FHitResult result;

		bool bHit = UKismetSystemLibrary::SphereTraceSingle(GetWorld(), GetActorLocation(), GetActorLocation(),
			200.f, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel5), true, IgnoreActor,
			EDrawDebugTrace::None, result, true, FLinearColor::Red, FLinearColor::Green, 2.f);

		if (bHit)
		{
			APlayerCharacter* pPlayer = Cast<APlayerCharacter>(result.GetActor());
			if (pPlayer)
			{
				pPlayer->TakeDamage(m_Damage, DmgEvent, m_Investigator->GetController(), m_Investigator);
				pPlayer->EmitHitEffect(Hit.ImpactPoint, vRot);

			}


		}

		FActorSpawnParameters	param;
		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		FVector ImpactLoc = GetActorLocation();

		AHitEffect* pHitEffect = GetWorld()->SpawnActor<AHitEffect>(AHitEffect::StaticClass(), ImpactLoc,
			GetActorRotation(), param);

		pHitEffect->SetActorScale3D(FVector(3.5f, 3.5f, 3.5f));

		pHitEffect->LoadParticle(m_HitParticle);
		pHitEffect->LoadSound(m_HitSound);


		Destroy();
	
}
