// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paquetero.h"
#include "PaqueteroVelocidad.generated.h"

UCLASS()
class BUILDERLAB_API APaqueteroVelocidad : public AActor, public IPaquetero
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaqueteroVelocidad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildPaquete(FVector ubicacionPaquete, FRotator Rotacion) override;
	virtual void BuildMesh() override;
	virtual void BuildCapsula() override;
	class UStaticMesh* PaqueteVelocidad=LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	virtual class APaquete* GetPaquete() override;
	APaquete* Paquete;
};