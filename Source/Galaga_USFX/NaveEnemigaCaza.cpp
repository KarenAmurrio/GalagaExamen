// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "ProjectileBomerang.h"
#include "ProjectileMetralleta.h"
#include "Engine/World.h"
#include "ProjectileLaser.h"
#include "NaveEnemigaPublisher.h"
#include "EngineUtils.h"
#include "EnemigasFacade.h"


ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	FireRate = 0;
	bCanFire = true;
	NewProjectile = nullptr;
	Vida = 10;
	bCanMove = false;

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
	if(bCanMove == true)
	{
		velocidad = 2.0; //0.75
		SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
	}
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

void ANaveEnemigaCaza::ReiniciarEstado()
{
	bCanFire = false;
	bCanMove = false;
	Vida = 10; // Reiniciar la vida de la nave a su valor inicial
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_ShotTimerExpired);
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

void ANaveEnemigaCaza::RecibirDanio()
{
	Vida -= 5;
	if (Vida <= 0)
	{
		Destroy();

		AEnemigasFacade* EnemigasFacade = nullptr;

		for (TActorIterator<AEnemigasFacade> It(GetWorld()); It; ++It)
		{
			EnemigasFacade = *It;
			break;  // Asumiendo que solo hay una instancia de AEnemigasFacade en el nivel
		}
		EnemigasFacade->SetCantidadNavesEnemigas(EnemigasFacade->GetCantidadNavesEnemigas() - 1);
	}
}

void ANaveEnemigaCaza::Actualizar()
{
	if(bCanMove == false && bCanFire==false)
	{
		bCanMove = true;
		bCanFire = true;
	}

	ANaveEnemigaPublisher* Publisher = nullptr;
	for (TActorIterator<ANaveEnemigaPublisher> It(GetWorld()); It; ++It)
	{
		Publisher = *It;
		break;  // Asumiendo que solo hay una instancia de ANaveEnemigaPublisher en el nivel
	}
	Publisher->Desuscribir(this);
}
