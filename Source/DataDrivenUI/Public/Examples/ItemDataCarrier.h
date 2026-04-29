// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataCarrier/BaseDataCarrier.h"
#include "Components/Image.h"
#include "ItemDataCarrier.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVENUI_API UItemDataCarrier : public UBaseDataCarrier
{
	GENERATED_BODY()

private:
	UImage* itemImage;
	FString itemName;
	bool IsSelected;

public:
	UFUNCTION(BlueprintCallable)
	void GetData(UImage*& OutImage, FString& OutItemname);
	UFUNCTION(BlueprintCallable)
	void SetData(UImage* image, FString name);


};
