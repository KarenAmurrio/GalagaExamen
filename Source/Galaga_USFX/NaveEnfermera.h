// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnfermera.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveEnfermera : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "Colision_Nave")
	class UCapsuleComponent* ColisionNaveAliada;
	UStaticMeshComponent* NaveMalla;

	
public:	
	// Sets default values for this actor's properties
	ANaveEnfermera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void curar(AGalaga_USFXPawn* Jugador) PURE_VIRTUAL(ANaveEnfermera::curar,);
	virtual void NotifyActorBeginOverlap(AActor* OtherActor);
};
