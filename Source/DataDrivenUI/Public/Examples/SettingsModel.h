// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Models/BaseUIModel.h"
#include "DataCarrier/FloatDataCarrier.h"
#include "DataCarrier/StringDataCarrier.h"
#include "DataCarrier/BoolDataCarrier.h"
#include "SettingsModel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DATADRIVENUI_API USettingsModel : public UBaseUIModel
{
	GENERATED_BODY()
	
public:

	UFloatDataCarrier* musicVolume;
	UFloatDataCarrier* sfxVolume;
	UFloatDataCarrier* mainVolume;

	UStringDataCarrier* name;
	UBoolDataCarrier* musicOn;

	virtual void InitializeModel() override;

	virtual TScriptInterface<IDataCarrier> UpdateModel() override;

	virtual TScriptInterface<IDataCarrier> GetCurrentData() override;

	virtual TArray<TScriptInterface<IDataCarrier>> GetDataCarrier() override;

protected:



};
