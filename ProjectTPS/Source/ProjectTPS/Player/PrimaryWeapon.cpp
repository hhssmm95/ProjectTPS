// Fill out your copyright notice in the Description page of Project Settings.


#include "PrimaryWeapon.h"
#include "../Bullet.h"
#include "../EffectNormal.h"

// Sets default values
APrimaryWeapon::APrimaryWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FClassFinder<AEffectNormal>	MuzzleClassAsset(TEXT("Blueprint'/Game/Player/BP_RifleMuzzle.BP_RifleMuzzle_C'"));
	if (MuzzleClassAsset.Succeeded())
		m_MuzzleClass = MuzzleClassAsset.Class;


	static ConstructorHelpers::FClassFinder<ABullet>	BulletClassAsset(TEXT("Blueprint'/Game/Player/BP_Bullet.BP_Bullet_C'"));

	if (BulletClassAsset.Succeeded())
		m_BulletClass = BulletClassAsset.Class;

	m_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	m_RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	SetRootComponent(m_RootScene);

	m_Mesh->SetupAttachment(m_RootScene);
}

// Called when the game starts or when spawned
void APrimaryWeapon::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APrimaryWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APrimaryWeapon::LoadMesh(const FString& strPath)
{
	USkeletalMesh* pMesh = LoadObject<USkeletalMesh>(nullptr, *strPath);


	if (IsValid(pMesh))
		m_Mesh->SetSkeletalMesh(pMesh);
}

void APrimaryWeapon::Fire()
{
	FVector vMuzzlePos = GetMesh()->GetSocketLocation(TEXT("ShinbiBullet")) + GetActorForwardVector() * 5.f;
	FRotator vMuzzleRot = GetActorRotation();

	AEffectNormal* Muzzle = GetWorld()->SpawnActor<AEffectNormal>(m_MuzzleClass, vMuzzlePos,
		vMuzzleRot);

	ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(m_BulletClass, vMuzzlePos + GetActorForwardVector() * 100.f,
		GetActorRotation());
}