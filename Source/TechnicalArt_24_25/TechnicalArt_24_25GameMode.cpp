// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechnicalArt_24_25GameMode.h"
#include "TechnicalArt_24_25Character.h"
#include "UObject/ConstructorHelpers.h"

ATechnicalArt_24_25GameMode::ATechnicalArt_24_25GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
