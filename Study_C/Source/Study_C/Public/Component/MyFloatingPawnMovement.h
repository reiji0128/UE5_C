// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "MyFloatingPawnMovement.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_C_API UMyFloatingPawnMovement : public UFloatingPawnMovement
{
	GENERATED_BODY()

public:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:

	virtual void BeginPlay() override;


	// êUÇËå¸Ç´ë¨ìx
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationSpeed = 50.0f;
	
};
