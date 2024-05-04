// Fill out your copyright notice in the Description page of Project Settings.


#include "JefeAduanas.h"

// Sets default values
AJefeAduanas::AJefeAduanas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJefeAduanas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJefeAduanas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJefeAduanas::SetPaquetero(AActor* Embalador)
{
	Paquetero = Cast<IPaquetero>(Embalador); 

	if (!Paquetero)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se puede armar el paquete"));
	}
}

APaquete* AJefeAduanas::GetPaquete()
{
	if (Paquetero)
	{
		return Paquetero->GetPaquete();
	}
	return nullptr;
}

void AJefeAduanas::ConstruirPaquete(FVector ubicacionPaquete, FRotator Rotacion)
{
	Paquetero->BuildPaquete(ubicacionPaquete, Rotacion);
	Paquetero->BuildCapsula();
	Paquetero->BuildMesh(); 
}

