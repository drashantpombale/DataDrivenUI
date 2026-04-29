// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DataCarrier.generated.h"


UINTERFACE(MinimalAPI)
class UDataCarrier : public UInterface
{
	GENERATED_BODY()
};

/// <summary>
/// Author: Prashant D
/// Description: Base interface for data carriers that can be used to pass data between different parts of the UI and link sub views and data model.
/// </summary>
class DATADRIVENUI_API IDataCarrier
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

};
