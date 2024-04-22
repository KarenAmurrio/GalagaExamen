// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaFactory.h"
#include "NaveEnemigaCazaFactory.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaFactory : public ANaveEnemigaFactory
{
	GENERATED_BODY()
	
public:
	static ANaveEnemiga* DesplegarNave(FString tipo, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);
};
