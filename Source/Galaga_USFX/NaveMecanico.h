// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveMecanico.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveMecanico : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "Colision_Nave")
	class UCapsuleComponent* ColisionNaveAliada;
	void NotifyActorBeginOverlap(AActor* OtherActor);
	UStaticMeshComponent* NaveMalla;
	
public:	
	// Sets default values for this actor's properties
	ANaveMecanico();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void reparar();

};
