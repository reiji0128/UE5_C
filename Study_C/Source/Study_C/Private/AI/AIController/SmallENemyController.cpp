// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AIController/SmallENemyController.h"
#include "UObject/ConstructorHelpers.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

ASmallENemyController::ASmallENemyController()
{
	// ビヘイビアツリーコンポーネントの追加
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));

	// ブラックボードコンポーネントの追加
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));


	// ビヘイビアツリーを設定
	ConstructorHelpers::FObjectFinder<UBehaviorTree> BTFinder(TEXT("/Game/AI/BT_LargeEnemy.BT_LargeEnemy"));
	BehaviorTree = BTFinder.Object;

}

void ASmallENemyController::BeginPlay()
{
}

void ASmallENemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// AIControllerがPawn所持した際にBBとBTを使用
	BlackboardComp->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	BehaviorComp->StartTree(*BehaviorTree);
}
