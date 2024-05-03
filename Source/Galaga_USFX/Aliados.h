// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Aliados.generated.h"

UCLASS()
class GALAGA_USFX_API AAliados : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAliados();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void setNaveEnfermera(FVector _posicionEnfermera, FVector _posicionEnfermera2);
	void setNaveMecanico(FVector _posicionMecanico, FVector _posicionMecanico2);
	void setNaveArmeria(FVector _posicionArmeria, FVector _posicionArmeria2);

private:
	FVector posicionEnfermera;
	FVector posicionMecanico;
	FVector posicionArmeria;
	FVector posicionEnfermera2;
	FVector posicionMecanico2;
	FVector posicionArmeria2;

	class ANaveArmeriaDoble* NaveArmeria;
	class ANaveEnfermeraSimple* NaveEnfermera;
	class ANaveArmeriaBomerang* NaveArmeria2;
	class ANaveEnfermeraTotal* NaveEnfermera2;
};
