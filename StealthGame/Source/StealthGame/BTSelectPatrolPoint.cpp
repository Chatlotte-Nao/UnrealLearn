// Fill out your copyright notice in the Description page of Project Settings.

#include "BTSelectPatrolPoint.h"

#include "AIPatrolController.h"
#include "AIPatrolTargetPoint.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTSelectPatrolPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIPatrolController* AICon=Cast<AAIPatrolController>(OwnerComp.GetAIOwner());
	if (AICon)
	{
		UBlackboardComponent* BlackboardComp=AICon->GetBlackboardComp();
		AAIPatrolController* CurrentPoint=Cast<AAIPatrolController>(BlackboardComp->GetValueAsObject("LocationToGo"));
		TArray<AActor*> AvailablePatrolPoints=AICon->GetPatrolPoints();
		AAIPatrolTargetPoint* NextPatrolPoint=nullptr;

		if (AICon->CurrentPatrolPoint!=AvailablePatrolPoints.Num()-1)
		{
			NextPatrolPoint=Cast<AAIPatrolTargetPoint>(AvailablePatrolPoints[++AICon->CurrentPatrolPoint]);
		}
		else
		{
			NextPatrolPoint=Cast<AAIPatrolTargetPoint>(AvailablePatrolPoints[0]);
			AICon->CurrentPatrolPoint=0;
		}
		BlackboardComp->SetValueAsObject("LocationToGo",NextPatrolPoint);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
