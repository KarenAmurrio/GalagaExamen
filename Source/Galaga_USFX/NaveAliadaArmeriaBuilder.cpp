// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAliadaArmeriaBuilder.h"

// Sets default values
ANaveAliadaArmeriaBuilder::ANaveAliadaArmeriaBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANaveAliadaArmeriaBuilder::BuiltMotor()
{
	NaveAliada->SetMotor(2);
}

void ANaveAliadaArmeriaBuilder::BuiltArma()
{
	NaveAliada->MeshAliada->SetStaticMesh(Armeria);
}

void ANaveAliadaArmeriaBuilder::BuiltEstructura()
{
	NaveAliada->SetMejora(2);
}

void ANaveAliadaArmeriaBuilder::BuiltMejora()
{
}

ANaveAliada* ANaveAliadaArmeriaBuilder::GetNaveAliada()
{
	return nullptr;
}

// Called when the game starts or when spawned
void ANaveAliadaArmeriaBuilder::BeginPlay()
{
	Super::BeginPlay();
	FVector SpawnLocation = FVector(-100.0f, -150.0f, 219.0f);
	NaveAliada = GetWorld()->SpawnActor<ANaveAliada>(ANaveAliada::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	//Attach it to the Builder (this)
	NaveAliada->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ANaveAliadaArmeriaBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

