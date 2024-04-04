// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaCaza.generated.h"

class UStaticMeshComponent;

UCLASS()

class GALAGA_USFX_API ANaveEnemigaCaza : public AActor
{
	GENERATED_BODY()


public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemigaCaza;
private:
	float velocidad;
	float velocidadDisparo;
	float resistencia;
	float danoProducido;
	float experiencia;
	float energia;
	FString nombre;
	float tiempoDisparo;
	FVector posicion;
public:

	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetVelocidadDisparo() const { return velocidadDisparo; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetExperiencia() const { return resistencia; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetVelocidadDisparo(float _velocidadDisparo) { velocidadDisparo = _velocidadDisparo; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

public:
	// Sets default values for this actor's properties
	ANaveEnemigaCaza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
};
// conoce  el comando de laq posicios del os algoritomos 