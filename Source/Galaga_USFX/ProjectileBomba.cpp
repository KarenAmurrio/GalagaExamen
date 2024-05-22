// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBomba.h"

AProjectileBomba::AProjectileBomba()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/Projectile3.Projectile3'"));
	mallaProjectile->SetStaticMesh(ShipMesh.Object);

	InitialLifeSpan = 3.0f;
	velocidad = 500;
}

void AProjectileBomba::BeginPlay()
{
	Super::BeginPlay();
}

void AProjectileBomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();
}

void AProjectileBomba::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}
