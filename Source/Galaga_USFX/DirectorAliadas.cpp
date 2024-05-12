// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorAliadas.h"
#include "Aliados.h"

// Sets default values
ADirectorAliadas::ADirectorAliadas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorAliadas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorAliadas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorAliadas::SetAliadosBuilder(AActor* Builder)
{
	AliadosBuilder = Cast<IAliadosBuilder>(Builder);
}
AAliados* ADirectorAliadas::GetAliados()
{
	AAliados* Aliados;
	Aliados=GetWorld()->SpawnActor<AAliados>(AAliados::StaticClass());
	Aliados->NaveEnfermeraSimple = AliadosBuilder->BuildEnfermeraSimple();
	Aliados->NaveEnfermeraTotal = AliadosBuilder->BuildEnfermeraTotal();
	Aliados->NaveArmeriaDoble = AliadosBuilder->BuildArmeriaDoble();
	Aliados->NaveArmeriaBomerang = AliadosBuilder->BuildArmeriaBomerang();
	return Aliados;
}

