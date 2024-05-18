// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileBomerang.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS(config = Game)
class GALAGA_USFX_API AProjectileBomerang : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;
	UPROPERTY(EditAnywhere, Category = "Colision_Bomerang")
	class UCapsuleComponent* BomerangCollision;
public:	
	// Sets default values for this actor's properties
	AProjectileBomerang();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void NotifyActorBeginOverlap(AActor* OtherActor);

private:
	class AGalaga_USFXPawn* Jugador;


	// Posici�n desde donde fue lanzado el proyectil
	FVector PosicionRetorno;
	
	// Distancia m�xima antes de que el proyectil regrese al jugador
	float MaxDistance = 1000.0f; 

	// Velocidad del proyectil
	float Speed = 1000.0f;

	// Distancia recorrida por el proyectil
	float TraveledDistance = 0.0f;

	// Flag para indicar si el proyectil est� regresando
	bool Retorno = false;

	// Funci�n para mover el proyectil hacia el jugador y manejar el retorno
	void MoveAndReturnTowardsPlayer();

	// Funci�n para hacer que el proyectil regrese a su posici�n inicial
	void ReturnToPawn();

	int enemigos;
	int puntaje;
};
