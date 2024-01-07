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


	// 射出方向の速度の設定
	void FireInDirection(const FVector& ShooterDirection);


	// アクティブ状態か
	bool IsActive() const { return bIsActive; }

	// アクティブ状態の設定
	void SetIsActive(bool bNewActive) { bIsActive = bNewActive; }

private:

	// Sceneコンポーネント
	UPROPERTY(VisibleAnywhere, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneComp;

	// メッシュコンポーネント
	UPROPERTY(VisibleAnywhere, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;

	// 移動コンポーネント
	UPROPERTY(VisibleAnywhere, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* MoveComp;

	// アクティブ状態
	UPROPERTY(VisibleAnywhere)
	bool bIsActive;

};
