// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/PlayerCharacterController.h"

void APlayerCharacterController::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacterController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &APlayerCharacterController::MoveForward);
	InputComponent->BindAxis("MoveRight"  ,this  ,&APlayerCharacterController::MoveRight);
}

void APlayerCharacterController::MoveForward(float Value)
{

	GetPawn()->AddMovementInput(FVector::ForwardVector * Value);
}

void APlayerCharacterController::MoveRight(float Value)
{
	GetPawn()->AddMovementInput(FVector::RightVector * Value);
}
