// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuilderLabPawn.h"
#include "BuilderLabProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

const FName ABuilderLabPawn::MoveForwardBinding("MoveForward");
const FName ABuilderLabPawn::MoveRightBinding("MoveRight");
const FName ABuilderLabPawn::FireForwardBinding("FireForward");
const FName ABuilderLabPawn::FireRightBinding("FireRight");

ABuilderLabPawn::ABuilderLabPawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	//Inicializamos los componentes de actor de las capsulas
	Municion = CreateDefaultSubobject<UComponenteMunicion>("Municion");
	Velocidad = CreateDefaultSubobject<UComponenteVelocidad>("Velocidad"); 
}

void ABuilderLabPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void ABuilderLabPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
}

void ABuilderLabPawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (cargador>0)
	{
		if (bCanFire == true)
		{
			// If we are pressing fire stick in a direction
			if (FireDirection.SizeSquared() > 0.0f)
			{
				const FRotator FireRotation = FireDirection.Rotation();
				// Spawn projectile at an offset from this pawn
				const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

				UWorld* const World = GetWorld();
				if (World != nullptr)
				{
					// spawn the projectile
					World->SpawnActor<ABuilderLabProjectile>(SpawnLocation, FireRotation);
				}
				//reducimos el cargador
				cargador--;

				bCanFire = false;
				World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ABuilderLabPawn::ShotTimerExpired, FireRate);

				// try and play the sound if specified
				if (FireSound != nullptr)
				{
					UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
				}

				bCanFire = false;
			}
		}
	}
}

void ABuilderLabPawn::ShotTimerExpired()
{
	bCanFire = true;
}

//Inicalizacion de las funciones de recoger y soltar Municion
void ABuilderLabPawn::DropItemMunicion()
{
	if (Municion->CurrentInventory.Num() == 0)
	{
		return;
	}
	AMunicion* Item = Municion->CurrentInventory.Last();
	Municion->RemoveFromInventory(Item);
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);
	FTransform PutDownLocation = GetTransform() + FTransform(RootComponent->GetForwardVector() * ItemBounds.GetMax());
	Item->SoltarMunicion(PutDownLocation);
}

void ABuilderLabPawn::TakeItemMunicion(AMunicion* InventoryItem)
{
	InventoryItem->AgarrarMunicion();
	Municion->AddToInventory(InventoryItem);
}

//Inicalizacion de las funciones de recoger y soltar Velocidad
void ABuilderLabPawn::DropItemVelocidad()
{
	if (Velocidad->CurrentInventory.Num() == 0)
	{
		return;
	}
	AVelocidad* Item = Velocidad->CurrentInventory.Last();
	Velocidad->RemoveFromInventory(Item);
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);
	FTransform PutDownLocation = GetTransform() + FTransform(RootComponent->GetForwardVector() * ItemBounds.GetMax());
	Item->SoltarVelocidad(PutDownLocation);
}

void ABuilderLabPawn::TakeItemVelocidad(AVelocidad* InventoryItem)
{
	InventoryItem->AgarrarVelocidad();
	Velocidad->AddToInventory(InventoryItem);
}

void ABuilderLabPawn::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AMunicion* InventoryItemMunicion = Cast<AMunicion>(Other); 
	if (InventoryItemMunicion != nullptr)
	{
		TakeItemMunicion(InventoryItemMunicion); 
		cargador = 50;
	}
	AVelocidad* InventoryItemVelocidad = Cast<AVelocidad>(Other);
	if (InventoryItemVelocidad != nullptr)
	{
		TakeItemVelocidad(InventoryItemVelocidad);
		MoveSpeed = 2000.0f;
	}
}

