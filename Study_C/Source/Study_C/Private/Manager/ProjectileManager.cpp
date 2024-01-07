// Fill out your copyright notice in the Description page of Project Settings.


#include "Manager/ProjectileManager.h"

// Sets default values
AProjectileManager::AProjectileManager()
{

}

// Called when the game starts or when spawned
void AProjectileManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileManager::InitProjectilePool()
{
	FString Path = "/Game/Blueprint/Projectile/Projectile_BP.Projectile_BP_C";

	// BPÇ©ÇÁíeÇê∂ê¨
	UBlueprint* BP = FindObject<UBlueprint>(nullptr, *Path);

	if (BP)
	{
		for (int i = 0; i < ProjectileNum; i++)
		{
			AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(BP->GeneratedClass);

			UnuseProjectilePool.Push(Projectile);
		}
	}

}

AProjectile* AProjectileManager::GetUnuseProjectile()
{
	for (auto Projectile : UnuseProjectilePool)
	{
		if (!Projectile->IsActive())
		{
			UnuseProjectilePool.Remove(Projectile);
			UsedProjectilePool.Push(Projectile);

			return Projectile;
		}
	}

	return nullptr;
}

void AProjectileManager::RecycleUseProjectile()
{
	for (auto Projectile : UsedProjectilePool)
	{
		if (!Projectile->IsActive())
		{
			UsedProjectilePool.Remove(Projectile);
			UnuseProjectilePool.Push(Projectile);
		}
	}
}

