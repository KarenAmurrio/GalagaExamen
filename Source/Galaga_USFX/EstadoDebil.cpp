// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDebil.h"

// Sets default values
AEstadoDebil::AEstadoDebil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoDebil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoDebil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoDebil::EstadoOfencivo()
{
}

void AEstadoDebil::EstadoDefensivo()
{
}

void AEstadoDebil::EstadoDebil()
{
}

void AEstadoDebil::SetNaveNodriza(ANaveNodriza* NaveNodriza)
{
}

