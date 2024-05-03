// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnfermeraTotal.h"
#include "Components/CapsuleComponent.h"

ANaveEnfermeraTotal::ANaveEnfermeraTotal()
{
	ColisionNaveAliada = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ColisionNaveAliada"));
	ColisionNaveAliada->SetupAttachment(RootComponent);
	ColisionNaveAliada->InitCapsuleSize(50.f, 100.f);
}

void ANaveEnfermeraTotal::curar(AGalaga_USFXPawn* Jugador)
{
	if(Jugador->GetSalud() == 100)
	{
		return;
	}
	else{
		int total = 100 - Jugador->GetSalud();
		Jugador->ModificarSalud(total);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Tu salud esta llena");
	}
}

void ANaveEnfermeraTotal::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AGalaga_USFXPawn* Jugador = Cast<AGalaga_USFXPawn>(OtherActor);
	if (Jugador != nullptr)
	{
		curar(Jugador);
	}
}
