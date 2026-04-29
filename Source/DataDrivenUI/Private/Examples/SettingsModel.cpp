// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/SettingsModel.h"
#include "DataCarrier/FloatDataCarrier.h"
#include "DataCarrier/StringDataCarrier.h"
#include "DataCarrier/BoolDataCarrier.h"

void USettingsModel::InitializeModel()
{
	musicVolume = NewObject<UFloatDataCarrier>();
	musicVolume->SetDCTag("Music Volume");
	sfxVolume = NewObject<UFloatDataCarrier>();
	sfxVolume->SetDCTag("SFX Volume");
	mainVolume = NewObject<UFloatDataCarrier>();
	mainVolume->SetDCTag("Main Volume");

	name = NewObject<UStringDataCarrier>();
	name->SetDCTag("Name");
	musicOn = NewObject<UBoolDataCarrier>();
	musicOn->SetDCTag("Music ON/OFF");
}

TScriptInterface<IDataCarrier> USettingsModel::UpdateModel()
{
    return TScriptInterface<IDataCarrier>();
}

TScriptInterface<IDataCarrier> USettingsModel::GetCurrentData()
{
	return {};
}

TArray<TScriptInterface<IDataCarrier>> USettingsModel::GetDataCarrier()
{
	TArray<TScriptInterface<IDataCarrier>> dataCarriers;
	dataCarriers.Add(musicVolume);
	dataCarriers.Add(mainVolume);
	dataCarriers.Add(sfxVolume);
	dataCarriers.Add(name);
	dataCarriers.Add(musicOn);

	return dataCarriers;

}
