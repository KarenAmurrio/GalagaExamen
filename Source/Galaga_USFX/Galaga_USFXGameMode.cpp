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
#include "EnemigasFacade.h"
#include "ArmasFacade.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	cantidadNavesEnemigas = 0;
	Score = 0;
	cronometro = 0;
	EnemigasActivas = true;

	bCampamentoCreado = false;
	DificultadActual = 0;
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* World = GetWorld();
	if (World != nullptr)
	{

		TiempoTranscurrido = 0;
	}

	facadeArmas = GetWorld()->SpawnActor<AArmasFacade>(AArmasFacade::StaticClass());
	facade = GetWorld()->SpawnActor<AEnemigasFacade>(AEnemigasFacade::StaticClass());

}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	int NuevaDificultad = 0;

	if (Score < 400)
	{
		NuevaDificultad = 1;
	}
	else if (Score >= 400 && Score < 600)
	{
		NuevaDificultad = 2;
	}
	else
	{
		NuevaDificultad = 3;
	}

	if (NuevaDificultad != DificultadActual)
	{
		DificultadActual = NuevaDificultad;

		switch (DificultadActual)
		{
		case 1:
			facade->DesplegarNEFacil();
			break;
		case 2:
			facade->DesplegarNEMedio();
			break;
		case 3:
			facade->DesplegarNEAvanzado();
			break;
		}
	}

}
