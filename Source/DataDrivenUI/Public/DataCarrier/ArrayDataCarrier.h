// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "ArrayDataCarrier.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Data carrier that holds an array of UBaseDataCarrier objects.
/// </summary>
UCLASS(BlueprintType)
class DATADRIVENUI_API UArrayDataCarrier : public UBaseDataCarrier
{
	GENERATED_BODY()
	
private:
	TArray<UBaseDataCarrier*> data;

public:
	UFUNCTION(BlueprintCallable)
	TArray<UBaseDataCarrier*> GetData();
	UFUNCTION(BlueprintCallable)
	void SetData(UBaseDataCarrier* val);

};
