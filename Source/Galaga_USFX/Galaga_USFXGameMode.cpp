// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemigaTransporteFactory.h"
#include "NaveEnemigaFactory.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	FVector ubicacionInicioNavesEnemigasCaza = FVector(500.0f, 10.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 250.0f);

	//FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	//FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
	//	ANaveEnemigaFactory* fabrica = World->SpawnActor<ANaveEnemigaCazaFactory>(ANaveEnemigaCazaFactory::StaticClass());
		//ANaveEnemigaFactory* fabrica2 = World->SpawnActor<ANaveEnemigaTransporteFactory>(ANaveEnemigaTransporteFactory::StaticClass());
//		ANaveEnemiga* naves;
		//ANaveEnemiga* nave;

		//nave = fabrica2->DesplegarNave("Transporte");


		//for (int i = 0; i < 5; i++) {
		//	FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasCaza.Z);
		//	ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);

		//	//TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal);
		//	TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
		//}

		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 2; j++) {
				FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasTransporte.X + j * 200, ubicacionInicioNavesEnemigasTransporte.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("Caza", World, PosicionNaveActual, FRotator::ZeroRotator);
			}
		}

		float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;


		for (int j = 0; j < 5; j++) {
				FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
				ANaveEnemiga* NuevaNaveTransporte = ANaveEnemigaTransporteFactory::DesplegarNave("Transporte", World, PosicionNaveActual, FRotator::ZeroRotator);
			
		}

		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);

		TiempoTranscurrido = 0;
	}

	/*NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));*/

}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}
}
