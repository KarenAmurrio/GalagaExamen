// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAliadaPlano.h"
#include "NaveAliada.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveAliada : public AActor, public INaveAliadaPlano
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category = "Colision_Nave")
    class UCapsuleComponent* ColisionNaveAliada;
    void NotifyActorBeginOverlap(AActor* OtherActor);
public:
    // Constructor por defecto
    ANaveAliada();

    // Implementación de las funciones de la interfaz INaveAliadaPlano
    void SetEscudo(int tipoEscudo);
    void SetMotor(int tipoMotor);
    void SetArma(int cantidadBalas);
    void SetEstructura(UStaticMeshComponent* _mesh);
    void SetMejora(int tipoMejora);
    void SetMovimiento(int motor);
    void NaveAliadaCaracteristicas();

public:
    // Atributos para las características de la nave
    int Escudo;
    int Motor;
    int Arma;
    int Estructura;
    int Mejora;
    UStaticMeshComponent* MeshAliada;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
