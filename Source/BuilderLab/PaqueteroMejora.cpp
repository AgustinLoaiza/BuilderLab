// Fill out your copyright notice in the Description page of Project Settings.


#include "PaqueteroMejora.h"
#include "Mejora.h"
#include "Paquete.h"

// Sets default values
APaqueteroMejora::APaqueteroMejora()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaqueteroMejora::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaqueteroMejora::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaqueteroMejora::BuildPaquete(FVector ubicacionPaquete, FRotator Rotacion)
{
	Paquete = GetWorld()->SpawnActor<APaquete>(APaquete::StaticClass(), ubicacionPaquete, Rotacion);
	Paquete->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void APaqueteroMejora::BuildMesh()
{
	Paquete->MallaPaquete->SetStaticMesh(PaqueteMejora);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PaqueteMejora"));
}

void APaqueteroMejora::BuildCapsula()
{
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Paquetero de Mejora")); return; }
	Paquete->SetCapsulas("Mejora");
}

APaquete* APaqueteroMejora::GetPaquete()
{
	return Paquete;
}

