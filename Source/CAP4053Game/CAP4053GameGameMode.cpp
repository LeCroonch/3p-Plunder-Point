// Copyright Epic Games, Inc. All Rights Reserved.

#include "CAP4053GameGameMode.h"
#include "CAP4053GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACAP4053GameGameMode::ACAP4053GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
