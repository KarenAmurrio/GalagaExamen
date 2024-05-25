// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "EnemigasFacade.generated.h"

class AAliadosBaseBuilder;
class ADirectorAliadas;
class AAliadosCampoBuilder;

UCLASS()
class GALAGA_USFX_API AEnemigasFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigasFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DesplegarNEFacil();
	void DesplegarNEMedio();
	void DesplegarNEAvanzado();

private:
	int NEI;
	int NEJ;
	int cantidadNavesEnemigas;

public:
	FORCEINLINE int GetCantidadNavesEnemigas() { return cantidadNavesEnemigas; }

	FORCEINLINE void SetCantidadNavesEnemigas(int _cantidad) { cantidadNavesEnemigas = _cantidad; }

	int GetNEI() { return NEI; }
	int GetNEJ() { return NEJ; }

	void SetNEI(int _NEI) { NEI = _NEI; }
	void SetNEJ(int _NEJ) { NEJ = _NEJ; }

	bool bCampamentoCreado;
	int TiempoTranscurrido;
	int cronometro;
	bool EnemigasActivas;
	int dificultad;

	AAliadosBaseBuilder* AliadosBaseBuilder;
	AAliadosCampoBuilder* AliadosCampoBuilder;
	ADirectorAliadas* DirectorAliadas;

	class AAliados* Nivel;
	class AAliados* Campamento;

	void campamento();
	void nivel();
};
