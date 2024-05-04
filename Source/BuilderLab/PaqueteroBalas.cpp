// Fill out your copyright notice in the Description page of Project Settings.


#include "PaqueteroBalas.h"
#include "Municion.h"
#include "Paquete.h"

// Sets default values
APaqueteroBalas::APaqueteroBalas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaqueteroBalas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaqueteroBalas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaqueteroBalas::BuildPaquete(FVector ubicacionPaquete, FRotator Rotacion)
{
	Paquete = GetWorld()->SpawnActor<APaquete>(APaquete::StaticClass(), ubicacionPaquete, Rotacion);
	Paquete->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void APaqueteroBalas::BuildMesh()
{
	Paquete->MallaPaquete->SetStaticMesh(PaqueteBalas);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PaqueteBalas"));
}

void APaqueteroBalas::BuildCapsula()
{
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Paquetero de balas")); return; }
	Paquete->SetCapsulas("Municion");
}

APaquete* APaqueteroBalas::GetPaquete()
{
	return Paquete;
}

