// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/PlayerAnimInstance.h"
#include "Pawn/PlayerPawn.h"

void  UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

bool UPlayerAnimInstance::IsDeath()
{
	// AnimationBP�̃I�[�iPawn�̎擾
	APlayerPawn* Player = Cast<APlayerPawn>(GetOwningActor());

	if (Player != nullptr)
	{
		// ����ł��邩
		float Health = Player->GetHealth();

		// �̗͂�0���Ⴂ��
		if (Health <= 0)
		{
			return true;
		}
		
	}

	return false;
}
