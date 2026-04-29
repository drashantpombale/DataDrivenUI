// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/UIView.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "Blueprint/UserWidget.h"
#include "BaseSubView.generated.h"

/// <summary>
/// Represents a base subclass of UUserWidget that implements the IUIView interface, providing support for parent views and data carriers in a data-driven UI system.
/// </summary>
UCLASS()
class DATADRIVENUI_API UBaseSubView : public UUserWidget, public IUIView
{
	GENERATED_BODY()
public:

	/// <summary>
	/// The parent view that this subview belongs to.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parent View")
	TScriptInterface<IUIView> parentView;

	/// <summary>
	/// The data carrier that this subview is bound to.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data Carrier ")
	UBaseDataCarrier* dataCarrier;	

	/// <summary>
	/// Method to get the data from model.
	/// </summary>
	/// <returns></returns>
	TScriptInterface<IDataCarrier> GetDataFromModel() override;
};
