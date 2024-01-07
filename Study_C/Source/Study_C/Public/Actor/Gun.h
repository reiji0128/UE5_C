// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class STUDY_C_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// �ˌ�����
	void OnFire();

protected:

	// SceneComponent
	UPROPERTY(VisibleAnywhere, Category = Gun, meta = (AllowPrivateAccess = true))
	USceneComponent* SceneComp;

	// �X�^�e�B�b�N���b�V���R���|�[�l���g
	UPROPERTY(VisibleAnywhere, Category = Gun, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* GunMesh;

};
