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


	// �̗͂̎擾
	float GetHealth() const { return Health; }

private:

	// Character��SceneComponent
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USceneComponent> SceneComp;

	// Character�p��SkeletalMeshComponent
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> CharacterMesh;

	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAnimInstance> AnimInstance;

	// Camera��z�u���邽�߂�SpringArm
	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> SpringArm;

	// SpringArm�̐�[�ɔz�u����J����
	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> Camera;

	// �ړ�
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UMyFloatingPawnMovement> PawnMovement;

	UPROPERTY(VisibleAnywhere, Category = Gun)
	TObjectPtr<AGun> Gun;


	// �̗�
	UPROPERTY(EditAnywhere, Category = Character)
	float Health;
};
