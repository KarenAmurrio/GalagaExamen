
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"


UCLASS(abstract)
class GALAGA_USFX_API ANaveEnemiga : public AActor

{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected:

	float velocidad;
	float resistencia; //Numero de disparos que puede recibir antes de ser destruido
	FVector posicion;


	float FireRate;

public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }


	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }



	//FORCEINLINE AProjectileEnemigo* GetProjectile() const { return NewProjectile; }
	//FORCEINLINE void SetProjectile(AProjectileEnemigo* Projectile) { NewProjectile = Projectile; }

	FORCEINLINE float GetFireRate() const { return FireRate; }
	FORCEINLINE void SetFireRate(float _FireRate) { FireRate = _FireRate; }

//	class AProjectileEnemigo* NewProjectile;
	//TSubclassOf<class AProjectileEnemigo> NewProjectile;
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	protected:
	//virtual void Mover() = 0;
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );
};
