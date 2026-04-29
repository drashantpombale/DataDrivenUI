// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "IntDataCarrier.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Base class for data carriers that hold an integer value.
/// </summary>
UCLASS(BlueprintType)
class DATADRIVENUI_API UIntDataCarrier : public UBaseDataCarrier
{
	GENERATED_BODY()

private:
	int data;

public:
	UFUNCTION(BlueprintCallable)
	int GetData();
	UFUNCTION(BlueprintCallable)
	void SetData(int val);

};
