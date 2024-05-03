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
	Aliados = GetWorld()->SpawnActor<AAliados>(AAliados::StaticClass());
}

// Called every frame
void AAliadosBaseBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAliadosBaseBuilder::BuildEnfermera()
{
	FVector Location = FVector(-200.f, 600.f, 219.f);
	FVector Location2 = FVector(-200.f, 800.f, 219.f);
	Aliados->setNaveEnfermera(Location,Location2);
	/*FVector Location = FVector(-200.f, 600.f, 219.f);
	NaveEnfermera = GetWorld()->SpawnActor<ANaveEnfermeraSimple>(Location, FRotator::ZeroRotator);
	FVector Location2 = FVector(-200.f, 800.f, 219.f);
	NaveEnfermera2 = GetWorld()->SpawnActor<ANaveEnfermeraTotal>(Location2, FRotator::ZeroRotator);*/
}

void AAliadosBaseBuilder::BuildMecanico()
{
	FVector Location = FVector(20.f, -200.f, 219.f);
//	ANaveMecanico* NaveMecanico = GetWorld()->SpawnActor<ANaveMecanico>(Location, FRotator::ZeroRotator);
}

void AAliadosBaseBuilder::BuildArmeria()
{
	FVector Location = FVector(20.f, -400.f, 219.f);
	FVector Location2 = FVector(20.f, -600.f, 219.f);
	Aliados->setNaveArmeria(Location,Location2);
	//FVector Location = FVector(20.f, -400.f, 219.f);
	//NaveArmeria = GetWorld()->SpawnActor<ANaveArmeriaDoble>(Location, FRotator::ZeroRotator);
	//FVector Location2 = FVector(20.f, -600.f, 219.f);
	//NaveArmeria2 = GetWorld()->SpawnActor<ANaveArmeriaBomerang>(Location2, FRotator::ZeroRotator);
}

void AAliadosBaseBuilder::destruir()
{
	NaveEnfermera->Destroy();
	NaveEnfermera2->Destroy();
	NaveArmeria->Destroy();
	NaveArmeria2->Destroy();
}

AAliados* AAliadosBaseBuilder::GetAliados()
{
	return Aliados;
}


