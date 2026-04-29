// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ViewModels/BaseUIViewModel.h"
#include "Views/BaseUIView.h"
#include "Interfaces/UIFactory.h"
#include "ViewModelMapping.h"
#include "UViewModelFactory.generated.h"

/// <summary>
/// Base factory for creating view models for respective views.
/// </summary>
UCLASS()
class DATADRIVENUI_API UUViewModelFactory : public UGameInstanceSubsystem, public IUIFactory
{
	GENERATED_BODY()
	
public:
	
	/// <summary>
	/// Pointer to the data asset that holds the mappings between views and view models.
	/// </summary>
	UPROPERTY(EditAnywhere, Category = "Factory")
	TObjectPtr<UViewModelMapping> ViewModelMappings;

	/// <summary>
	/// Default constructor.
	/// </summary>
	UBaseUIViewModel* CreateViewModelForView(UBaseUIView* View);
};
