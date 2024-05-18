// Copyright Epic Games, Inc. All Rights Reserve

#include "Galaga_USFXProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/CapsuleComponent.h"
#include "NaveEnemigaCaza.h"
#include "Galaga_USFXGameMode.h"


AGalaga_USFXProjectile::AGalaga_USFXProjectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalaga_USFXProjectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

	BomerangCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Colision_Bomerang"));
	BomerangCollision->SetupAttachment(RootComponent);
	BomerangCollision->InitCapsuleSize(50.f, 100.f);

}

void AGalaga_USFXProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}

void AGalaga_USFXProjectile::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::AActor::NotifyActorBeginOverlap(OtherActor);


	ANaveEnemigaCaza* EnemyShip = Cast<ANaveEnemigaCaza>(OtherActor);
	AGalaga_USFXGameMode* GameMode = Cast<AGalaga_USFXGameMode>(GetWorld()->GetAuthGameMode());

	if (EnemyShip)
	{
		EnemyShip->Destroy();
		enemigos = GameMode->GetCantidadNavesEnemigas();
		enemigos--;
		GameMode->SetCantidadNavesEnemigas(enemigos);
		puntaje = GameMode->GetScore();
		puntaje += 10;
		GameMode->SetScore(puntaje);

		FString mensaje = FString::Printf(TEXT("Tu Puntaje es: %d"), puntaje);

		// Utilizar una clave constante para asegurar que el mensaje anterior se reemplace
		const int32 MessageKey = 0;  // Puedes elegir cualquier número que desees para el MessageKey

		// Imprimir el mensaje en pantalla, reemplazando cualquier mensaje anterior con la misma clave
		GEngine->AddOnScreenDebugMessage(MessageKey, 5.f, FColor::Green, mensaje);
	}
}
