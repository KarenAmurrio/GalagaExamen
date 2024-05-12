// Fill out your copyright notice in the Description page of Project Settings.


#include "AliadosBaseBuilder.h"
#include "Aliados.h"
#include "NaveEnfermera.h"
#include "NaveMecanico.h"
#include "NaveArmeria.h"
#include "NaveEnfermeraSimple.h"
#include "NaveEnfermeraTotal.h"
#include "NaveArmeriaDoble.h"
#include "NaveArmeriaBomerang.h"



// Sets default values
AAliadosBaseBuilder::AAliadosBaseBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAliadosBaseBuilder::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAliadosBaseBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnfermeraSimple* AAliadosBaseBuilder::BuildEnfermeraSimple()
{
	ANaveEnfermeraSimple* NaveEnfermeraSimple;
	FVector Location = FVector(-200.f, 600.f, 219.f);
	NaveEnfermeraSimple= GetWorld()->SpawnActor<ANaveEnfermeraSimple>(Location, FRotator::ZeroRotator);
	return NaveEnfermeraSimple;
}

ANaveEnfermeraTotal* AAliadosBaseBuilder::BuildEnfermeraTotal()
{
	ANaveEnfermeraTotal* NaveEnfermeraTotal;
	FVector Location= FVector(-200.f, 800.f, 219.f);
	NaveEnfermeraTotal= GetWorld()->SpawnActor<ANaveEnfermeraTotal>(Location, FRotator::ZeroRotator);

	return NaveEnfermeraTotal;
}

ANaveArmeriaDoble* AAliadosBaseBuilder::BuildArmeriaDoble()
{
	ANaveArmeriaDoble* NaveArmeriaDoble;
	FVector Location = FVector(20.f, -400.f, 219.f);
	NaveArmeriaDoble= GetWorld()->SpawnActor<ANaveArmeriaDoble>(Location, FRotator::ZeroRotator);
	return NaveArmeriaDoble;
}

ANaveArmeriaBomerang* AAliadosBaseBuilder::BuildArmeriaBomerang()
{
	ANaveArmeriaBomerang* NaveArmeriaBomerang;
	FVector Location = FVector(20.f, -600.f, 219.f);
	NaveArmeriaBomerang = GetWorld()->SpawnActor<ANaveArmeriaBomerang>(Location, FRotator::ZeroRotator);
	return NaveArmeriaBomerang;
}



