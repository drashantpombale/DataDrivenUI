// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/TradeUI.h"

void UTradeUI::InitializeView(TScriptInterface<IUIModel> Model)
{
	Super::InitializeView(Model);
}

void UTradeUI::UpdateModel()
{
}


TScriptInterface<IDataCarrier> UTradeUI::GetDataFromModel()
{
	return nullptr;
}
