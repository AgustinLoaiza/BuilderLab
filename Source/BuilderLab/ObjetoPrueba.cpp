// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjetoPrueba.h"

// Sets default values
AObjetoPrueba::AObjetoPrueba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	// Create the mesh component
	MeshObjeto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveEnemiga"));
	MeshObjeto->SetStaticMesh(ShipMesh.Object);
	MeshObjeto->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	RootComponent = MeshObjeto;
}

// Called when the game starts or when spawned
void AObjetoPrueba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjetoPrueba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

