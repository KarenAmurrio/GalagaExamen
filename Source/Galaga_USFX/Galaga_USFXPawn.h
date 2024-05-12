// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "ProjectileBomerang.h"
#include "CoreMinimal.h"
#include "IBounce_Ball.h"
#include "GameFramework/Character.h"
#include "Galaga_USFXPawn.generated.h"

UCLASS(Blueprintable)
class AGalaga_USFXPawn : public APawn, public IIBounce_Ball
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AGalaga_USFXPawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	FVector GunOffset2;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	void NotifyActorBeginOverlap(AActor* OtherActor);
	AProjectileBomerang* CurrentBoomerang;
	void ModificarSalud(int cantidad);
	void ActivarDisparoDoble(bool disparodobleActivar);
	void ActivarDisparoBomerang(bool disparoBomerangActivar);
	void cobrarCreditos(int monto);
	FORCEINLINE int GetSalud() const { return salud; }
	FORCEINLINE bool GetDisparoDoble() const { return disparodoble; }
	FORCEINLINE int GetCreditos() const { return creditos; }
	FORCEINLINE bool GetDisparoBomerang() const { return disparoBomerang; }
	

private:
	int salud;
	bool disparodoble;
	int creditos;
	bool disparoBomerang;

public:
	void lanzar() override;
public:
	class IIBounce_Ball* bounce_Ball;

	void SetBounceBall(AActor* _Adaptador);
};

