// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelTransition.h"

// Sets default values
ALevelTransition::ALevelTransition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_Body = CreateDefaultSubobject<UBoxComponent>(TEXT("Body"));
}

// Called when the game starts or when spawned
void ALevelTransition::BeginPlay()
{
	Super::BeginPlay();
	m_Body->OnComponentBeginOverlap.AddDynamic(this, &ALevelTransition::OnBeginTransitionOverlap);
}

// Called every frame
void ALevelTransition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelTransition::OnBeginTransitionOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UGameplayStatics::OpenLevel(GetWorld(), m_LevelName);
}

