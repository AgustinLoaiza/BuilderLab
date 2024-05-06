// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mejora.h"
#include "ComponenteMejora.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDERLAB_API UComponenteMejora : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteMejora();

	UPROPERTY()
	TArray<AMejora*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AMejora* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AMejora* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
