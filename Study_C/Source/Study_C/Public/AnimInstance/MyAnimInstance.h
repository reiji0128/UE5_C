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

	// 毎フレーム呼び出される処理
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


	// 走っているか
	bool IsRun() const { return bIsRun; }

protected:

	// 歩行速度
	UPROPERTY(BlueprintReadWrite)
	float PawnRunSpeed = 0.0f;

	// 走っているか
	UPROPERTY(BlueprintReadWrite)
	bool bIsRun;
	
};
