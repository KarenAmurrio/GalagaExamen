// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBomerang.h"
#include "Galaga_USFXPawn.h"
#include "Galaga_USFXGameMode.h"
#include "NaveEnemigaCaza.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
// Sets default values
AProjectileBomerang::AProjectileBomerang()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

    // Configura el componente de malla del proyectil
    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
    ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
    ProjectileMesh->SetupAttachment(RootComponent);
    ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
    ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectileBomerang::OnHit);    // Configura la función de manejo de colisiones
    RootComponent = ProjectileMesh;

    // Permite el tick de este actor
    PrimaryActorTick.bCanEverTick = true;

    BomerangCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Colision_Bomerang"));
    BomerangCollision->SetupAttachment(RootComponent);
    BomerangCollision->InitCapsuleSize(50.f, 100.f);
}


// Called when the game starts or when spawned
void AProjectileBomerang::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProjectileBomerang::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    MoveAndReturnTowardsPlayer();
    Jugador = Cast<AGalaga_USFXPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
    PosicionRetorno = Jugador->GetActorLocation();

}

void AProjectileBomerang::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::AActor::NotifyActorBeginOverlap(OtherActor);


    ANaveEnemigaCaza* EnemyShip = Cast<ANaveEnemigaCaza>(OtherActor);
    if (EnemyShip)
    {
        EnemyShip->Destroy();

    }

}

void AProjectileBomerang::MoveAndReturnTowardsPlayer()
{
    // Si no está regresando, mueve el proyectil hacia el jugador
    if (!Retorno && Jugador)
    {
        FVector NewLocation = GetActorLocation() + GetActorForwardVector() * Speed * GetWorld()->GetDeltaSeconds();

        SetActorLocation(NewLocation);

        // Actualiza la distancia recorrida
        TraveledDistance += Speed * GetWorld()->GetDeltaSeconds();

        // Si ha recorrido la distancia máxima, activa el retorno
        if (TraveledDistance >= MaxDistance)
        {
            Retorno = true;
        }
    }
    // Si está regresando, haz que el proyectil vuelva a su posición inicial
    else
    {
        ReturnToPawn();
    }
}

void  AProjectileBomerang::ReturnToPawn()
{
    // Calcula la dirección hacia la posición inicial
    FVector Direction = (PosicionRetorno - GetActorLocation()).GetSafeNormal();

    // Mueve el proyectil en la dirección de la posición inicial
    SetActorLocation(GetActorLocation() + Direction * Speed * GetWorld()->GetDeltaSeconds());

}

void AProjectileBomerang::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}