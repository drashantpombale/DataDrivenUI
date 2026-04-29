// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/DataCarrier.h"
#include "Interfaces/UIView.h"
#include "BaseDataCarrier.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Base class for Data Carrier objects which are used to link the model and sub views.
/// </summary>
UCLASS(BlueprintType)
class DATADRIVENUI_API UBaseDataCarrier : public UObject, public IDataCarrier
{
	GENERATED_BODY()
	
private:
	TScriptInterface<IUIView> boundView;


	UPROPERTY()
	FString tag;

public:
	UFUNCTION(BlueprintCallable)
	TScriptInterface<IUIView> GetBoundView();
	UFUNCTION(BlueprintCallable)
	void SetBoundView(TScriptInterface<IUIView> InView);
	UFUNCTION(BlueprintCallable)
	virtual void UpdateBoundView();

	UFUNCTION(BlueprintCallable)
	FString GetDCTag();
	void SetDCTag(FString tag);
};
