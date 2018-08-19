// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PatrollingGuard.h"
#include "GetMovePoints.generated.h"


/**
 * 
 */
UCLASS()
class TESTING_GROUNDS_API UGetMovePoints : public UBTTaskNode
{
	GENERATED_BODY()
		virtual EBTNodeResult::Type ExecuteTask
		(
			UBehaviorTreeComponent & OwnerComp,
			uint8 * NodeMemory
		) override;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	
		struct FBlackboardKeySelector Location;
	APatrollingGuard* CurrentGuard;
	uint16 i = 0;
	
};
