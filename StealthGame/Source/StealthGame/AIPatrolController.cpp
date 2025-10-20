// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPatrolController.h"

#include "AIPatrol.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AAIPatrolController::AAIPatrolController()
{
	BehaviorComp=CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp=CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	PlayerKey="Target";
	LocationToGoKey="LocationToGo";
	
}

void AAIPatrolController::OnPossess(APawn* Pawn)
{
	Super::OnPossess(Pawn);

	AAIPatrol* AICharacter = Cast<AAIPatrol>(Pawn);
	if (AICharacter)
	{
		if (AICharacter->BehaviorTree->BlackboardAsset)
		{
			BlackboardComp->InitializeBlackboard(*(AICharacter->BehaviorTree->BlackboardAsset));
		}
	}
}
