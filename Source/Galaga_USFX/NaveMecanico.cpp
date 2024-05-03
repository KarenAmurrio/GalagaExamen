// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveMecanico.h"
#include "Components/CapsuleComponent.h"
#include "Galaga_USFXPawn.h"

void ANaveMecanico::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(OtherActor);
	if (Jugador)
	{
		reparar();
	}

}

// Sets default values
ANaveMecanico::ANaveMecanico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	NaveMalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveMalla->SetStaticMesh(ShipMesh.Object);
	NaveMalla->SetupAttachment(RootComponent);
	RootComponent = NaveMalla;

	ColisionNaveAliada = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ColisionNaveAliada"));
	ColisionNaveAliada->SetupAttachment(RootComponent);
	ColisionNaveAliada->InitCapsuleSize(50.f, 100.f);

}

// Called when the game starts or when spawned
void ANaveMecanico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveMecanico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveMecanico::reparar()
{
}

