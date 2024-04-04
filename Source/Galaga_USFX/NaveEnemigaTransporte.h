// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaTransporte.generated.h"

class UstaticMeshComponent;

UCLASS()
class GALAGA_USFX_API ANaveEnemigaTransporte : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemigaTransporte;

private:

	float vida;
	float puntaje;
	float velocidad;
	float resistencia;
	float tiempoDespliegue;
	float velocidadDespliegue;
	float cantidadNavesDesplegadas;
	FString nombre;
	FVector posicion;

public:
	FORCEINLINE float GetVida() const { return vida; }
	FORCEINLINE float GetPuntaje() const { return puntaje; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetTiempoDespliegue() const { return tiempoDespliegue; }
	FORCEINLINE float GetVelocidadDespliegue() const { return velocidadDespliegue; }
	FORCEINLINE float GetCantidadNavesDesplegadas() const { return cantidadNavesDesplegadas; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }


	FORCEINLINE void SetVida(float _vida) { vida = _vida; }
	FORCEINLINE void SetPuntaje(float _puntaje) { puntaje = _puntaje; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetTiempoDespliegue(float _tiempoDespliegue) { tiempoDespliegue = _tiempoDespliegue; }
	FORCEINLINE void SetVelocidadDespliegue(float _velocidadDespliegue) { velocidadDespliegue = _velocidadDespliegue; }
	FORCEINLINE void SetCantidadNavesDesplegadas(float _cantidadNavesDesplegadas) { cantidadNavesDesplegadas = _cantidadNavesDesplegadas; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:
	// Sets default values for this actor's properties
	ANaveEnemigaTransporte();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};