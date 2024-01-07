// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/MyAnimInstance.h"
#include "GameFramework/Pawn.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);


	// AnimationBP�̃I�[�i�[Pawn�̎擾
	APawn* OwnerPawn = Cast<APawn>(GetOwningActor());


	if (OwnerPawn != nullptr)
	{
		// ���x�̎擾
		PawnRunSpeed = OwnerPawn->GetVelocity().Size();

		// ���x��0���傫�����Run��ԂɕύX
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
