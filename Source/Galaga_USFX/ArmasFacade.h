// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArmasFacade.generated.h"



UCLASS()
class GALAGA_USFX_API AArmasFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmasFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Metralleta();
	void Bomba();
	void Laser();
	void Basica();
	void Boomerang();
	void Doble();
	void AsignarArma(int arma);



};
