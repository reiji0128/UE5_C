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

	// 所有されたときに自動で呼ばれる
	virtual void OnPossess(APawn* InPawn) override;


	// ビヘイビアツリー
	UPROPERTY(EditDefaultsOnly, Category = AI)
	UBehaviorTree* BehaviorTree;

	// ビヘイビアツリーコンポーネント
	UPROPERTY()
	UBehaviorTreeComponent* BehaviorComp;

	// ブラックボードコンポーネント
	UPROPERTY()
	UBlackboardComponent* BlackboardComp;
	
};
