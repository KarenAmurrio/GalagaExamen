
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Aliados.h"
#include "AliadosBuilder.h"
#include "AliadosBaseBuilder.generated.h"

UCLASS()
class GALAGA_USFX_API AAliadosBaseBuilder : public AActor, public IAliadosBuilder
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AAliadosBaseBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	ANaveEnfermeraSimple* BuildEnfermeraSimple() override;
	ANaveEnfermeraTotal* BuildEnfermeraTotal() override;
	ANaveArmeriaDoble* BuildArmeriaDoble() override;
	ANaveArmeriaBomerang* BuildArmeriaBomerang() override;
	class AAliados* Aliados;

	class ANaveArmeriaDoble* NaveArmeria;
	class ANaveEnfermeraSimple* NaveEnfermera;
	class ANaveArmeriaBomerang* NaveArmeria2;
	class ANaveEnfermeraTotal* NaveEnfermera2;

};
