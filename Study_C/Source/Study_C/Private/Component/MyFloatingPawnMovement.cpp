// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/MyFloatingPawnMovement.h"

void UMyFloatingPawnMovement::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// �|�[������͕����Ɏ��Ԃ������ĐU���������
	auto movement = PawnOwner->GetLastMovementInputVector();

	// ���͂����鎞������]
	if (!movement.IsZero())
	{
		auto currentRot = PawnOwner->GetActorRotation();
		auto targetRot = movement.Rotation();
		PawnOwner->SetActorRotation(FMath::RInterpTo(currentRot, targetRot, DeltaTime, RotationSpeed));
	}
}

void UMyFloatingPawnMovement::BeginPlay()
{
}