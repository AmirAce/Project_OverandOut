// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_OverandOutGameMode.h"
#include "Project_OverandOutCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_OverandOutGameMode::AProject_OverandOutGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
