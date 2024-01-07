// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/Gun.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Actor/Projectile.h"

// Sets default values
AGun::AGun()
{
 	// ���t���[��Tick���Ăяo��
	PrimaryActorTick.bCanEverTick = true;

	// SceneComponent�̒ǉ�
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;


	// �X�^�e�B�b�N���b�V���R���|�[�l���g�̒ǉ�
	GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	GunMesh->SetupAttachment(RootComponent);

	// ���b�V���̐ݒ�
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Mesh/Gun/Mesh/SM_AR4.SM_AR4"));
	GunMesh->SetStaticMesh(Mesh);

	// �}�e���A���̐ݒ�
	UMaterial* Material = LoadObject<UMaterial>(nullptr, TEXT("/Game/Mesh/Gun/Material/M_AR4.M_AR4"));
	GunMesh->SetMaterial(0, Material);

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::OnFire()
{
	// �e���̍��W�̎擾
	FVector MuzzleLocation = GunMesh->GetSocketLocation(TEXT("Muzzle_Socket"));

	// BP����Projectile�𐶐�
	FString Path = "/Game/ProjectileBP/Projectile.Projectile_C";
	TSubclassOf<AProjectile> ProjectileBP = TSoftClassPtr<AProjectile>(FSoftObjectPath(*Path)).LoadSynchronous();
	AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileBP);

	// �e���̍��W��ݒ�
	Projectile->SetActorLocation(MuzzleLocation);


	// �e���̉�]�̍��W
	FRotator MuzzleRotation = GunMesh->GetSocketRotation(TEXT("Muzzle_Socket"));

	MuzzleLocation = MuzzleRotation.Vector();
	Projectile->FireInDirection(MuzzleLocation);

}

