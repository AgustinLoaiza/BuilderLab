// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ComponenteGestion.h"
#include "BuilderLabGameMode.generated.h"

class AObjetoPrueba;

UCLASS(MinimalAPI)
class ABuilderLabGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABuilderLabGameMode();

private:
	/*class AJefeAduanas* JefeAduanas;
	class APaqueteroBalas* PaqueteroMunicion;
	class APaqueteroVelocidad* PaqueteroVelocidad;*/

	TArray<AActor*> ObjetosPrueba; 

	UComponenteGestion* ComponenteGestion;

protected:
	virtual void BeginPlay() override;

private:
	virtual void Tick(float DeltaTime) override;
};



