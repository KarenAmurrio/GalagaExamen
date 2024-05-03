// Fill out your copyright notice in the Description page of Project Settings.


#include "Aliados.h"
#include "NaveEnfermera.h"
#include "NaveMecanico.h"
#include "NaveArmeria.h"
#include "NaveEnfermeraSimple.h"
#include "NaveEnfermeraTotal.h"
#include "NaveArmeriaDoble.h"
#include "NaveArmeriaBomerang.h"

// Sets default values
AAliados::AAliados()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAliados::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAliados::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAliados::setNaveEnfermera(FVector _posicionEnfermera,FVector _posicionEnfermera2)
{
	posicionEnfermera=_posicionEnfermera;
	posicionEnfermera2=_posicionEnfermera2;
	NaveEnfermera = GetWorld()->SpawnActor<ANaveEnfermeraSimple>(posicionEnfermera, FRotator::ZeroRotator);
	NaveEnfermera2 = GetWorld()->SpawnActor<ANaveEnfermeraTotal>(posicionEnfermera2, FRotator::ZeroRotator);

}

void AAliados::setNaveMecanico(FVector _posicionMecanico, FVector _posicionMecanico2)
{
	posicionMecanico = _posicionMecanico;
	posicionMecanico2 = _posicionMecanico2;
}


void AAliados::setNaveArmeria(FVector _posicionArmeria, FVector _posicionArmeria2)
{
	posicionArmeria = _posicionArmeria;
	posicionArmeria2 = _posicionArmeria2;
	NaveArmeria = GetWorld()->SpawnActor<ANaveArmeriaDoble>(posicionArmeria, FRotator::ZeroRotator);
	NaveArmeria2 = GetWorld()->SpawnActor<ANaveArmeriaBomerang>(posicionArmeria2, FRotator::ZeroRotator);
}

