// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnfermeraSimple.h"
#include "Components/CapsuleComponent.h"

ANaveEnfermeraSimple::ANaveEnfermeraSimple()
{
	ColisionNaveAliada = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ColisionNaveAliada"));
	ColisionNaveAliada->SetupAttachment(RootComponent);
	ColisionNaveAliada->InitCapsuleSize(50.f, 100.f);
}

void ANaveEnfermeraSimple::curar(AGalaga_USFXPawn* Jugador)
{
	if(Jugador->GetSalud() < 100)
		Jugador->ModificarSalud(10);
	else
		Jugador->ModificarSalud(0);
}

void ANaveEnfermeraSimple::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(OtherActor);
	if (Jugador)
	{
		curar(Jugador);
	}
}
