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

	/*EnfermeraBuilder = GetWorld()->SpawnActor<ANaveAliadaEnfermeraBuilder>(ANaveAliadaEnfermeraBuilder::StaticClass());
	ArmeriaBuilder = GetWorld()->SpawnActor<ANaveAliadaArmeriaBuilder>(ANaveAliadaArmeriaBuilder::StaticClass());
	DirectorNave = GetWorld()->SpawnActor<ADirectorNave>(ADirectorNave::StaticClass());

	DirectorNave->SetNaveAliadaBuilder(EnfermeraBuilder);
	DirectorNave->ConstruirNave();

	ANaveAliada* NaveAliada = DirectorNave->GetNaveAliada();
	NaveAliada->NaveAliadaCaracteristicas()*/;
	//FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	//FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);

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

		/*float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;


		for (int j = 0; j < 5; j++) {
				FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
				ANaveEnemiga* NuevaNaveTransporte = ANaveEnemigaTransporteFactory::DesplegarNave("Transporte", World, PosicionNaveActual, FRotator::ZeroRotator);
			
		}*/

		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);

		TiempoTranscurrido = 0;

	/*	DirectorNave = GetWorld()->SpawnActor<ADirectorNave>(ADirectorNave::StaticClass());
		EnfermeraBuilder = GetWorld()->SpawnActor<ANaveAliadaEnfermeraBuilder>(ANaveAliadaEnfermeraBuilder::StaticClass());
		DirectorNave->SetNaveAliadaBuilder(EnfermeraBuilder);
		DirectorNave->ConstruirNave();
		ArmeriaBuilder = GetWorld()->SpawnActor<ANaveAliadaArmeriaBuilder>(ANaveAliadaArmeriaBuilder::StaticClass());
		DirectorNave->SetNaveAliadaBuilder(ArmeriaBuilder);
		DirectorNave->ConstruirNave();*/



		// Verificar si todas las naves cazas han sido destruidas

		//****************************************************************************
		GetWorldTimerManager().SetTimer(TimerHandle_Campamento, this, &AGalaga_USFXGameMode::campamento, 1.0f, true);
		GetWorldTimerManager().SetTimer(TimerHandle_Nivel, this, &AGalaga_USFXGameMode::nivel, 1.0f, true);
		AliadosCampoBuilder = GetWorld()->SpawnActor<AAliadosCampoBuilder>(AAliadosCampoBuilder::StaticClass());
	}

	/*NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));*/

}

void AGalaga_USFXGameMode::campamento()
{
	if (cantidadNavesEnemigas == 0)
	{

		DirectorAliadas = GetWorld()->SpawnActor<ADirectorAliadas>(ADirectorAliadas::StaticClass());
		AliadosBaseBuilder = GetWorld()->SpawnActor<AAliadosBaseBuilder>(AAliadosBaseBuilder::StaticClass());
		DirectorAliadas->SetAliadosBuilder(AliadosBaseBuilder);
		DirectorAliadas->Construct();
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
		DirectorAliadas->Construct();
		GetWorldTimerManager().ClearTimer(TimerHandle_Nivel);
	}
	else
		AliadosCampoBuilder->destruir();
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
	//FString Message2 = FString::Printf(TEXT("Enemigos: %d"), cantidadNavesEnemigas); // Agregar el formato correcto
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Message2);
	if(cantidadNavesEnemigas==0)
		AliadosCampoBuilder->destruir();
}
