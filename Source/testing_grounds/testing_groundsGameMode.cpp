// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "testing_groundsGameMode.h"
#include "testing_groundsHUD.h"
#include "testing_groundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atesting_groundsGameMode::Atesting_groundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atesting_groundsHUD::StaticClass();
}
