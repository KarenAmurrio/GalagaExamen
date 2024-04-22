// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFactory.h"

// Sets default values
ANaveEnemigaFactory::ANaveEnemigaFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveEnemigaFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* ANaveEnemigaFactory::DesplegarNave(FString tipo, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	return nullptr;
}

