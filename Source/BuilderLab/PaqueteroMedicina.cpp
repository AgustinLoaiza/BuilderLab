// Fill out your copyright notice in the Description page of Project Settings.


#include "PaqueteroMedicina.h"
#include "Medicina.h"
#include "Paquete.h"

// Sets default values
APaqueteroMedicina::APaqueteroMedicina()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaqueteroMedicina::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaqueteroMedicina::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaqueteroMedicina::BuildPaquete(FVector ubicacionPaquete, FRotator Rotacion)
{
	Paquete = GetWorld()->SpawnActor<APaquete>(APaquete::StaticClass(), ubicacionPaquete, Rotacion);
	Paquete->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void APaqueteroMedicina::BuildMesh()
{
	Paquete->MallaPaquete->SetStaticMesh(PaqueteMedicina);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PaqueteMedicina"));
}

void APaqueteroMedicina::BuildCapsula()
{
	if (!Paquete) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Paquetero de Medicina")); return; }
	Paquete->SetCapsulas("Medicina");
}

APaquete* APaqueteroMedicina::GetPaquete()
{
	return Paquete;
}

