// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDebil.h"
#include "NaveEnemigaNodriza.h"

// Sets default values
AEstadoDebil::AEstadoDebil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 0.5f;

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

void AEstadoDebil::SetNaveNodriza(ANaveEnemigaNodriza* _NaveNodriza)
{
	NaveNodriza = Cast<ANaveEnemigaNodriza>(_NaveNodriza);
	NaveNodriza->EstablecerEstados(NaveNodriza->GetEstadoDebil());
}

void AEstadoDebil::Mover(float DeltaTime)
{
	float Amplitud = 2.0f;
	float Frecuencia = 1.0f;
	float Tiempo = GetWorld()->GetTimeSeconds();  // Obtener el tiempo actual del juego

	// Obtener la ubicación actual del actor
	FVector Coordenada = NaveNodriza->GetActorLocation();

	// Calcular el desplazamiento en zigzag en el eje Y
	float ZigZagY = FMath::Sin(Tiempo * Frecuencia) * Amplitud;

	// Calcular la nueva ubicación
	FVector NewLocation = FVector(Coordenada.X - velocidad + ZigZagY * DeltaTime, Coordenada.Y + ZigZagY, Coordenada.Z);

	// Establecer la nueva ubicación del actor
	NaveNodriza->SetActorLocation(NewLocation);
}


