// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "StringDataCarrier.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Base class for data carriers that hold an string value.
/// </summary>
UCLASS(BlueprintType)
class DATADRIVENUI_API UStringDataCarrier : public UBaseDataCarrier
{
	GENERATED_BODY()
	
private:
	FString data;

public:
	UFUNCTION(BlueprintCallable)
	FString GetData();
	UFUNCTION(BlueprintCallable)
	void SetData(FString val);
};
