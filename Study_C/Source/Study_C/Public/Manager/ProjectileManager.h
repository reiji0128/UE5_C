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


	// ProjectilePool�̏�����
	void InitProjectilePool();

	// ���g�p��Projectile�̎擾
	AProjectile* GetUnuseProjectile();

	// �g�p�ς݂�Projectile�̃��T�C�N��
	void RecycleUseProjectile();
	
private:

	// ���g�p�̒e�̃v�[��
	TArray<AProjectile*> UnuseProjectilePool;

	// �g�p�ς݂̒e�̃v�[��
	TArray<AProjectile*> UsedProjectilePool;

	// �e�̑���
	UPROPERTY(VisibleAnywhere, Category = Projectile)
	int ProjectileNum = 40;

};
