// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBounce_Ball.h"
#include "AdaptadorExtranjero.generated.h"

UCLASS()
class GALAGA_USFX_API AAdaptadorExtranjero : public AActor, public IIBounce_Ball
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdaptadorExtranjero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	class ABall* Ball;
	void lanzar() override;
};
