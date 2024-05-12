#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AliadosBuilder.h"
#include "Aliados.h"

#include "AliadosCampoBuilder.generated.h"

class AAliados;


UCLASS()
class GALAGA_USFX_API AAliadosCampoBuilder : public AActor, public IAliadosBuilder
{
	
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAliadosCampoBuilder();

protected:
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime);
	ANaveEnfermeraSimple* BuildEnfermeraSimple() override;
	ANaveEnfermeraTotal* BuildEnfermeraTotal() override;
	ANaveArmeriaDoble* BuildArmeriaDoble() override;
	ANaveArmeriaBomerang* BuildArmeriaBomerang() override;
	class AAliados* Aliados;

	class ANaveArmeriaDoble* NaveArmeria;
	class ANaveEnfermeraSimple* NaveEnfermera;
	class ANaveArmeriaBomerang* NaveArmeria2;
	class ANaveEnfermeraTotal* NaveEnfermera2;


	//FORCEINLINE void SetDestruir(bool _destruir) { destruir = _destruir; }
};
