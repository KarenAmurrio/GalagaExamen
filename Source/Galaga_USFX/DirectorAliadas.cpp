// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorAliadas.h"

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

void ADirectorAliadas::Construct()
{
	/*if (Builder != nullptr)
	{
		Builder->BuildEnfermera();
		Builder->BuildMecanico();
		Builder->BuildArmeria();
	}*/
	if (AliadosBuilder != nullptr)
	{
		AliadosBuilder->BuildEnfermera();
		AliadosBuilder->BuildMecanico();
		AliadosBuilder->BuildArmeria();
	}
}

void ADirectorAliadas::SetAliadosBuilder(AActor* Builder)
{
	AliadosBuilder = Cast<IAliadosBuilder>(Builder);
}

void ADirectorAliadas::GetAliados()
{
		AliadosBuilder->GetAliados();
}

//AAliados* ADirectorAliadas::Construct(IAliadosBuilder* Builder)
//{
//	if (Builder != nullptr)
//	{
//		Builder->BuildEnfermera();
//		Builder->BuildMecanico();
//		Builder->BuildArmeria();
//		return Builder->GetAliados();
//	}
//	else
//	return nullptr;
//}
//
