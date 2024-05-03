// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveArmeriaDoble.h"
#include "Components/CapsuleComponent.h"

ANaveArmeriaDoble::ANaveArmeriaDoble()
{
	ColisionNaveAliada = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ColisionNaveAliada"));
	ColisionNaveAliada->SetupAttachment(RootComponent);
	ColisionNaveAliada->InitCapsuleSize(50.f, 100.f);
}

void ANaveArmeriaDoble::venderArmas(int Precio, AGalaga_USFXPawn* Jugador)
{
	if(Jugador->GetDisparoDoble() == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Disparo Doble Activado");
		Jugador->ActivarDisparoDoble(true);
		Jugador->ActivarDisparoBomerang(false);
		if (comprado == false) {
			Jugador->cobrarCreditos(Precio);
			comprado = true;
		};
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Disparo Doble Descativado");
		Jugador->ActivarDisparoDoble(false);
	}
}

void ANaveArmeriaDoble::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(OtherActor);
	if (Jugador)
	{
		venderArmas(precio, Jugador);
	}
}


