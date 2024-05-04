// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Municion.generated.h"

/**
 * 
 */
UCLASS()
class BUILDERLAB_API AMunicion : public AStaticMeshActor
{
	GENERATED_BODY()

public:

	UStaticMeshComponent* MeshMunicion;
	AMunicion();

	virtual void AgarrarMunicion();
	virtual void SoltarMunicion(FTransform TargetLocation);
};
