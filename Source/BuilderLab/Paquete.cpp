// Fill out your copyright notice in the Description page of Project Settings.


#include "Paquete.h"
#include "Municion.h"
#include "Velocidad.h"

// Sets default values
APaquete::APaquete()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaPaquete = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Paquete"));
	MallaPaquete->SetupAttachment(RootComponent);
	RootComponent = MallaPaquete;

}

// Called when the game starts or when spawned
void APaquete::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaquete::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido>=5)
	{
		BuildCapsula();
		Destroy();
		TiempoTranscurrido = 0;
	}
	ubicacionPaquete = GetActorLocation();
}

void APaquete::SetMesh(UStaticMeshComponent* _MallaPaquete)
{
	MallaPaquete = _MallaPaquete;
}

void APaquete::SetCapsulas(FString _Capsula)
{
	Capsula = _Capsula;
}

void APaquete::BuildCapsula()
{
	if (Capsula == "Municion")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMunicion = ubicacionPaquete + FVector(-100.0f, 300.0f, 0.0f);
			World->SpawnActor<AMunicion>(ubicacionMunicion, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo la Capsula"));
		}
	}
	else if (Capsula == "Velocidad")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionVelocidad = ubicacionPaquete + FVector(-100.0f, 300.0f, 0.0f);
			World->SpawnActor<AVelocidad>(ubicacionVelocidad, FRotator::ZeroRotator); 
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo la Capsula")); 
		}
	}
	else
	{
		nullptr;
	}
}

