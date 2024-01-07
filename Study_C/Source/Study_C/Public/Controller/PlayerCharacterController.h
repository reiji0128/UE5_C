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

	// 入力イベントに移動関数をバインド
	virtual void SetupInputComponent() override;

	// 入力による前後移動
	virtual void MoveForward(float Value);

	// 入力による左右移動
	virtual void MoveRight(float Value);
	
};
