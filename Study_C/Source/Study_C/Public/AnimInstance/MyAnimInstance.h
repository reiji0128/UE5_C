// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_C_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	// ���t���[���Ăяo����鏈��
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


	// �����Ă��邩
	bool IsRun() const { return bIsRun; }

protected:

	// ���s���x
	UPROPERTY(BlueprintReadWrite)
	float PawnRunSpeed = 0.0f;

	// �����Ă��邩
	UPROPERTY(BlueprintReadWrite)
	bool bIsRun;
	
};
