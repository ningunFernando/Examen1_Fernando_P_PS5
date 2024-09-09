// Copyright Epic Games, Inc. All Rights Reserved.

#include "Examen1FPSGameMode.h"
#include "Examen1FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExamen1FPSGameMode::AExamen1FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
