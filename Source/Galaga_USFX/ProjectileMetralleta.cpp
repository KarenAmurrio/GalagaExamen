// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileMetralleta.h"
#include "NaveEnemigaCaza.h"

// Sets default values
AProjectileMetralleta::AProjectileMetralleta()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
	mallaProjectile->SetStaticMesh(ShipMesh.Object);

	InitialLifeSpan = 3.0f;
	velocidad = 1000;
	danio = 10;
}

// Called when the game starts or when spawned
void AProjectileMetralleta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileMetralleta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();

}

void AProjectileMetralleta::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}


