// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "BoolDataCarrier.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Base class for data carriers that hold a boolean value.
/// </summary>
UCLASS(BlueprintType)
class DATADRIVENUI_API UBoolDataCarrier : public UBaseDataCarrier
{
	GENERATED_BODY()
	
private:
	bool data;

public:
	UFUNCTION(BlueprintCallable)
	bool GetData();
	UFUNCTION(BlueprintCallable)
	void SetData(bool val);
};
