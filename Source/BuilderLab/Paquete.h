// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanosPaquete.h"
#include "Paquete.generated.h"

UCLASS()
class BUILDERLAB_API APaquete : public AActor, public IPlanosPaquete
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaquete();

	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Capsula;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	UStaticMeshComponent* MallaPaquete;

	FVector ubicacionPaquete;
	float TiempoTranscurrido;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetMesh(UStaticMeshComponent* _MallaPaquete) override;
	void SetCapsulas(FString _Capsula) override;
	void BuildCapsula();
};
