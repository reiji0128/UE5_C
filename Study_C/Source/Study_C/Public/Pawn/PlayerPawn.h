// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UAnimInstance;
class USpringArmComponent;
class UCameraComponent;
class UMyFloatingPawnMovement;
class UStaticMeshComponent;
class AGun;

UCLASS()
class STUDY_C_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Shot();


	// 体力の取得
	float GetHealth() const { return Health; }

private:

	// CharacterのSceneComponent
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USceneComponent> SceneComp;

	// Character用のSkeletalMeshComponent
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> CharacterMesh;

	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAnimInstance> AnimInstance;

	// Cameraを配置するためのSpringArm
	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> SpringArm;

	// SpringArmの先端に配置するカメラ
	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> Camera;

	// 移動
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UMyFloatingPawnMovement> PawnMovement;

	UPROPERTY(VisibleAnywhere, Category = Gun)
	TObjectPtr<AGun> Gun;


	// 体力
	UPROPERTY(EditAnywhere, Category = Character)
	float Health;
};
