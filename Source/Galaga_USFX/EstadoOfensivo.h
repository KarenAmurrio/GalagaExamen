// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosNaveNodriza.h"
#include "EstadoOfensivo.generated.h"

UCLASS()
class GALAGA_USFX_API AEstadoOfensivo : public AActor, public IEstadosNaveNodriza
{
	// Fill out your copyright notice in the Description page of Project Settings.
		GENERATED_BODY()

	public:
		// Sets default values for this actor's properties
		AEstadoOfensivo();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	public:
		// Called every frame
		virtual void Tick(float DeltaTime) override;

	public:
	/** Offset from the ships location to spawn projectiles */
		UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

		/* Flag to control firing  */
		uint32 bCanFire : 1;

		/** Handle for efficient management of ShotTimerExpired timer */
		FTimerHandle TimerHandle_ShotTimerExpired;

		float TiempoDisparo;
		TSubclassOf<class AProjectileEnemigo> NewProjectile;

		void ShotTimerExpired();
	protected:
		class ANaveEnemigaNodriza* NaveNodriza;


	public:
		void SetNaveNodriza(class ANaveEnemigaNodriza* _NaveNodriza) override;
		void Mover(float DeltaTime) override;
		void Disparar() override;

private:

	void CrearEscudo() override {};
};
