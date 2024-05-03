// Fill out your copyright notice in the Description page of Project Settings.


#include "AliadosCampoBuilder.h"
#include "NaveEnfermera.h"
#include "NaveMecanico.h"
#include "NaveArmeria.h"
#include "NaveEnfermeraSimple.h"
#include "NaveEnfermeraTotal.h"
#include "NaveArmeriaDoble.h"
#include "NaveArmeriaBomerang.h"

// Sets default values
AAliadosCampoBuilder::AAliadosCampoBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAliadosCampoBuilder::BeginPlay()
{
}

void AAliadosCampoBuilder::Tick(float DeltaTime)
{
	
}

void AAliadosCampoBuilder::BuildEnfermera()
{
	FVector Location = FVector(680.f, -1130.f, 219.f);
	NaveEnfermera = GetWorld()->SpawnActor<ANaveEnfermeraSimple>(Location, FRotator::ZeroRotator);
	FVector Location2 = FVector(320.f, 1576.f, 219.f);
	NaveEnfermera2 = GetWorld()->SpawnActor<ANaveEnfermeraTotal>(Location2, FRotator::ZeroRotator);


}

void AAliadosCampoBuilder::BuildMecanico()
{
}

void AAliadosCampoBuilder::BuildArmeria()
{
	FVector Location = FVector(-1360.f, -1330.f, 219.f);
	NaveArmeria = GetWorld()->SpawnActor<ANaveArmeriaDoble>(Location, FRotator::ZeroRotator);
	FVector Location2 = FVector(1130.f, 500.f, 219.f);
	NaveArmeria2 = GetWorld()->SpawnActor<ANaveArmeriaBomerang>(Location2, FRotator::ZeroRotator);

}

void AAliadosCampoBuilder::destruir()
{
	NaveEnfermera->Destroy();
	NaveEnfermera2->Destroy();
	NaveArmeria->Destroy();
	NaveArmeria2->Destroy();
}

AAliados* AAliadosCampoBuilder::GetAliados()
{
	return nullptr;
}

// Called every frame


