// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileEnemigo.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;
UCLASS()
class GALAGA_USFX_API AProjectileEnemigo : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	AProjectileEnemigo();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaProjectile;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover()PURE_VIRTUAL(AProjectileEnemigo::Mover,);

	float velocidad;
	float danio;
};
