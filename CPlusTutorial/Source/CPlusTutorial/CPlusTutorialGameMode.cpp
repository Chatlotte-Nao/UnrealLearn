// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPlusTutorialGameMode.h"
#include "CPlusTutorialHUD.h"
#include "CPlusTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPlusTutorialGameMode::ACPlusTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPlusTutorialHUD::StaticClass();
}
