// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaPublisher.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaPublisher : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANaveEnemigaPublisher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
	//Observer

	UPROPERTY()
	TArray<class ANaveEnemiga*> Suscriptores;

	void Suscribir(class ANaveEnemiga* Suscriptor);
	void Desuscribir(class ANaveEnemiga* Suscriptor);
	void NotificarSuscriptores();




	//Funciones de la nave
	void recibirDanio();
	class AEnemigasFacade* EnemigasFacade;
};

