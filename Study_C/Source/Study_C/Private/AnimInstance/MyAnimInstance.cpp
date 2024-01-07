// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/MyAnimInstance.h"
#include "GameFramework/Pawn.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);


	// AnimationBPのオーナーPawnの取得
	APawn* OwnerPawn = Cast<APawn>(GetOwningActor());


	if (OwnerPawn != nullptr)
	{
		// 速度の取得
		PawnRunSpeed = OwnerPawn->GetVelocity().Size();

		// 速度が0より大きければRun状態に変更
		if (PawnRunSpeed > 0)
		{
			bIsRun = true;
		}
		else
		{
			bIsRun = false;
		}
	}
}
