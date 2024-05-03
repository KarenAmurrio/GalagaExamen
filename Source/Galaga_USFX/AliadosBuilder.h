// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AliadosBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAliadosBuilder : public UInterface
{
	GENERATED_BODY()
};


class GALAGA_USFX_API IAliadosBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void BuildEnfermera() = 0;
	virtual void BuildMecanico() = 0;
	virtual void BuildArmeria() = 0;
	virtual void destruir() = 0;
	virtual class AAliados* GetAliados() = 0;

};
