// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/PlayerAnimInstance.h"
#include "Pawn/PlayerPawn.h"

void  UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

bool UPlayerAnimInstance::IsDeath()
{
	// AnimationBPのオーナPawnの取得
	APlayerPawn* Player = Cast<APlayerPawn>(GetOwningActor());

	if (Player != nullptr)
	{
		// 死んでいるか
		float Health = Player->GetHealth();

		// 体力が0より低いか
		if (Health <= 0)
		{
			return true;
		}
		
	}

	return false;
}
