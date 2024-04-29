// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAliadaEnfermeraBuilder.h"

// Sets default values
ANaveAliadaEnfermeraBuilder::ANaveAliadaEnfermeraBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANaveAliadaEnfermeraBuilder::BuiltMotor()
{
	NaveAliada->SetMotor(1);
}

void ANaveAliadaEnfermeraBuilder::BuiltArma()
{
}

void ANaveAliadaEnfermeraBuilder::BuiltEstructura()
{
	NaveAliada->MeshAliada->SetStaticMesh(Enfermera);
	//NaveAliada->MeshAliada->SetStaticMesh(Taller);
}

void ANaveAliadaEnfermeraBuilder::BuiltMejora()
{
	NaveAliada->SetMejora(1);
}

ANaveAliada* ANaveAliadaEnfermeraBuilder::GetNaveAliada()
{
	return nullptr;
}

// Called when the game starts or when spawned
void ANaveAliadaEnfermeraBuilder::BeginPlay()
{
	Super::BeginPlay();
	FVector SpawnLocation = FVector(-100.0f, -10.0f, 219.0f);
	NaveAliada = GetWorld()->SpawnActor<ANaveAliada>(ANaveAliada::StaticClass(),SpawnLocation, FRotator::ZeroRotator);
	//Attach it to the Builder (this)
	NaveAliada->AttachToActor(this,FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void ANaveAliadaEnfermeraBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

