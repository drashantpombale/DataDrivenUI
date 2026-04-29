// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/UIView.h"
#include "Models/BaseUIModel.h"
#include "ViewModels/BaseUIViewModel.h"
#include "Commons/CarrierViewMapping.h"
#include "BaseUIView.generated.h"

/// <summary>
/// Author: Prashant D
/// Description: Base interface class for creating UI Views, this is a generic class that has the functionality required for most of the views, in case of views that need some
/// additional functionality please create a new class inheriting the IUIView interface
/// </summary>
UCLASS()
class DATADRIVENUI_API UBaseUIView : public UUserWidget, public IUIView
{
	GENERATED_BODY()
	
public:

#pragma region InterfaceOverrides
	virtual void InitializeView(TScriptInterface<IUIModel> Model);
	virtual void UpdateModel();
	virtual void BindViewModel(TScriptInterface<IUIViewModel> ViewModel);
#pragma endregion InterfaceOverrides

	/// <summary>
	/// A mapping between data carrier classes and their corresponding user widget(view) classes.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mappings")
	TMap<TSubclassOf<UBaseDataCarrier>, TSubclassOf<UUserWidget>> carrierViewMapping;

	virtual TScriptInterface<IDataCarrier> GetDataFromModel() override;
	
	/// <summary>
	/// Update sub view with updated model data that it is bound to.
	/// </summary>
	/// <param name="_dataCarrier"></param>
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateSubView(UBaseDataCarrier* _dataCarrier);

	/// <summary>
	/// Create sub views based on the data carriers provided, this will create a view for each data carrier based on the mapping provided in the carrierViewMapping property.
	/// </summary>
	/// <param name="dataCarriers"></param>
	UFUNCTION()
	void CreateSubViews(TArray<UBaseDataCarrier*> dataCarriers);

protected:

    /// <summary>
    /// The view model that this view is bound to, can be null in case where the view does not need a view model.
    /// </summary>
    UPROPERTY()
	TScriptInterface<IUIViewModel> BoundViewModel;


	
};
