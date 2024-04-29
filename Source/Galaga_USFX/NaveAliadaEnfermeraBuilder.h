
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAliada.h"
#include "NaveAliadaBuilder.h"
#include "NaveAliadaEnfermeraBuilder.generated.h"

class ANaveAliada;

UCLASS()
class GALAGA_USFX_API ANaveAliadaEnfermeraBuilder : public AActor, public INaveAliadaBuilder
{
    GENERATED_BODY()

public:
    // Constructor
    ANaveAliadaEnfermeraBuilder();

    // Implementación de los métodos virtuales de ANaveAliadaBuilder
    virtual void BuiltMotor() override;
    virtual void BuiltArma() override;
    virtual void BuiltEstructura() override;
    virtual void BuiltMejora() override;
    virtual class ANaveAliada* GetNaveAliada() override;
    class UStaticMesh* Enfermera= LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
    ANaveAliada* NaveAliada;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

};
