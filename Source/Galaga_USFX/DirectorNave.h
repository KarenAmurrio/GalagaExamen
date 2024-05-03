// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectorNave.generated.h"

class ANaveAliada;

UCLASS()
class GALAGA_USFX_API ADirectorNave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorNave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirNave();
	//Set the Builder Actor
	void SetNaveAliadaBuilder(AActor* Builder);
	//Get the Lodging of the Builder
	ANaveAliada* GetNaveAliada();

};
