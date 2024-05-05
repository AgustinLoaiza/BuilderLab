// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Medicina.generated.h"

/**
 * 
 */
UCLASS()
class BUILDERLAB_API AMedicina : public AStaticMeshActor
{
	GENERATED_BODY()
	

public:
	UStaticMeshComponent* MeshMedicina;
	AMedicina();

	virtual void AgarrarMedicina();
	virtual void SoltarMedicina(FTransform TargetLocation);
};
