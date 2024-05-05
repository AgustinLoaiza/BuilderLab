// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMedicina.h"

// Sets default values for this component's properties
UComponenteMedicina::UComponenteMedicina()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

int32 UComponenteMedicina::AddToInventory(AMedicina* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd); 
}

void UComponenteMedicina::RemoveFromInventory(AMedicina* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}


// Called when the game starts
void UComponenteMedicina::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteMedicina::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

