// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileEnemigo.h"
#include "ProjectileMetralleta.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class GALAGA_USFX_API AProjectileMetralleta : public AProjectileEnemigo
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	AProjectileMetralleta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	float velocidad;
	float danio;
	UStaticMeshComponent* ProyectilEnemyMesh;
	


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover() override;


};
