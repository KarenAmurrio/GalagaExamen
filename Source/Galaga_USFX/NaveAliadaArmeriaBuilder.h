// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAliada.h"
#include "NaveAliadaBuilder.h"
#include "NaveAliadaArmeriaBuilder.generated.h"

class ANaveAliada;

UCLASS()
class GALAGA_USFX_API ANaveAliadaArmeriaBuilder : public AActor, public INaveAliadaBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveAliadaArmeriaBuilder();

	virtual void BuiltMotor() override;
	virtual void BuiltArma() override;
	virtual void BuiltEstructura() override;
	virtual void BuiltMejora() override;
	virtual class ANaveAliada* GetNaveAliada() override;
	class UStaticMesh* Armeria = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	ANaveAliada* NaveAliada;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
