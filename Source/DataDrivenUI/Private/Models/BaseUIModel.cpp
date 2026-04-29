// Fill out your copyright notice in the Description page of Project Settings.


#include "Models/BaseUIModel.h"

void UBaseUIModel::InitializeModel()
{

}

TScriptInterface<IDataCarrier> UBaseUIModel::UpdateModel()
{
	return nullptr;
}

TScriptInterface<IDataCarrier> UBaseUIModel::GetCurrentData()
{
	return nullptr;
}

TArray<TScriptInterface<IDataCarrier>> UBaseUIModel::GetDataCarrier()
{
	return {};
}
