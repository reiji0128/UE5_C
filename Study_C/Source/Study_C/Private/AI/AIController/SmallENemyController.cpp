// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AIController/SmallENemyController.h"
#include "UObject/ConstructorHelpers.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

ASmallENemyController::ASmallENemyController()
{
	// �r�w�C�r�A�c���[�R���|�[�l���g�̒ǉ�
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));

	// �u���b�N�{�[�h�R���|�[�l���g�̒ǉ�
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));


	// �r�w�C�r�A�c���[��ݒ�
	ConstructorHelpers::FObjectFinder<UBehaviorTree> BTFinder(TEXT("/Game/AI/BT_LargeEnemy.BT_LargeEnemy"));
	BehaviorTree = BTFinder.Object;

}

void ASmallENemyController::BeginPlay()
{
}

void ASmallENemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// AIController��Pawn���������ۂ�BB��BT���g�p
	BlackboardComp->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	BehaviorComp->StartTree(*BehaviorTree);
}
