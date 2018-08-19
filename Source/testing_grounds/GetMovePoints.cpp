// Fill out your copyright notice in the Description page of Project Settings.
#include "GetMovePoints.h"

#include "MoveComponent.h"
#include"Classes/AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
EBTNodeResult::Type UGetMovePoints::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	auto Owner = OwnerComp.GetAIOwner();
	auto BlackboardComponent = OwnerComp.GetBlackboardComponent();
	

	auto Guard = Owner->GetCharacter();
	auto mover = Guard->FindComponentByClass<UMoveComponent>();
	
	auto TargetPoints = mover->MovePoints;
	auto len = TargetPoints.Num();

	if(ensure(TargetPoints[i]))
	BlackboardComponent->SetValueAsVector(Location.SelectedKeyName, TargetPoints[i]->GetActorLocation());
	i++;
	i %= len;
	return EBTNodeResult::Succeeded;
}