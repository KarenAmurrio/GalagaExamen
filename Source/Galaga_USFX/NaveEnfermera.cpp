// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnfermera.h"
#include "Galaga_USFXPawn.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ANaveEnfermera::ANaveEnfermera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
	NaveMalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveMalla->SetStaticMesh(ShipMesh.Object);
	NaveMalla->SetupAttachment(RootComponent);
	RootComponent = NaveMalla;


}

// Called when the game starts or when spawned
void ANaveEnfermera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnfermera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnfermera::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

