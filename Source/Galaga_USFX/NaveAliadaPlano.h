// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveAliadaPlano.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNaveAliadaPlano : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API INaveAliadaPlano
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetEscudo(int tipoEscudo) = 0;
	virtual void SetMotor(int tipoMotor) = 0;
	virtual void SetArma(int cantidadBalas) = 0;
	virtual void SetEstructura(UStaticMeshComponent* mesh) = 0;
	virtual void SetMejora(int tipoMejora) = 0;
	virtual void SetMovimiento(int motor)= 0;
};
