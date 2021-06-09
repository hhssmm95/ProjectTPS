// Fill out your copyright notice in the Description page of Project Settings.


#include "DropItem.h"
#include "Player/PlayerCharacter.h"

// Sets default values
ADropItem::ADropItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_ItemType = EItemType::None;
	m_AmmoAmount = 0;
	m_AbilityPoint = 0;
	m_Body = CreateDefaultSubobject<UBoxComponent>(TEXT("Body"));
	SetRootComponent(m_Body);

	//m_Mesh->SetupAttachment(m_Body);

}

// Called when the game starts or when spawned
void ADropItem::BeginPlay()
{
	Super::BeginPlay();
	m_Body->OnComponentBeginOverlap.AddDynamic(this, &ADropItem::OnItemBeginOverlap);
	

}

// Called every frame
void ADropItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void ADropItem::OnItemBeginOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* pPlayer = Cast<APlayerCharacter>(OtherActor);

	if (pPlayer)
	{
		switch (m_ItemType)
		{
		case EItemType::Ammo:
				pPlayer->AddRemainMag(m_AmmoAmount);
				pPlayer->UpdateRemainMag();
				break;

		case EItemType::AbilityPoint:
				pPlayer->AddAbilityPoint(m_AbilityPoint);
				break;
		}
	}

	Destroy();

}