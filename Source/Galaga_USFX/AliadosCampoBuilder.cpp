// Fill out your copyright notice in the Description page of Project Settings.


#include "AliadosCampoBuilder.h"
#include "Aliados.h"
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
	Super::BeginPlay();
	Aliados = GetWorld()->SpawnActor<AAliados>(AAliados::StaticClass());
}

void AAliadosCampoBuilder::Tick(float DeltaTime)
{
	
}

ANaveEnfermeraSimple* AAliadosCampoBuilder::BuildEnfermeraSimple()
{
	ANaveEnfermeraSimple* NaveEnfermeraSimple;
	FVector Location = FVector(680.f, -1130.f, 219.f);
	NaveEnfermeraSimple = GetWorld()->SpawnActor<ANaveEnfermeraSimple>(Location, FRotator::ZeroRotator);
	return NaveEnfermeraSimple;
}

ANaveEnfermeraTotal* AAliadosCampoBuilder::BuildEnfermeraTotal()
{
	ANaveEnfermeraTotal* NaveEnfermeraTotal;
	FVector Location = FVector(320.f, 1576.f, 219.f);
	NaveEnfermeraTotal = GetWorld()->SpawnActor<ANaveEnfermeraTotal>(Location, FRotator::ZeroRotator);

	return NaveEnfermeraTotal;
}

ANaveArmeriaDoble* AAliadosCampoBuilder::BuildArmeriaDoble()
{
	ANaveArmeriaDoble* NaveArmeriaDoble;
	FVector Location = FVector(-1360.f, -1330.f, 219.f);
	NaveArmeriaDoble = GetWorld()->SpawnActor<ANaveArmeriaDoble>(Location, FRotator::ZeroRotator);
	return NaveArmeriaDoble;
}

ANaveArmeriaBomerang* AAliadosCampoBuilder::BuildArmeriaBomerang()
{
	ANaveArmeriaBomerang* NaveArmeriaBomerang;
	FVector Location = FVector(1130.f, 500.f, 219.f);
	NaveArmeriaBomerang = GetWorld()->SpawnActor<ANaveArmeriaBomerang>(Location, FRotator::ZeroRotator);
	return NaveArmeriaBomerang;
}



