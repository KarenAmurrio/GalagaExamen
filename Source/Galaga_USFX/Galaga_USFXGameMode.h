// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"


class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveAliadaEnfermeraBuilder;
class ANaveAliadaArmeriaBuilder;
class ADirectorNave;
class AAliadosBaseBuilder;
class ADirectorAliadas;
class AAliadosCampoBuilder;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

public:
	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveAliadaEnfermeraBuilder* EnfermeraBuilder;
	ANaveAliadaArmeriaBuilder* ArmeriaBuilder;
	ADirectorNave* DirectorNave;
	AAliadosBaseBuilder* AliadosBaseBuilder;
	AAliadosCampoBuilder* AliadosCampoBuilder;
	//*******************************************************
	ADirectorAliadas* DirectorAliadas;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	int cantidadNavesEnemigas;
	int Score;
	void campamento();
	void nivel();
	FTimerHandle TimerHandle_Campamento;
	FTimerHandle TimerHandle_Nivel;
	FORCEINLINE int GetCantidadNavesEnemigas() { return cantidadNavesEnemigas; }
	FORCEINLINE int GetScore() { return Score; }

	FORCEINLINE void SetCantidadNavesEnemigas(int _cantidad) { cantidadNavesEnemigas = _cantidad; }
	FORCEINLINE void SetScore(int _score) { Score = _score; }

	class AAliados* Nivel;
	class AAliados* Campamento;

private:
	int TiempoTranscurrido;
	int cronometro;
	bool EnemigasActivas;
	bool bCampamentoCreado;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AAdaptadorExtranjero* adapter;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AGalaga_USFXPawn* jugador;

	class AEnemigasFacade* facade;
	class AArmasFacade* facadeArmas;
};



