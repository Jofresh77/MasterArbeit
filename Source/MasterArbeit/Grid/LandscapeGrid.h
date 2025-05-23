﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LandscapeGrid.generated.h"

UCLASS()
class MASTERARBEIT_API ALandscapeGrid : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALandscapeGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool LocateTileCenter(const FVector& CachedDestination, FVector& OutTileCenter);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool GetTileLocation(int Row, int Col, FVector& OutTileLocation);
};
