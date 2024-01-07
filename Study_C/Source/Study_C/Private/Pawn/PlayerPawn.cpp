// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/PlayerPawn.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Component/MyFloatingPawnMovement.h"
#include "Actor/Gun.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
	// SceneComponentの追加
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;


	// SkeletalMeshComponentの追加
	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	CharacterMesh->SetupAttachment(RootComponent);

	// SkeletalMeshComponentのSkeletalMeshを設定
	USkeletalMesh* SkeletalMesh = LoadObject<USkeletalMesh>(nullptr, TEXT("/Game/SkeletalMesh/Mesh/SK_Mannequin"));
	CharacterMesh->SetSkeletalMesh(SkeletalMesh);

	// SkeletalMeshComponentのMaterialを設定
	UMaterial* Material0 = LoadObject<UMaterial>(nullptr, TEXT("/Game/SkeletalMesh/Materials/M_UE4Man_Body"));
	UMaterial* Material1 = LoadObject<UMaterial>(nullptr, TEXT("/Game/SkeletalMesh/Materials/M_UE4Man_ChestLogo"));
	CharacterMesh->SetMaterial(0, Material0);
	CharacterMesh->SetMaterial(1, Material1);

	// Simulate Physicsを有効
	CharacterMesh->CanEditSimulatePhysics();


	// AnimationBPの設定
	FString AnimBPPath = TEXT("/Game/AnimInstance/BP_PlayerAnim.BP_PlayerAnim");
	AnimInstance = LoadObject<UAnimInstance>(nullptr, *AnimBPPath);

	CharacterMesh->SetAnimInstanceClass(AnimInstance)

	// SpringArmComponentの追加
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm->SetupAttachment(RootComponent);

	// 座標の調整
	SpringArm->SetRelativeLocation(FVector(50.0f, 0.0f, 500.0f));

	// 角度を変更する FRotator(Pitch(Y), Yaw(Z), Roll(X))
	SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));

	// Spring Armの長さを調整する
	SpringArm->TargetArmLength = 450.0f;

	// SpringArmからの角度を継承しない
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;

	// CameraのLagを有効にする
	SpringArm->bEnableCameraLag = true;


	// CamraComponentの追加
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(SpringArm);


	// UMyFloatingPawnMovementの追加
	PawnMovement = CreateDefaultSubobject<UMyFloatingPawnMovement>(TEXT("MyFloatingPawnMovement"));

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
	FString Path = "/Game/GunBP/Gun.Gun_C";
	TSubclassOf<AGun> GunBP = TSoftClassPtr<AGun>(FSoftObjectPath(*Path)).LoadSynchronous();
	Gun = GetWorld()->SpawnActor<AGun>(GunBP);

	FVector WeaponSocketLocation = CharacterMesh->GetSocketLocation("Weapon_Socket");

	Gun->SetActorLocation(WeaponSocketLocation);

	FRotator WeaponSocketRotation = CharacterMesh->GetSocketRotation("Weapon_Socket");
	Gun->SetActorRotation(WeaponSocketRotation);
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Shot", IE_Pressed, this, &APlayerPawn::Shot);

}

void APlayerPawn::Shot()
{
	Gun->OnFire();
}
