// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPatrolController.h"

#include "AIPatrol.h"
#include "AIPatrolTargetPoint.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

AAIPatrolController::AAIPatrolController()
{
	BehaviorComp=CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp=CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	PlayerKey="Target";
	LocationToGoKey="LocationToGo";
	CurrentPatrolPoint=0;
}

void AAIPatrolController::SetPlayerCaught(APawn* BPawn)
{
	if (BlackboardComp)
	{
		BlackboardComp->SetValueAsObject(PlayerKey,BPawn);
	}
}

void AAIPatrolController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AAIPatrol* AICharacter = Cast<AAIPatrol>(InPawn);
	if (AICharacter)
	{
		if (AICharacter->BehaviorTree->BlackboardAsset)
		{
			BlackboardComp->InitializeBlackboard(*(AICharacter->BehaviorTree->BlackboardAsset));
		}
		UGameplayStatics::GetAllActorsOfClass(GetWorld(),AAIPatrolTargetPoint::StaticClass(),PatrolPoints);
		BehaviorComp->StartTree(*AICharacter->BehaviorTree);
	}
}
