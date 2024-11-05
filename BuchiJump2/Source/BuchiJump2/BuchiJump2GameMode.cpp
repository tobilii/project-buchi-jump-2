// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuchiJump2GameMode.h"
#include "BuchiJump2Character.h"
#include "UObject/ConstructorHelpers.h"

ABuchiJump2GameMode::ABuchiJump2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
