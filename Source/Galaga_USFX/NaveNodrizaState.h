// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveNodrizaState.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNaveNodrizaState : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_USFX_API INaveNodrizaState
{
	GENERATED_BODY()

public:

	virtual void EstadoOfencivo() = 0;
	virtual void EstadoDefensivo() = 0;
	virtual void EstadoDebil() = 0;

	virtual void SetNaveNodriza(class ANaveNodriza* NaveNodriza) = 0;
};
