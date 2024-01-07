// Fill out your copyright notice in the Description page of Project Settings.


#include "Wepaon/Weapon.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWeapon::AWeapon()
{
	// SceneComponent�̒ǉ�
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;

	// StaticMeshComponent�̒ǉ�
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	WeaponMesh->SetupAttachment(RootComponent);

	// StaticMesh��ݒ�
	UStaticMesh* StaticMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Mesh/Weapon_Pack/Mesh/SM_Axe"));
	WeaponMesh->SetStaticMesh(StaticMesh);

	// Material��ݒ�
	UMaterial* Material = LoadObject<UMaterial>(nullptr, TEXT("/Game/Mesh/Weapon_Pack/Materials/M_WeaponSet_2"));
	WeaponMesh->SetMaterial(0, Material);

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

