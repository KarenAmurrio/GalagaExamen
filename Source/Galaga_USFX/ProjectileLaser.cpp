// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileLaser.h"

// Sets default values
AProjectileLaser::AProjectileLaser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/Projectile1.Projectile1'"));
	mallaProjectile->SetStaticMesh(ShipMesh.Object);

	InitialLifeSpan = 3.0f;

	velocidad = 3000;
	danio = 10;

}

// Called when the game starts or when spawned
void AProjectileLaser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileLaser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileLaser::Mover()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}

