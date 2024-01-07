// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor/Projectile.h"
#include "ProjectileManager.generated.h"

UCLASS()
class STUDY_C_API AProjectileManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// ProjectilePoolの初期化
	void InitProjectilePool();

	// 未使用のProjectileの取得
	AProjectile* GetUnuseProjectile();

	// 使用済みのProjectileのリサイクル
	void RecycleUseProjectile();
	
private:

	// 未使用の弾のプール
	TArray<AProjectile*> UnuseProjectilePool;

	// 使用済みの弾のプール
	TArray<AProjectile*> UsedProjectilePool;

	// 弾の総数
	UPROPERTY(VisibleAnywhere, Category = Projectile)
	int ProjectileNum = 40;

};
