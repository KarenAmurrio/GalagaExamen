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

//		GetWorldTimerManager().SetTimer(TimerHandle_Campamento, this, &AGalaga_USFXGameMode::campamento, 1.0f, true);
//		GetWorldTimerManager().SetTimer(TimerHandle_Nivel, this, &AGalaga_USFXGameMode::nivel, 1.0f, true);
	}

	facadeArmas = GetWorld()->SpawnActor<AArmasFacade>(AArmasFacade::StaticClass());
	facade = GetWorld()->SpawnActor<AEnemigasFacade>(AEnemigasFacade::StaticClass());

	if (Score <=1000)
	{
		facade->DesplegarNEFacil();
		//facadeArmas->Metralleta();
		//facadeArmas->Laser();
		//facadeArmas->Bomba();
	}
	else if (Score > 1000 && Score <= 2000)
	{
		facade->DesplegarNEMedio();
		/*facadeArmas->Metralleta();
		facadeArmas->Laser();*/
	}
	else
	{
		facade->DesplegarNEAvanzado();
		//facadeArmas->Metralleta();
		//facadeArmas->Laser();
		//facadeArmas->Bomba();
	}
}

void AGalaga_USFXGameMode::campamento()
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

void AGalaga_USFXGameMode::nivel()
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

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	cantidadNavesEnemigas = facade->GetCantidadNavesEnemigas();
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

	if ((cronometro + 500) == TiempoTranscurrido)
	{
		cronometro=0;
		TiempoTranscurrido = 0;
		if (Campamento)
		{
			Campamento->destruirAliados();
			Campamento->Destroy();
		}

		facade->SetNEI(facade->GetNEI()+2);
		facade->SetNEJ(facade->GetNEJ()+2);
		//cantidadNavesEnemigas = facade->GetNEI()*facade->GetNEJ();
		//cantidadNavesEnemigas = 1;
		//EnemigasActivas = true;
		facade->DesplegarNEFacil();
		EnemigasActivas = true;
		bCampamentoCreado = false;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Enemigos %d"), cantidadNavesEnemigas));
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Enemigos %d"), TiempoTranscurrido));
}
