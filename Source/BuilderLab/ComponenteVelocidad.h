// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Velocidad.h"
#include "ComponenteVelocidad.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDERLAB_API UComponenteVelocidad : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteVelocidad();

	UPROPERTY()
	TArray<AVelocidad*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AVelocidad* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AVelocidad* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
