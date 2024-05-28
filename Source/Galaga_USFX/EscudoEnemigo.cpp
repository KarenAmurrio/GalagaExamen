// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoEnemigo.h"

// Sets default values
AEscudoEnemigo::AEscudoEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	// Create the mesh component
	MeshEscudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Escudo"));
	MeshEscudo->SetStaticMesh(ShipMesh.Object);
	MeshEscudo->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	RootComponent = MeshEscudo;

}

// Called when the game starts or when spawned
void AEscudoEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudoEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscudoEnemigo::Durabilidad()
{
	DurabilidadEscudo -= 10;
	if (DurabilidadEscudo <= 0)
	{
		Destroy();
	}
}

