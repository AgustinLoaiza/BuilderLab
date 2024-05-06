// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteGestion.h"
#include "PaqueteroBalas.h"
#include "PaqueteroVelocidad.h"
#include "PaqueteroMedicina.h"
#include "PaqueteroMejora.h"
#include "JefeAduanas.h"
#include "Paquete.h"

// Sets default values for this component's properties
UComponenteGestion::UComponenteGestion()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComponenteGestion::BeginPlay()
{
	Super::BeginPlay();

	// ...
	JefeAduanas = GetWorld()->SpawnActor<AJefeAduanas>(AJefeAduanas::StaticClass());

	PaqueteroMunicion = GetWorld()->SpawnActor<APaqueteroBalas>(APaqueteroBalas::StaticClass());
	PaqueteroVelocidad = GetWorld()->SpawnActor<APaqueteroVelocidad>(APaqueteroVelocidad::StaticClass());
	PaqueteroMedicina = GetWorld()->SpawnActor<APaqueteroMedicina>(APaqueteroMedicina::StaticClass());
	PaqueteroMejora = GetWorld()->SpawnActor<APaqueteroMejora>(APaqueteroMejora::StaticClass());
	
}


// Called every frame
void UComponenteGestion::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	TiempoSpawneo += DeltaTime;
	if (TiempoSpawneo >= 5)
	{
		Spawn();
		TiempoSpawneo = 0;
	}
}

void UComponenteGestion::Spawn()
{
	float PosicionX= FMath::RandRange(-500.0f, 500.0f);
	float PosicionY = FMath::RandRange(-500.0f, 500.0f);
	FVector Posicion = FVector(PosicionX, PosicionY, 250.0f);
	PaqueteRandom = FMath::RandRange(1, 4);

	if (PaqueteRandom==1)
	{
		JefeAduanas->SetPaquetero(PaqueteroMunicion);
		JefeAduanas->ConstruirPaquete(FVector(Posicion), FRotator::ZeroRotator);
	}
	else if (PaqueteRandom==2)
	{
		JefeAduanas->SetPaquetero(PaqueteroVelocidad);
		JefeAduanas->ConstruirPaquete(FVector(Posicion), FRotator::ZeroRotator);
	}
	else if (PaqueteRandom==3)
	{
		JefeAduanas->SetPaquetero(PaqueteroMedicina);
		JefeAduanas->ConstruirPaquete(FVector(Posicion), FRotator::ZeroRotator);
	}
	else if (PaqueteRandom == 4)
	{
		JefeAduanas->SetPaquetero(PaqueteroMejora);
		JefeAduanas->ConstruirPaquete(FVector(Posicion), FRotator::ZeroRotator);
	}
	else
	{
		nullptr;
	}
}

