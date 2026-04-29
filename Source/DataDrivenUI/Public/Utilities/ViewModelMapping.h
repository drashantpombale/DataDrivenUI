// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "Views/BaseUIView.h"
#include "ViewModels/BaseUIViewModel.h"
#include "ViewModelMapping.generated.h"

/// <summary>
/// Data asset for the struct to hold the mapping data between a View and its ViewModel.
/// </summary>
USTRUCT(BlueprintType)
struct FViewModelMappingData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSubclassOf<UBaseUIView> ViewClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSubclassOf<UBaseUIViewModel> ViewModelClass;
};

UCLASS(BlueprintType)
class DATADRIVENUI_API UViewModelMapping : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FViewModelMappingData> MappingData;

};