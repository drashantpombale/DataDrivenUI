// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DataCarrier.h"
#include "UIModel.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UUIModel : public UInterface
{
	GENERATED_BODY()
};

 /// <summary>
 /// Author: Prashant D
 /// Description: Base interface for creating all UI Models to update corresponding Views
 /// </summary>
class DATADRIVENUI_API IUIModel
{
	GENERATED_BODY()

public:
	/// <summary>
	/// Used to initialize the model with default values or configurations.
	/// </summary>
	virtual void InitializeModel() PURE_VIRTUAL(InitializeModel, return;)

	/// <summary>
	/// Method used to update the model data
	/// </summary>
	virtual TScriptInterface<IDataCarrier> UpdateModel() PURE_VIRTUAL(GetData, return nullptr;)

	/// <summary>
	/// Method used to get the current data from the model
	/// </summary>
	virtual TScriptInterface<IDataCarrier> GetCurrentData() PURE_VIRTUAL(GetCurrentData, return nullptr;);

	/// <summary>
	/// Gets the data carrier associated with this model.
	/// </summary>
    virtual TArray<TScriptInterface<IDataCarrier>> GetDataCarrier() PURE_VIRTUAL(GetDataCarrier, return {};);
	

};
