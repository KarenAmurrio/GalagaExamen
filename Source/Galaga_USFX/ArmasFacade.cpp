// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmasFacade.h"
#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "ProjectileMetralleta.h"
#include "ProjectileLaser.h"
#include "ProjectileBomba.h"



// Sets default values
AArmasFacade::AArmasFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmasFacade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmasFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmasFacade::Metralleta()
{
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 2; j++) {
				FVector PosicionNaveActual = FVector(270.0f + j * 200, -660.0f + i * 600, 200.0f);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				NuevaNaveCaza->SetFireRate(0.3f);
				AProjectileMetralleta* Projectile=nullptr;
				if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza))
				{
					NaveCaza->NewProjectile = AProjectileMetralleta::StaticClass();
				}
			}
		}
	}
}

void AArmasFacade::Bomba()
{
	UWorld* World = GetWorld();
	/*if (World != nullptr)
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 2; j++) {
				FVector PosicionNaveActual = FVector(500.0f + j * 200, 10.0f + i * 300, 200.0f);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				NuevaNaveCaza->SetFireRate(2.f);
				if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza))
				{
					NaveCaza->NewProjectile = AProjectileBomba::StaticClass();
				}
			}
		}
	}*/
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
				FVector PosicionNaveActual = FVector(850.f, -1480 + i *3000, 200.0f);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				NuevaNaveCaza->SetFireRate(2.f);
				if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza))
				{
					NaveCaza->NewProjectile = AProjectileBomba::StaticClass();
				}
		}
	}
}

void AArmasFacade::Laser()
{
	UWorld* World = GetWorld();
	//if (World != nullptr)
	//{
	//	for (int i = 0; i < 4; i++) {
	//		for (int j = 0; j < 2; j++) {
	//			FVector PosicionNaveActual = FVector(500.0f + j * 200, 10.0f + i * 300, 200.0f);
	//			ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
	//			NuevaNaveCaza->SetFireRate(0.1f);
	//			//AProjectileMetralleta* Projectile = nullptr;
	//			if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza))
	//			{
	//				NaveCaza->NewProjectile = AProjectileLaser::StaticClass();
	//			}
	//		}
	//	}
	//}
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
				FVector PosicionNaveActual = FVector(1000.0f, -510.0f + i * 800, 200.0f);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				NuevaNaveCaza->SetFireRate(0.1f);
				if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza))
				{
					NaveCaza->NewProjectile = AProjectileLaser::StaticClass();
				}
		}
	}
}

void AArmasFacade::Basica()
{

}

void AArmasFacade::Boomerang()
{

}

void AArmasFacade::Doble()
{

}

void AArmasFacade::AsignarArma(int arma)
{
	if (arma == 1)
	{
		Metralleta();
	}
	else if (arma == 2)
	{
		Bomba();
	}
	else if (arma == 3)
	{
		Laser();
	}
	else if (arma == 4)
	{
		Basica();
	}
	else if (arma == 5)
	{
		Boomerang();
	}
	else if (arma == 6)
	{
		Doble();
	}
}

