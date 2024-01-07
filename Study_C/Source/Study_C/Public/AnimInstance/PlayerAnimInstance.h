// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimInstance/MyAnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_C_API UPlayerAnimInstance : public UMyAnimInstance
{
	GENERATED_BODY()
	
public:

	// ���t���[���Ăяo����鏈��
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


	// ����ł��邩
	virtual bool IsDeath();

};
