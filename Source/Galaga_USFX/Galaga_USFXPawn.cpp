
#include "Galaga_USFXPawn.h"
#include "Galaga_USFXProjectile.h"
#include "ProjectileBomerang.h"
#include "Galaga_USFXGameMode.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Engine/Canvas.h"

const FName AGalaga_USFXPawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFXPawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFXPawn::FireForwardBinding("FireForward");
const FName AGalaga_USFXPawn::FireRightBinding("FireRight");

AGalaga_USFXPawn::AGalaga_USFXPawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/nave/d5f7f45338c9_space_ship__3d_asse.d5f7f45338c9_space_ship__3d_asse'"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	GunOffset2 = FVector(90.f, 90.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	disparodoble = false;
	creditos = 1000;
	
}

void AGalaga_USFXPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void AGalaga_USFXPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
}

void AGalaga_USFXPawn::FireShot(FVector FireDirection)
{
	if (bCanFire)
	{
		// If fire direction is non-zero
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
			const FVector SpawnLocation2 = GetActorLocation() + FireRotation.RotateVector(GunOffset2);

			UWorld* const World = GetWorld();

			if (World != nullptr)
			{
				// Spawn the projectile
				//World->SpawnActor<AProjectileBomerang>(SpawnLocation, FireRotation);
				if(!disparoBomerang && !disparodoble)
				World->SpawnActor<AGalaga_USFXProjectile>(SpawnLocation, FireRotation);

				if (disparodoble)
				{

					if (World != nullptr)
					{
						World->SpawnActor<AGalaga_USFXProjectile>(SpawnLocation, FireRotation);
						World->SpawnActor<AGalaga_USFXProjectile>(SpawnLocation2, FireRotation);
						//World->SpawnActor<AProjectileBomerang>(SpawnLocation2, FireRotation);
					}
				}

				if(disparoBomerang)
				{
					if (World != nullptr)
					{
						World->SpawnActor<AProjectileBomerang>(SpawnLocation2, FireRotation);
					}
				}
				// Start the shot timer
				World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFXPawn::ShotTimerExpired, FireRate);

				// Play the fire sound
				if (FireSound != nullptr)
				{
					UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
				}
			}

			// Set bCanFire to false after firing
			bCanFire = false;
		}
	}

	/*if (disparoBomerang) {
		if (FireDirection.SizeSquared() > 0.0f)
			{
				const FRotator FireRotation = FireDirection.Rotation();
				const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

				UWorld* const World = GetWorld();
				if (World != nullptr)
				{
					CurrentBoomerang = World->SpawnActor<AProjectileBomerang>(SpawnLocation, FireRotation);
					if (CurrentBoomerang != nullptr)
					{
						CurrentBoomerang->OnDestroyed.AddDynamic(this, &AGalaga_USFXPawn::OnBoomerangDestroyed);
					}
				}
		}

	}*/

}

void AGalaga_USFXPawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AGalaga_USFXPawn::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void AGalaga_USFXPawn::ModificarSalud(int cantidad)
{
	salud = salud + cantidad;
	FString Message2 = FString::Printf(TEXT("Vida: %d"), salud);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Message2);

}

void AGalaga_USFXPawn::ActivarDisparoDoble(bool disparodobleActivar)
{
	disparodoble = disparodobleActivar;
}

void AGalaga_USFXPawn::ActivarDisparoBomerang(bool disparoBomerangActivar)
{
	disparoBomerang = disparoBomerangActivar;
}

void AGalaga_USFXPawn::cobrarCreditos(int monto)
{
	creditos = creditos + monto;
	FString Message1 = FString::Printf(TEXT("Creditos: %d"), creditos);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Message1);
}

