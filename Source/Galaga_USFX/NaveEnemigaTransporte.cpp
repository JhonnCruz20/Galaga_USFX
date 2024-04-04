// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

// Sets default values
ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

	// Create the mesh component
	mallaNaveEnemigaTransporte = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemigaTransporte->SetStaticMesh(malla.Object);
	mallaNaveEnemigaTransporte->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemigaTransporte;

}

// Called when the game starts or when spawned
void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}