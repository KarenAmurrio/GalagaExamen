// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosNaveNodriza.h"
#include "EstadoDebil.generated.h"

UCLASS()
class GALAGA_USFX_API AEstadoDebil : public AActor, public IEstadosNaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoDebil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	class ANaveEnemigaNodriza* NaveNodriza;

	float velocidad;
public:
	void SetNaveNodriza(class ANaveEnemigaNodriza* _NaveNodriza) override;
	void Mover(float DeltaTime) override;

private:
	void Disparar() override {};
	void CrearEscudo() override {};
};
