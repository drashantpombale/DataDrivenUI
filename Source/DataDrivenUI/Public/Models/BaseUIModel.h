// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/UIModel.h"
#include "BaseUIModel.generated.h"


/// <summary>
/// Author: Prashant D
/// Description: Base class for creating UI Models, this is a generic class that has the functionality required for most of the models, in case of 
/// models that need some additional funcationality please create a new class inheriting the IUIModel interface
/// </summary>
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DATADRIVENUI_API UBaseUIModel : public UActorComponent, public IUIModel //TODO: Make actor component
{
	GENERATED_BODY()
	
public:	

	//Initialize the model with the given data carrier
	virtual void InitializeModel() override;

	//Update the model data
	virtual TScriptInterface<IDataCarrier> UpdateModel() override;

	//Get the current data of the model
	virtual TScriptInterface<IDataCarrier> GetCurrentData() override;

	//Get the data carrier associated with this model
	TArray<TScriptInterface<IDataCarrier>> GetDataCarrier() override;

};
