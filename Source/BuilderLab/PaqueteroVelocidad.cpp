// Fill out your copyright notice in the Description page of Project Settings.


#include "PaqueteroVelocidad.h"
#include "Velocidad.h"
#include "Paquete.h"

// Sets default values
APaqueteroVelocidad::APaqueteroVelocidad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaqueteroVelocidad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaqueteroVelocidad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaqueteroVelocidad::BuildPaquete(FVector ubicacionPaquete, FRotator Rotacion)
{
	Paquete = GetWorld()->SpawnActor<APaquete>(APaquete::StaticClass(), ubicacionPaquete, Rotacion);
	Paquete->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void APaqueteroVelocidad::BuildMesh()
{
	Paquete->MallaPaquete->SetStaticMesh(PaqueteVelocidad);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PaqueteVelocidad"));
}

void APaqueteroVelocidad::BuildCapsula()
{
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Paquetero de velocidad")); return; }
	Paquete->SetCapsulas("Velocidad");
}

APaquete* APaqueteroVelocidad::GetPaquete()
{
	return Paquete;
}

