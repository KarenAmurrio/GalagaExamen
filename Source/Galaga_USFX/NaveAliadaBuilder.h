// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveAliadaBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNaveAliadaBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_API INaveAliadaBuilder
{
    GENERATED_BODY()

public:
    // Funciones puras virtuales para construir la nave
    virtual void BuiltMotor() = 0;
    virtual void BuiltArma() = 0;
    virtual void BuiltEstructura() = 0;
    virtual void BuiltMejora() = 0;
    virtual class ANaveAliada* GetNaveAliada() = 0;
};
