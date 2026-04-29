// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/ItemDataCarrier.h"

void UItemDataCarrier::GetData(UImage*& OutImage, FString& OutItemname)
{
	OutImage = itemImage;
	OutItemname = itemName;
}

void UItemDataCarrier::SetData(UImage* image, FString name)
{
	itemImage = image;
	itemName = name;
}
