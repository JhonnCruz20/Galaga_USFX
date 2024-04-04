// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaCaza.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/staticMesh.h"

// Sets default values
ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	// Create the mesh component
	mallaNaveEnemigaCaza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemigaCaza->SetStaticMesh(malla.Object);
	mallaNaveEnemigaCaza->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemigaCaza;
};


// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	//Obtenemos la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	//Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = 0.0f;
	//float NuevaX = FMath::RandRange(-200.0f, 200.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(.0f, 200.0f) * DeltaTime;

	float Velocidady = 800.0f; // Velocidad constante en el eje X
	float Nuevay = Velocidady * DeltaTime;

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	//Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);
}