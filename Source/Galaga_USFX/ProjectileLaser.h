// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileEnemigo.h"
#include "ProjectileLaser.generated.h"

UCLASS()
class GALAGA_USFX_API AProjectileLaser : public AProjectileEnemigo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileLaser();

	float velocidad;
	float danio;
	UStaticMeshComponent* ProyectilEnemyMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Mover();


};
