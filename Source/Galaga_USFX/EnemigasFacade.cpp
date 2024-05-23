// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigasFacade.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemigaTransporteFactory.h"

// Sets default values
AEnemigasFacade::AEnemigasFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NEI = 4;
	NEJ = 2;
	cantidadNavesEnemigas = NEI * NEJ;
}

// Called when the game starts or when spawned
void AEnemigasFacade::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AEnemigasFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,FString::Printf(TEXT("Enemigos %d"), cantidadNavesEnemigas));

}

void AEnemigasFacade::DesplegarNEFacil()
{

		UWorld* World = GetWorld();
		if (World != nullptr)
		{
			for (int i = 0; i < NEI; i++) {
				for (int j = 0; j < NEJ; j++) {
					FVector PosicionNaveActual = FVector(500.0f + j * 200, 10.0f + i * 300, 200.0f);
					ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaCazaFactory::DesplegarNave("CazaComun", World, PosicionNaveActual, FRotator::ZeroRotator);
				}
			}
		}
		cantidadNavesEnemigas = NEI * NEJ;
}

void AEnemigasFacade::DesplegarNEMedio()
{
}

void AEnemigasFacade::DesplegarNEAvanzado()
{
}

