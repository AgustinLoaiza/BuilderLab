// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Medicina.h"
#include "ComponenteMedicina.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDERLAB_API UComponenteMedicina : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteMedicina();

	UPROPERTY()
	TArray<AMedicina*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AMedicina* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AMedicina* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};