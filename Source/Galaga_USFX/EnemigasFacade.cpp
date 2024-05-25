// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigasFacade.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemigaTransporteFactory.h"
#include "NaveEnemigaCaza.h"
#include "ProjectileMetralleta.h"
#include "ProjectileLaser.h"
#include "ProjectileBomba.h"
#include "AliadosBaseBuilder.h"
#include "AliadosCampoBuilder.h"
#include "DirectorAliadas.h"
#include "Aliados.h"

// Sets default values
AEnemigasFacade::AEnemigasFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NEI = 0;
	NEJ = 0;
	cantidadNavesEnemigas = 0;
	cronometro = 0;
	EnemigasActivas = true;
	bCampamentoCreado = false;
	dificultad = 0;

}

// Called when the game starts or when spawned
void AEnemigasFacade::BeginPlay()
{
	Super::BeginPlay();
	ANaveEnemigaCazaFactory* Factory=GetWorld()->SpawnActor<ANaveEnemigaCazaFactory>(ANaveEnemigaCazaFactory::StaticClass());

}

// Called every frame
void AEnemigasFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,FString::Printf(TEXT("Enemigos %d"), cantidadNavesEnemigas));

	if (EnemigasActivas == false && cantidadNavesEnemigas == 0)
	{
		if (Nivel)
		{
			Nivel->destruirAliados();
			Nivel->Destroy();
			campamento();
		}
		TiempoTranscurrido++;
		// EnemigasActivas = true;
	}
	else if (EnemigasActivas == true && cantidadNavesEnemigas > 0)
	{
		nivel();
		EnemigasActivas = false;
	}

	if ((cronometro + 200) == TiempoTranscurrido)
	{
		cronometro = 0;
		TiempoTranscurrido = 0;
		if (Campamento)
		{
			Campamento->destruirAliados();
			Campamento->Destroy();
		}
		//facade->SetNEI(facade->GetNEI()+2);
		//facade->SetNEJ(facade->GetNEJ()+2);
		//cantidadNavesEnemigas = facade->GetNEI()*facade->GetNEJ();
		if (dificultad == 1) {
			DesplegarNEFacil();
		}
		else if (dificultad == 2) {
			DesplegarNEMedio();
		}
		else if (dificultad == 3) {
			DesplegarNEAvanzado();
		}
		EnemigasActivas = true;
		bCampamentoCreado = false;
	}


}

void AEnemigasFacade::DesplegarNEFacil()
{
	NEI = 4;
	NEJ = 2;
	cantidadNavesEnemigas = NEI * NEJ;
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < NEI; i++) {
			for (int j = 0; j < NEJ; j++) {
				FVector PosicionNaveActual = FVector(270.0f + j * 200, -660.0f + i * 600, 200.0f);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				NuevaNaveCaza->SetFireRate(0.3f);
				AProjectileMetralleta* Projectile = nullptr;
				if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza))
				{
					NaveCaza->NewProjectile = AProjectileMetralleta::StaticClass();
				}
			}
		}
	}
	dificultad = 1;
}

void AEnemigasFacade::DesplegarNEMedio()
{
	NEI = 4;
	NEJ = 2;
	cantidadNavesEnemigas = NEI * NEJ + 2;
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < NEI; i++) {
			for (int j = 0; j < NEJ; j++) {
				FVector PosicionNaveActual = FVector(270.0f + j * 200, -660.0f + i * 600, 200.0f);
				ANaveEnemiga* NuevaNaveCaza2 = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				if(!NuevaNaveCaza2)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NaveCaza no existe")));
					return;
				}
				NuevaNaveCaza2->SetFireRate(0.3f);
				AProjectileMetralleta* Projectile = nullptr;
				if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza2))
				{
					NaveCaza->NewProjectile = AProjectileMetralleta::StaticClass();
				}
			}
		}
	}
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(1000.0f, -510.0f + i * 800, 200.0f);
			ANaveEnemiga* NuevaNaveCaza3 = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
			NuevaNaveCaza3->SetFireRate(0.1f);
			if (!NuevaNaveCaza3)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NaveCaza no existe")));
				return;
			}
			if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza3))
			{
				NaveCaza->NewProjectile = AProjectileLaser::StaticClass();
			}
		}
	}

	dificultad = 2;
}


void AEnemigasFacade::DesplegarNEAvanzado()
{
	NEI = 4;
	NEJ = 2;
	cantidadNavesEnemigas = NEI * NEJ + 4;

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(850.f, -1480 + i * 3000, 200.0f);
			ANaveEnemiga* NuevaNaveCaza4 = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);

			if (!NuevaNaveCaza4)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NaveCaza no existe")));
				return;
			}
			NuevaNaveCaza4->SetFireRate(2.f);
			if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza4))
			{
				NaveCaza->NewProjectile = AProjectileBomba::StaticClass();
			}
		}
	}
	if (World != nullptr)
	{
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(1000.0f, -510.0f + i * 800, 200.0f);
			ANaveEnemiga* NuevaNaveCaza5 = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);

			if (!NuevaNaveCaza5)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NaveCaza no existe")));
				return;
			}
			NuevaNaveCaza5->SetFireRate(0.1f);
			if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza5))
			{
				NaveCaza->NewProjectile = AProjectileLaser::StaticClass();
			}
		}
	}
	if (World != nullptr)
	{
		for (int i = 0; i < NEI; i++) {
			for (int j = 0; j < NEJ; j++) {
				FVector PosicionNaveActual = FVector(270.0f + j * 200, -660.0f + i * 600, 200.0f);
				ANaveEnemiga* NuevaNaveCaza6 = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				if (!NuevaNaveCaza6)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("NaveCaza no existe")));
					return;
				}
				NuevaNaveCaza6->SetFireRate(0.3f);
				AProjectileMetralleta* Projectile = nullptr;
				if (ANaveEnemigaCaza* NaveCaza = Cast<ANaveEnemigaCaza>(NuevaNaveCaza6))
				{
					NaveCaza->NewProjectile = AProjectileMetralleta::StaticClass();
				}
			}
		}
	}

	dificultad = 3;
}

void AEnemigasFacade::campamento()
{
	if (!bCampamentoCreado && cantidadNavesEnemigas == 0)
	{
		DirectorAliadas = GetWorld()->SpawnActor<ADirectorAliadas>(ADirectorAliadas::StaticClass());
		AliadosBaseBuilder = GetWorld()->SpawnActor<AAliadosBaseBuilder>(AAliadosBaseBuilder::StaticClass());
		DirectorAliadas->SetAliadosBuilder(AliadosBaseBuilder);
		Campamento = DirectorAliadas->GetAliados();
		//		GetWorldTimerManager().ClearTimer(TimerHandle_Campamento);

				// Marca el campamento como creado
		bCampamentoCreado = true;
	}
}

void AEnemigasFacade::nivel()
{
	if (cantidadNavesEnemigas > 0)
	{
		DirectorAliadas = GetWorld()->SpawnActor<ADirectorAliadas>(ADirectorAliadas::StaticClass());
		AliadosCampoBuilder = GetWorld()->SpawnActor<AAliadosCampoBuilder>(AAliadosCampoBuilder::StaticClass());
		DirectorAliadas->SetAliadosBuilder(AliadosCampoBuilder);
		Nivel = DirectorAliadas->GetAliados();
		//		GetWorldTimerManager().ClearTimer(TimerHandle_Nivel);
	}
}

