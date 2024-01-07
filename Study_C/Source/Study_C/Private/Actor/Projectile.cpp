// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/Projectile.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AProjectile::AProjectile()
{
	// SceneComponent�̒ǉ�
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;


	// StaticMeshComponent�̒ǉ�
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	ProjectileMesh->SetupAttachment(RootComponent);

	// StaticMesh��ݒ�
	UStaticMesh* StaticMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Sphere"));
	ProjectileMesh->SetStaticMesh(StaticMesh);

	// Material��ݒ�
	UMaterial* Material = LoadObject<UMaterial>(nullptr, TEXT("/Engine/EngineMaterials/DefaultMaterial"));
	ProjectileMesh->SetMaterial(0, Material);


	// �ړ��R���|�[�l���g
	MoveComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::FireInDirection(const FVector& ShooterDirection)
{
	MoveComp->Velocity = ShooterDirection * MoveComp->InitialSpeed;

}
