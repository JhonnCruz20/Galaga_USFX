// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	NaveEnemiga = nullptr;
	NaveEnemigaCaza = nullptr;
	NaveEnemigaTransporte = nullptr;
}
void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	//crear naves enemigas 
	for (int i = 0; i < 4; i++); 
	{
		FVector ubicacionNave = FVector(-900.0f, 50.0f, 150.0f);
		FVector ubicacionNaveCaza = FVector(-900.0f, 180.0f, 150.0f);
		FVector ubicacionNaveTransporte = FVector(-900.0f, 400.0f, 150.0f);

		FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
		FRotator rotacionNaveCaza = FRotator(0.0f, 0.0f, 0.0f);
		FRotator rotacionNaveTransporte = FRotator(0.0f, 0.0f, 0.0f);


		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// spawn the projectile
			NaveEnemiga = World->SpawnActor<ANaveEnemiga> (ubicacionNave, rotacionNave);
			NaveEnemigaCaza = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza, rotacionNaveCaza);
			NaveEnemigaTransporte = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte, rotacionNaveTransporte);
		}

		NaveEnemiga->SetPosicion(FVector(-900.0f, 50.0f, 150.0f));
		NaveEnemigaCaza->SetPosicion(FVector(-900.0f, 180.0f, 150.0f));
		NaveEnemigaTransporte->SetPosicion(FVector(-900.0f, 400.0f, 150.0f));
	}
}