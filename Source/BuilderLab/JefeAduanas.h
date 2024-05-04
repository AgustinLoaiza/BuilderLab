// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paquetero.h"
#include "JefeAduanas.generated.h"

UCLASS()
class BUILDERLAB_API AJefeAduanas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJefeAduanas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstruirPaquete(FVector ubicacionPaquete, FRotator Rotacion);
	void SetPaquetero(AActor* Embalador);
	class APaquete* GetPaquete();
	IPaquetero* Paquetero;

};
