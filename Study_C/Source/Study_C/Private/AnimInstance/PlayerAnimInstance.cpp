// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/PlayerAnimInstance.h"
#include "Pawn/PlayerPawn.h"

void  UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

bool UPlayerAnimInstance::IsDeath()
{
	// AnimationBP‚ÌƒI[ƒiPawn‚Ìæ“¾
	APlayerPawn* Player = Cast<APlayerPawn>(GetOwningActor());

	if (Player != nullptr)
	{
		// €‚ñ‚Å‚¢‚é‚©
		float Health = Player->GetHealth();

		// ‘Ì—Í‚ª0‚æ‚è’á‚¢‚©
		if (Health <= 0)
		{
			return true;
		}
		
	}

	return false;
}
