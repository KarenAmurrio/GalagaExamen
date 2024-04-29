// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAliada.h"
#include "Galaga_USFXPawn.h"
#include "Components/CapsuleComponent.h"

void ANaveAliada::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(OtherActor);

	if (Jugador)
	{
		if (Mejora == 1)
		{
			Jugador->ModificarSalud(10);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "hola");
			
		}
		else if (Mejora == 2)
		{
			Jugador->ActivarDisparoDoble(true);
		}
		else if (Mejora == 3)
		{
			Jugador->FireRate = 0.5;
			Jugador->MoveSpeed = 1000;
		}
	}
}

// Sets default values
ANaveAliada::ANaveAliada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshAliada = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshAliada->SetupAttachment(RootComponent);
	RootComponent = MeshAliada;

	ColisionNaveAliada = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ColisionNaveAliada"));
	ColisionNaveAliada->SetupAttachment(RootComponent);
	ColisionNaveAliada->InitCapsuleSize(50.f, 100.f);

	Escudo = 0;
	Motor = 0;
	Arma = 0;
	Estructura = 0;
}

void ANaveAliada::SetEscudo(int tipoEscudo)
{
	Escudo= tipoEscudo;
}

void ANaveAliada::SetMotor(int tipoMotor)
{
	Motor = tipoMotor;
}

void ANaveAliada::SetArma(int cantidadBalas)
{
	Arma = cantidadBalas;
}

void ANaveAliada::SetEstructura(UStaticMeshComponent* _mesh)
{
	MeshAliada = _mesh;
}

void ANaveAliada::SetMejora(int tipoMejora)
{
	Mejora = tipoMejora;
}

void ANaveAliada::SetMovimiento(int motor)
{
	if (motor == 1)
	{
		Motor = 1;
		SetActorLocation(FVector(GetActorLocation().X - 1.0, GetActorLocation().Y, GetActorLocation().Z));
	}
	else if(motor == 2)
	{
		Motor = 2;
		SetActorLocation(FVector(GetActorLocation().X - 0.5, GetActorLocation().Y, GetActorLocation().Z));
	}
}

void ANaveAliada::NaveAliadaCaracteristicas()
{

}

// Called when the game starts or when spawned
void ANaveAliada::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveAliada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetMovimiento(Motor);
}

