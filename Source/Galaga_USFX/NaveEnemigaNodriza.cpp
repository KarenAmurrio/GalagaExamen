// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"
#include "EstadosNaveNodriza.h"
#include "EstadoDefensivo.h"
#include "EstadoOfensivo.h"
#include "EstadoDebil.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    GetActorRelativeScale3D();
    SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
    vida = 200;
}

void ANaveEnemigaNodriza::BeginPlay()
{
    Super::BeginPlay();
    EstadoDefensivo = GetWorld()->SpawnActor<AEstadoDefensivo>(FVector::ZeroVector, FRotator::ZeroRotator);
    EstadoOfensivo = GetWorld()->SpawnActor<AEstadoOfensivo>(FVector::ZeroVector, FRotator::ZeroRotator);
    EstadoDebil = GetWorld()->SpawnActor<AEstadoDebil>(FVector::ZeroVector, FRotator::ZeroRotator);

    InicializarEstadosNaveNodriza();
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Disparar();
    Mover(DeltaTime);
}

void ANaveEnemigaNodriza::RecibirDanio()
{
    vida -= 25;
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Vida: " + FString::SanitizeFloat(vida)));
    if (vida <= 0)
    {
        Destroy();
    }
    InicializarEstadosNaveNodriza();
}

void ANaveEnemigaNodriza::InicializarEstadosNaveNodriza()
{
    if (vida >= 100)
    {
        EstadoDefensivo->SetNaveNodriza(this);
        EstablecerEstados(EstadoDefensivo);
        CrearEscudo();
    }
    else if (vida >= 50 && vida < 100)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NuevoEstado"));
        EstadoOfensivo->SetNaveNodriza(this);
        EstablecerEstados(EstadoOfensivo);
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NuevoEstado2"));
        EstadoDebil->SetNaveNodriza(this);
        EstablecerEstados(EstadoDebil);

    }
}

void ANaveEnemigaNodriza::EstablecerEstados(IEstadosNaveNodriza* _Estado)
{
    	Estado = _Estado;
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
	Estado->Mover(DeltaTime);
}

void ANaveEnemigaNodriza::Disparar()
{
	Estado->Disparar();
}

void ANaveEnemigaNodriza::CrearEscudo()
{
	Estado->CrearEscudo();
}

IEstadosNaveNodriza* ANaveEnemigaNodriza::GetEstado()
{
    return Estado;
}

IEstadosNaveNodriza* ANaveEnemigaNodriza::GetEstadoDefensivo()
{
    return EstadoDefensivo;
}

IEstadosNaveNodriza* ANaveEnemigaNodriza::GetEstadoOfensivo()
{
    return EstadoOfensivo;
}

IEstadosNaveNodriza* ANaveEnemigaNodriza::GetEstadoDebil()
{
    return EstadoDebil;
}
