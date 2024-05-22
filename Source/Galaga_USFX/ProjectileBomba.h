// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileEnemigo.h"
#include "ProjectileBomba.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AProjectileBomba : public AProjectileEnemigo
{
	GENERATED_BODY()
	
public:
	AProjectileBomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	float velocidad;
	UStaticMeshComponent* ProyectilEnemyMesh;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover()override;
};
