// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveArmeria.h"
#include "NaveArmeriaDoble.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveArmeriaDoble : public ANaveArmeria
{
	GENERATED_BODY()
	
	class UCapsuleComponent* ColisionNaveAliada;

public:
	int precio = -100;
	bool comprado=false;
	ANaveArmeriaDoble();
	virtual void venderArmas(int precio, AGalaga_USFXPawn* Jugador) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
