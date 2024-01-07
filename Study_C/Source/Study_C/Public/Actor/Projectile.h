// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;

UCLASS()
class STUDY_C_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// �ˏo�����̑��x�̐ݒ�
	void FireInDirection(const FVector& ShooterDirection);


	// �A�N�e�B�u��Ԃ�
	bool IsActive() const { return bIsActive; }

	// �A�N�e�B�u��Ԃ̐ݒ�
	void SetIsActive(bool bNewActive) { bIsActive = bNewActive; }

private:

	// Scene�R���|�[�l���g
	UPROPERTY(VisibleAnywhere, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneComp;

	// ���b�V���R���|�[�l���g
	UPROPERTY(VisibleAnywhere, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;

	// �ړ��R���|�[�l���g
	UPROPERTY(VisibleAnywhere, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* MoveComp;

	// �A�N�e�B�u���
	UPROPERTY(VisibleAnywhere)
	bool bIsActive;

};
