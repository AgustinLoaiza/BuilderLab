// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuilderLabGameMode.h"
#include "BuilderLabPawn.h"
#include "PaqueteroBalas.h"
#include "PaqueteroVelocidad.h"
#include "JefeAduanas.h"
#include "Paquete.h"

ABuilderLabGameMode::ABuilderLabGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABuilderLabPawn::StaticClass();
}

void ABuilderLabGameMode::BeginPlay()
{
	Super::BeginPlay();

	JefeAduanas = GetWorld()->SpawnActor<AJefeAduanas>(AJefeAduanas::StaticClass());

	PaqueteroMunicion = GetWorld()->SpawnActor<APaqueteroBalas>(APaqueteroBalas::StaticClass());
	JefeAduanas->SetPaquetero(PaqueteroMunicion);
	JefeAduanas->ConstruirPaquete(FVector(300.0f, 500.0f, 215.0f), FRotator(0.0f, 0.0f, 0.0f));

	PaqueteroVelocidad = GetWorld()->SpawnActor<APaqueteroVelocidad>(APaqueteroVelocidad::StaticClass());
	JefeAduanas->SetPaquetero(PaqueteroVelocidad);
	JefeAduanas->ConstruirPaquete(FVector(700.0f, 500.0f, 215.0f), FRotator(0.0f, 0.0f, 0.0f));

	APaquete* Paquete = JefeAduanas->GetPaquete();
}

void ABuilderLabGameMode::Tick(float DeltaTime)
{
}

