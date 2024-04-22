// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaFactory.h"
#include "NaveEnemigaTransporteFactory.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaTransporteFactory : public ANaveEnemigaFactory
{
	GENERATED_BODY()
	
public:
	static ANaveEnemiga* DesplegarNave(FString tipo, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);
};
