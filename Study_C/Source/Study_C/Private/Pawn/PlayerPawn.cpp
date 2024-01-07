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
	// SceneComponent�̒ǉ�
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;


	// SkeletalMeshComponent�̒ǉ�
	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	CharacterMesh->SetupAttachment(RootComponent);

	// SkeletalMeshComponent��SkeletalMesh��ݒ�
	USkeletalMesh* SkeletalMesh = LoadObject<USkeletalMesh>(nullptr, TEXT("/Game/SkeletalMesh/Mesh/SK_Mannequin"));
	CharacterMesh->SetSkeletalMesh(SkeletalMesh);

	// SkeletalMeshComponent��Material��ݒ�
	UMaterial* Material0 = LoadObject<UMaterial>(nullptr, TEXT("/Game/SkeletalMesh/Materials/M_UE4Man_Body"));
	UMaterial* Material1 = LoadObject<UMaterial>(nullptr, TEXT("/Game/SkeletalMesh/Materials/M_UE4Man_ChestLogo"));
	CharacterMesh->SetMaterial(0, Material0);
	CharacterMesh->SetMaterial(1, Material1);

	// Simulate Physics��L��
	CharacterMesh->CanEditSimulatePhysics();


	// AnimationBP�̐ݒ�
	FString AnimBPPath = TEXT("/Game/AnimInstance/BP_PlayerAnim.BP_PlayerAnim");
	AnimInstance = LoadObject<UAnimInstance>(nullptr, *AnimBPPath);

	CharacterMesh->SetAnimInstanceClass(AnimInstance)

	// SpringArmComponent�̒ǉ�
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm->SetupAttachment(RootComponent);

	// ���W�̒���
	SpringArm->SetRelativeLocation(FVector(50.0f, 0.0f, 500.0f));

	// �p�x��ύX���� FRotator(Pitch(Y), Yaw(Z), Roll(X))
	SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));

	// Spring Arm�̒����𒲐�����
	SpringArm->TargetArmLength = 450.0f;

	// SpringArm����̊p�x���p�����Ȃ�
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;

	// Camera��Lag��L���ɂ���
	SpringArm->bEnableCameraLag = true;


	// CamraComponent�̒ǉ�
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(SpringArm);


	// UMyFloatingPawnMovement�̒ǉ�
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
