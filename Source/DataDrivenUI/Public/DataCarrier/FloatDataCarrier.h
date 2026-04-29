// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "FloatDataCarrier.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Base class for data carriers that hold a float value.
/// </summary>
UCLASS(BlueprintType)
class DATADRIVENUI_API UFloatDataCarrier : public UBaseDataCarrier
{
	GENERATED_BODY()
	
private:
	float data;

public:
	UFUNCTION(BlueprintCallable)
	float GetData();
	UFUNCTION(BlueprintCallable)
	void SetData(float val);
};
