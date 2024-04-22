// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaFactory.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"

ANaveEnemiga* ANaveEnemigaCazaFactory::DesplegarNave(FString tipo, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{

    if (tipo == "Caza")
    {
        return World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
    }
    else
    {
        return nullptr;
    }
}
