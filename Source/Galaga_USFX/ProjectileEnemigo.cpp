// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileEnemigo.h"

// Sets default values
AProjectileEnemigo::AProjectileEnemigo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaProjectile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaProjectile->SetupAttachment(RootComponent);
	RootComponent = mallaProjectile;

	InitialLifeSpan = 2.0f;
	velocidad = 3000;
	danio = 10;
}

// Called when the game starts or when spawned
void AProjectileEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();
}

//void AProjectileEnemigo::Mover()
//{
//	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds();
//	SetActorLocation(NewLocation);
//}

