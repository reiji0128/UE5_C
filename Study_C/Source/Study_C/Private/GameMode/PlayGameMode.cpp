// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/PlayGameMode.h"
#include "Pawn/PlayerPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "Controller/PlayerCharacterController.h"

APlayGameMode::APlayGameMode()
{
	// PlayerPawnBPÇDefaultPawnÇ…ê›íË
	ConstructorHelpers::FObjectFinder<UBlueprint> BluePrintFile(TEXT("/Game/Pawn/PlayerPawn.PlayerPawn"));

	if (BluePrintFile.Object)
	{
		DefaultPawnClass = (UClass*)BluePrintFile.Object->GeneratedClass;
	}

	PlayerControllerClass = APlayerCharacterController::StaticClass();
};