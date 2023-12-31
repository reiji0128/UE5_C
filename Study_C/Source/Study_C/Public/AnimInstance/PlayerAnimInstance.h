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

	// 毎フレーム呼び出される処理
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


	// 死んでいるか
	virtual bool IsDeath();

};
