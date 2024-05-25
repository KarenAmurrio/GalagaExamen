// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveNodrizaState.h"
#include "GameFramework/Actor.h"
#include "EstadoDebil.generated.h"

UCLASS()
class GALAGA_USFX_API AEstadoDebil : public AActor, public INaveNodrizaState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoDebil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EstadoOfencivo() override;
	virtual void EstadoDefensivo() override;
	virtual void EstadoDebil() override;

	virtual void SetNaveNodriza(class ANaveNodriza* NaveNodriza) override;

};
