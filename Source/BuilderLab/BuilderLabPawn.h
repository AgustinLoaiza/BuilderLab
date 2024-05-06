// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//Incluimos todo relacionado a Municion
#include "ComponenteMunicion.h"
#include "Municion.h"
//Incluimos todo relacionado a Velocidad
#include "ComponenteVelocidad.h"
#include "Velocidad.h"
//Incluimos todo relacionado a Medicina
#include "ComponenteMedicina.h"
#include "Medicina.h"
//Incluimos todo relacionado a Mejora
#include "ComponenteMejora.h"
#include "Mejora.h"
//Objeto Experimental
#include "ObjetoPrueba.h"
#include "BuilderLabPawn.generated.h"

UCLASS(Blueprintable)
class ABuilderLabPawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	ABuilderLabPawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

	//Le damos un cargador a la nave
	int32 cargador = 50;

	//Le damos vidas a la nave
	int32 vida = 3;

	//Le damos energía a la nave
	int32 energia = 100;

	//Declaramos una variable de validacion para el disparon multiple
	bool disparoMultiple = false;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

public:
	//Interaccion de Pawn con la Municion
	UPROPERTY()
	UComponenteMunicion* Municion;
	UFUNCTION()
	void DropItemMunicion();
	UFUNCTION()
	void TakeItemMunicion(AMunicion* InventoryItem);

	//Interaccion de Pawn con la Velocidad
	UPROPERTY()
	UComponenteVelocidad* Velocidad;
	UFUNCTION()
	void DropItemVelocidad();
	UFUNCTION()
	void TakeItemVelocidad(AVelocidad* InventoryItem);

	//Interaccion de Pawn con la Vida
	UPROPERTY()
	UComponenteMedicina* Medicina;
	UFUNCTION()
	void DropItemMedicina();
	UFUNCTION()
	void TakeItemMedicina(AMedicina* InventoryItem);

	//Interaccion de Pawn con la Mejora
	UPROPERTY()
	UComponenteMejora* Mejora;
	UFUNCTION()
	void DropItemMejora();
	UFUNCTION()
	void TakeItemMejora(AMejora* InventoryItem);

	//Interaccion de Pawn con todos los consumibles, la notificacion de la colision
	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};

