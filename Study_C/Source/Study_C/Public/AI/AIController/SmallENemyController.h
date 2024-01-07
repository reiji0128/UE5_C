// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SmallENemyController.generated.h"

class APawn;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;

/**
 * 
 */
UCLASS()
class STUDY_C_API ASmallENemyController : public AAIController
{
	GENERATED_BODY()

public:

	ASmallENemyController();

	virtual void BeginPlay() override;

private:

	// ���L���ꂽ�Ƃ��Ɏ����ŌĂ΂��
	virtual void OnPossess(APawn* InPawn) override;


	// �r�w�C�r�A�c���[
	UPROPERTY(EditDefaultsOnly, Category = AI)
	UBehaviorTree* BehaviorTree;

	// �r�w�C�r�A�c���[�R���|�[�l���g
	UPROPERTY()
	UBehaviorTreeComponent* BehaviorComp;

	// �u���b�N�{�[�h�R���|�[�l���g
	UPROPERTY()
	UBlackboardComponent* BlackboardComp;
	
};
