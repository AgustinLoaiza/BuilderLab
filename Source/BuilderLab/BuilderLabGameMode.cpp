// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuilderLabGameMode.h"
#include "BuilderLabPawn.h"

ABuilderLabGameMode::ABuilderLabGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABuilderLabPawn::StaticClass();
}

