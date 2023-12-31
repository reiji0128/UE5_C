// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/MyFloatingPawnMovement.h"

void UMyFloatingPawnMovement::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ポーンを入力方向に時間をかけて振り向かせる
	auto movement = PawnOwner->GetLastMovementInputVector();

	// 入力がある時だけ回転
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