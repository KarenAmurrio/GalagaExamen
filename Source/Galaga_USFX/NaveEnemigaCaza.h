// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;
	float velocidad;
	int band = 0;
	float posicionY;
	bool bCanFire;


public:

	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	void NotifyActorBeginOverlap(AActor* OtherActor);
	void ShotTimerExpired();
	FTimerHandle TimerHandle_ShotTimerExpired;

	FORCEINLINE float GetFireRate() const { return FireRate; }
	FORCEINLINE void SetFireRate(float _FireRate) { FireRate = _FireRate; }

	//FORCEINLINE AProjectileEnemigo* GetProjectile() const { return NewProjectile; }
	//FORCEINLINE void SetProjectile(AProjectileEnemigo* Projectile) { NewProjectile = Projectile; }

    TSubclassOf<class AProjectileEnemigo> NewProjectile;


protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void FuncionDeManejoDeColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};
