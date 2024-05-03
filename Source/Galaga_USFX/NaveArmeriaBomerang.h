// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveArmeria.h"
#include "NaveArmeriaBomerang.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveArmeriaBomerang : public ANaveArmeria
{
	GENERATED_BODY()
	class UCapsuleComponent* ColisionNaveAliada;

public:
	int precio = -200;
	bool comprado = false;
	ANaveArmeriaBomerang();
	virtual void venderArmas(int precio, AGalaga_USFXPawn* Jugador) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
