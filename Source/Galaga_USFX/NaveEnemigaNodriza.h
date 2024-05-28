// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

class IEstadosNaveNodriza;

UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
	
public:
	ANaveEnemigaNodriza();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	float vida;

	void RecibirDanio();

	TSubclassOf<class AProjectileEnemigo> NewProjectile;

private:

public:
	//Inicializar los estados de la nave nodriza
	void InicializarEstadosNaveNodriza();

	//Declaramos los estados de la nave nodriza
	IEstadosNaveNodriza* EstadoDefensivo;
	IEstadosNaveNodriza* EstadoOfensivo;
	IEstadosNaveNodriza* EstadoDebil;
	IEstadosNaveNodriza* Estado;

	//Funciones para cambiar de estado
	FORCEINLINE void EstablecerEstados(IEstadosNaveNodriza* _Estado);

	virtual void Mover(float DeltaTime) override ;
	virtual void Disparar();
	void CrearEscudo();

	//Funciones para obtener los estados
	FORCEINLINE IEstadosNaveNodriza* GetEstado();
	FORCEINLINE IEstadosNaveNodriza* GetEstadoDefensivo();
	FORCEINLINE IEstadosNaveNodriza* GetEstadoOfensivo();
	FORCEINLINE IEstadosNaveNodriza* GetEstadoDebil();
};
