// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DataCarrier.h"
#include "UIView.generated.h"

UINTERFACE(MinimalAPI)
class UUIView : public UInterface
{
	GENERATED_BODY()
};

/// <summary>
 /// Author: Prashant D
 /// Description: Base interface for creating all UI Views
 /// </summary>
class DATADRIVENUI_API IUIView
{
	GENERATED_BODY()

public:

	/// <summary>
	/// Method used to get data from the model.
	/// </summary>
	virtual TScriptInterface<IDataCarrier> GetDataFromModel() PURE_VIRTUAL(GetDataFromModel(), return nullptr;);

};
