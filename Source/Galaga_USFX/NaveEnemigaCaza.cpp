// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "ProjectileBomerang.h"
#include "ProjectileMetralleta.h"
#include "Engine/World.h"
#include "ProjectileLaser.h"


ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	FireRate = 0;
	bCanFire = true;
	NewProjectile = nullptr;

}

void ANaveEnemigaCaza::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void ANaveEnemigaCaza::ShotTimerExpired()
{
	bCanFire = true;
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	//velocidad = 2.0; //0.75

	//if (band == 1)
	//{
	//	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y + velocidad, GetActorLocation().Z));
	//	if (GetActorLocation().Y >= posicionY + 300)
	//	{
	//		band = 0;
	//	}
	//}
	//else if (band == 0)
	//{
	//	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad, GetActorLocation().Z));
	//	if (GetActorLocation().Y <= posicionY - 300)
	//	{
	//		band = 1;
	//	}

	//}

	velocidad = 2.0; //0.75
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaCaza::Disparar()
{
	FVector SpawnLocation = GetActorLocation() + -(GetActorForwardVector() * 1);
	if (bCanFire == true)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaCaza::ShotTimerExpired, FireRate, false);
		GetWorld()->SpawnActor<AProjectileEnemigo>(NewProjectile, SpawnLocation, FRotator::ZeroRotator);
		bCanFire = false;
	}
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Disparar();
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("FireRate %f"), FireRate));
}

void ANaveEnemigaCaza::FuncionDeManejoDeColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{// Verificar si el objeto con el que colisionamos es una bala
	AProjectileBomerang* BomerangProjectile = Cast<AProjectileBomerang>(OtherActor);
	if (BomerangProjectile)
	{
		// Destruir la nave enemiga
		Destroy();

	}
}