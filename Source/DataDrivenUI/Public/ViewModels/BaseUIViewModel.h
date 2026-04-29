// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/UIViewModel.h"
#include "Interfaces/UIView.h"
#include "Interfaces/UIModel.h"
#include "BaseUIViewModel.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Base class for creating view models in DataDrivenUI.
/// </summary>
UCLASS()
class DATADRIVENUI_API UBaseUIViewModel : public UObject, public IUIViewModel
{
	GENERATED_BODY()
	
public:
	// Initializes the view model with the provided model and view.
	virtual void InitializeViewModel(const TScriptInterface<IUIModel>& InModel, const TScriptInterface<IUIView>& InView);

	//Get data from the model
	virtual TScriptInterface<IDataCarrier> GetDataFromModel() override;

protected:

	//Model that this view model is bound to
    UPROPERTY()
    TScriptInterface<IUIModel> BoundModel;

	//view that this view model is bound to
	UPROPERTY()
    TScriptInterface<IUIView> BoundView;
 
};
