// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DataCarrier.h"
#include "UIViewModel.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UUIViewModel : public UInterface
{
	GENERATED_BODY()
};

 /// <summary>
 /// Author: Prashant D
 /// Description: Base interface for creating all UI View Models that will manage their corresponding View
 /// </summary>
class DATADRIVENUI_API IUIViewModel
{
	GENERATED_BODY()

public:
	/// <summary>
	/// Author: Prashant D
	/// Description : Method to get the data from the model
	/// </summary>
	virtual TScriptInterface<IDataCarrier> GetDataFromModel() PURE_VIRTUAL(GetDataFromModel, return nullptr;);
};
