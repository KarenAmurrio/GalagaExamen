// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveArmeriaBomerang.h"
#include "Components/CapsuleComponent.h"

ANaveArmeriaBomerang::ANaveArmeriaBomerang()
{
	ColisionNaveAliada = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ColisionNaveAliada"));
	ColisionNaveAliada->SetupAttachment(RootComponent);
	ColisionNaveAliada->InitCapsuleSize(50.f, 100.f);
}

void ANaveArmeriaBomerang::venderArmas(int Precio, AGalaga_USFXPawn* Jugador)
{
	if (Jugador->GetDisparoBomerang() == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Disparo Bomerang Activado");
		Jugador->ActivarDisparoBomerang(true);
		Jugador->ActivarDisparoDoble(false);
		if (comprado == false) {
			Jugador->cobrarCreditos(Precio);
			comprado = true;
		};
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Disparo Bomerang Descativado");
		Jugador->ActivarDisparoBomerang(false);

	}
}

void ANaveArmeriaBomerang::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(OtherActor);
	if (Jugador)
	{
		venderArmas(precio, Jugador);
	}
}
