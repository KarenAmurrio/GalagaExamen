// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "ProjectileBomerang.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	mallaNaveEnemiga->OnComponentHit.AddDynamic(this, &ANaveEnemigaCaza::FuncionDeManejoDeColision);

}

void ANaveEnemigaCaza::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	//velocidad = 5.0; //0.75

	//if (band == 1)
	//{
	//	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y + velocidad, GetActorLocation().Z));
	//	if (GetActorLocation().Y >= posicionY + 300)
	//	{
	//		band = 0;
	//	}
	//}
	//else if (band == 0)
	//{
	//	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad, GetActorLocation().Z));
	//	if (GetActorLocation().Y <= posicionY - 300)
	//	{
	//		band = 1;
	//	}

	//}

}

void ANaveEnemigaCaza::Disparar()
{
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaCaza::FuncionDeManejoDeColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{// Verificar si el objeto con el que colisionamos es una bala
	AProjectileBomerang* BomerangProjectile = Cast<AProjectileBomerang>(OtherActor);
	if (BomerangProjectile)
	{
		// Destruir la nave enemiga
		Destroy();
	}
}