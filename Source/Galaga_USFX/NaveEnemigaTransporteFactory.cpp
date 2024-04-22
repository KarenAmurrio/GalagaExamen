// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteFactory.h"
#include "NaveEnemigaTransporte.h"

ANaveEnemiga* ANaveEnemigaTransporteFactory::DesplegarNave(FString tipo, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
        if (tipo == "Transporte")
        {
            return World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
        }
        else
        {
            return nullptr;
        }

}
