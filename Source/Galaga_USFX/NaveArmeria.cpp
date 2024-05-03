// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveArmeria.h"
#include "Galaga_USFXPawn.h"
#include "Components/CapsuleComponent.h"

void ANaveArmeria::NotifyActorBeginOverlap(AActor* OtherActor)
{

}

// Sets default values
ANaveArmeria::ANaveArmeria()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	NaveMalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveMalla->SetStaticMesh(ShipMesh.Object);
	NaveMalla->SetupAttachment(RootComponent);
	RootComponent = NaveMalla;

}

// Called when the game starts or when spawned
void ANaveArmeria::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveArmeria::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


