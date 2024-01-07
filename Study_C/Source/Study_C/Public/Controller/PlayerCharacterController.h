// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_C_API APlayerCharacterController : public APlayerController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	// ���̓C�x���g�Ɉړ��֐����o�C���h
	virtual void SetupInputComponent() override;

	// ���͂ɂ��O��ړ�
	virtual void MoveForward(float Value);

	// ���͂ɂ�鍶�E�ړ�
	virtual void MoveRight(float Value);
	
};
