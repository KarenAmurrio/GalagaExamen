// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosNaveNodriza.h"
#include "EstadoDefensivo.generated.h"

UCLASS()
class GALAGA_USFX_API AEstadoDefensivo : public AActor, public IEstadosNaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoDefensivo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	class ANaveEnemigaNodriza* NaveNodriza;

	virtual void ResetFire();

	int MaxProjectile;

	int NumberFired;
	bool bCanFire;

	FVector UltimaPosicionJugador;

public:
	void SetNaveNodriza(class ANaveEnemigaNodriza* _NaveNodriza) override;
	void Disparar() override;
	void CrearEscudo() override;

private:
	void Mover(float DeltaTime) override {};
};
