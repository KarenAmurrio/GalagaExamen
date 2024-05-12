// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemigaTransporteFactory.h"
#include "DirectorNave.h"
#include "NaveEnemigaFactory.h"
#include "AliadosBaseBuilder.h"
#include "AliadosCampoBuilder.h"
#include "DirectorAliadas.h"
#include "Aliados.h"
#include "AdaptadorExtranjero.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	cantidadNavesEnemigas = 8;
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	FVector ubicacionInicioNavesEnemigasCaza = FVector(500.0f, 10.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 250.0f);


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
	
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 2; j++) {
				FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X + j * 200, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasCaza.Z);
				ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
			}
		}


		TiempoTranscurrido = 0;

		GetWorldTimerManager().SetTimer(TimerHandle_Campamento, this, &AGalaga_USFXGameMode::campamento, 1.0f, true);
		GetWorldTimerManager().SetTimer(TimerHandle_Nivel, this, &AGalaga_USFXGameMode::nivel, 1.0f, true);
	}


	adapter = GetWorld()->SpawnActor<AAdaptadorExtranjero>(AAdaptadorExtranjero::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
	jugador->SetBounceBall(adapter);
	jugador->lanzar();
}

void AGalaga_USFXGameMode::campamento()
{
	if (cantidadNavesEnemigas == 0)
	{

		DirectorAliadas = GetWorld()->SpawnActor<ADirectorAliadas>(ADirectorAliadas::StaticClass());
		AliadosBaseBuilder = GetWorld()->SpawnActor<AAliadosBaseBuilder>(AAliadosBaseBuilder::StaticClass());
		DirectorAliadas->SetAliadosBuilder(AliadosBaseBuilder);
		Campamento = DirectorAliadas->GetAliados();
		GetWorldTimerManager().ClearTimer(TimerHandle_Campamento);


	}
}

void AGalaga_USFXGameMode::nivel()
{
	if (cantidadNavesEnemigas > 0)
	{
		DirectorAliadas = GetWorld()->SpawnActor<ADirectorAliadas>(ADirectorAliadas::StaticClass());
		AliadosCampoBuilder = GetWorld()->SpawnActor<AAliadosCampoBuilder>(AAliadosCampoBuilder::StaticClass());
		DirectorAliadas->SetAliadosBuilder(AliadosCampoBuilder);
		Nivel = DirectorAliadas->GetAliados();
		GetWorldTimerManager().ClearTimer(TimerHandle_Nivel);
	}
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
	//FString Message2 = FString::Printf(TEXT("Enemigos: %d"), cantidadNavesEnemigas); // Agregar el formato correcto
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Message2);
	if(cantidadNavesEnemigas==0)
	{
		if (Nivel)
		{
			Nivel->destruirAliados();
		}
	}
}
