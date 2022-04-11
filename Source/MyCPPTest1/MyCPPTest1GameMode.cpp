// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyCPPTest1GameMode.h"
#include "MyCPPTest1HUD.h"
#include "MyCPPTest1Character.h"
#include "UObject/ConstructorHelpers.h"

AMyCPPTest1GameMode::AMyCPPTest1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyCPPTest1HUD::StaticClass();
}
