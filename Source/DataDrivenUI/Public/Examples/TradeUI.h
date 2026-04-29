// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseSubView.h"
#include "Views/BaseUIView.h"
#include "TradeUI.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVENUI_API UTradeUI : public UBaseUIView	
{
	GENERATED_BODY()

public:
	void InitializeView(TScriptInterface<IUIModel> Model) override;


	void UpdateModel() override;


	TScriptInterface<IDataCarrier> GetDataFromModel() override;

};
