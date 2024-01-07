// Fill out your copyright notice in the Description page of Project Settings.


#include "Wepaon/Weapon.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWeapon::AWeapon()
{
	// SceneComponent‚Ì’Ç‰Á
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;

	// StaticMeshComponent‚Ì’Ç‰Á
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	WeaponMesh->SetupAttachment(RootComponent);

	// StaticMesh‚ğİ’è
	UStaticMesh* StaticMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Mesh/Weapon_Pack/Mesh/SM_Axe"));
	WeaponMesh->SetStaticMesh(StaticMesh);

	// Material‚ğİ’è
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

