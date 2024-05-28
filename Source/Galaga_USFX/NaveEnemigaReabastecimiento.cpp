// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"
#include "EnemigasFacade.h"

#include "EngineUtils.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	vida = 10;
}

void ANaveEnemigaReabastecimiento::ReabastecerNaves()
{

}

void ANaveEnemigaReabastecimiento::ReabastecerVida()
{
	
}

void ANaveEnemigaReabastecimiento::Matate()
{
	vida -= 5;
	if (vida <= 0)
	{
		Destroy();
	}
}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

