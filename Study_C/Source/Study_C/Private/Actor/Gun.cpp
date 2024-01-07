// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/Gun.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Actor/Projectile.h"

// Sets default values
AGun::AGun()
{
 	// 毎フレームTickを呼び出す
	PrimaryActorTick.bCanEverTick = true;

	// SceneComponentの追加
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;


	// スタティックメッシュコンポーネントの追加
	GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	GunMesh->SetupAttachment(RootComponent);

	// メッシュの設定
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Mesh/Gun/Mesh/SM_AR4.SM_AR4"));
	GunMesh->SetStaticMesh(Mesh);

	// マテリアルの設定
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
	// 銃口の座標の取得
	FVector MuzzleLocation = GunMesh->GetSocketLocation(TEXT("Muzzle_Socket"));

	// BPからProjectileを生成
	FString Path = "/Game/ProjectileBP/Projectile.Projectile_C";
	TSubclassOf<AProjectile> ProjectileBP = TSoftClassPtr<AProjectile>(FSoftObjectPath(*Path)).LoadSynchronous();
	AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileBP);

	// 銃口の座標を設定
	Projectile->SetActorLocation(MuzzleLocation);


	// 銃口の回転の座標
	FRotator MuzzleRotation = GunMesh->GetSocketRotation(TEXT("Muzzle_Socket"));

	MuzzleLocation = MuzzleRotation.Vector();
	Projectile->FireInDirection(MuzzleLocation);

}

