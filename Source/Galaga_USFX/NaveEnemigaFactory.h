// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaFactory.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveEnemigaFactory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaFactory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	static ANaveEnemiga* DesplegarNave(FString tipo, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);
	
};
