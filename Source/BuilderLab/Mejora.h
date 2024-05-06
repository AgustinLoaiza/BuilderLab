// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Mejora.generated.h"

/**
 * 
 */
UCLASS()
class BUILDERLAB_API AMejora : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:

	UStaticMeshComponent* MeshMejora;
	AMejora();

	virtual void AgarrarMejora();
	virtual void SoltarMejora(FTransform TargetLocation);
};
