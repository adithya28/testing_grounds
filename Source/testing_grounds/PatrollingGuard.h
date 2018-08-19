// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"Engine/TargetPoint.h"
#include "testing_groundsCharacter.h"
#include "PatrollingGuard.generated.h"
/**
 * 
 */
UCLASS()
class TESTING_GROUNDS_API APatrollingGuard : public Atesting_groundsCharacter
{
	GENERATED_BODY()
public:
		UPROPERTY(EditAnywhere, Category = "Targetpoints")
		TArray<ATargetPoint*>MovePoints;
	
	
	
};
