// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMejora.h"

// Sets default values for this component's properties
UComponenteMejora::UComponenteMejora()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

int32 UComponenteMejora::AddToInventory(AMejora* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd); 
}

void UComponenteMejora::RemoveFromInventory(AMejora* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove); 
}


// Called when the game starts
void UComponenteMejora::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteMejora::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

