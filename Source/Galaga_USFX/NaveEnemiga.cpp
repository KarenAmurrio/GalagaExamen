#include "NaveEnemiga.h"


ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;
	velocidad = 1;
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


