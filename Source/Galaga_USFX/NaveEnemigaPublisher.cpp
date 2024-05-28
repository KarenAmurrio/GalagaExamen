// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaPublisher.h"
#include "EnemigasFacade.h"
#include "EngineUtils.h"

ANaveEnemigaPublisher::ANaveEnemigaPublisher()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	vida = 30;
}

void ANaveEnemigaPublisher::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<AEnemigasFacade> It(GetWorld()); It; ++It)
	{
		EnemigasFacade = *It;
		break;  // Asumiendo que solo hay una instancia de AEnemigasFacade en el nivel
	}
}

void ANaveEnemigaPublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(EnemigasFacade->GetCantidadNavesEnemigas()==8)
	NotificarSuscriptores();
}

void ANaveEnemigaPublisher::Suscribir(ANaveEnemiga* Suscriptor)
{
	Suscriptores.Add(Suscriptor);
}

void ANaveEnemigaPublisher::Desuscribir(ANaveEnemiga* Suscriptor)
{
	Suscriptores.Remove(Suscriptor);
}

void ANaveEnemigaPublisher::NotificarSuscriptores()
{
	for(ANaveEnemiga* Suscriptor : Suscriptores)
	{
		Suscriptor->Actualizar();
	}
}

void ANaveEnemigaPublisher::recibirDanio()
{
	vida -= 10;
	if (vida <= 0)
	{
		Destroy();
	}
}
