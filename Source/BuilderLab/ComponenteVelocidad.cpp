// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteVelocidad.h"

// Sets default values for this component's properties
UComponenteVelocidad::UComponenteVelocidad()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

int32 UComponenteVelocidad::AddToInventory(AVelocidad* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UComponenteVelocidad::RemoveFromInventory(AVelocidad* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}



// Called when the game starts
void UComponenteVelocidad::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteVelocidad::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

