// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnfermera.h"
#include "NaveEnfermeraTotal.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveEnfermeraTotal : public ANaveEnfermera
{
	GENERATED_BODY()
	class UCapsuleComponent* ColisionNaveAliada;
	
public:
	ANaveEnfermeraTotal();
	virtual void curar(AGalaga_USFXPawn* Jugador) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
