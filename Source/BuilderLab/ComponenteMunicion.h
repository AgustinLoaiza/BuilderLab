// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Municion.h"
#include "ComponenteMunicion.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDERLAB_API UComponenteMunicion : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteMunicion();

	UPROPERTY()
	TArray<AMunicion*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AMunicion* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AMunicion* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
