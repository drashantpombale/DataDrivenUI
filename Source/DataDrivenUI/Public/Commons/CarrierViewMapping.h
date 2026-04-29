// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "CarrierViewMapping.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Structure to map a data carrier to a widget.
/// </summary>
USTRUCT(BlueprintType)
struct DATADRIVENUI_API FCarrierViewMapping
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UBaseDataCarrier> dataCarrier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UUserWidget> widget;
};
