// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Aliados.h"
#include "AliadosBuilder.h"
#include "DirectorAliadas.generated.h"

UCLASS()
class GALAGA_USFX_API ADirectorAliadas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorAliadas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	IAliadosBuilder* AliadosBuilder;
	virtual void Tick(float DeltaTime) override;
	void Construct();
	void SetAliadosBuilder(AActor* Builder);
	void GetAliados();
//	AAliados* Construct(IAliadosBuilder* Builder);
};
