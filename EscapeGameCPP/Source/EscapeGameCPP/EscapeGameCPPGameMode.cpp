// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "EscapeGameCPPGameMode.h"
#include "EscapeGameCPPHUD.h"
#include "EscapeGameCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscapeGameCPPGameMode::AEscapeGameCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEscapeGameCPPHUD::StaticClass();
}
