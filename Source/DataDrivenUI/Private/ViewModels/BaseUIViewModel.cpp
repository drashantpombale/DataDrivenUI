// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewModels/BaseUIViewModel.h"
#include "Views/BaseUIView.h"

void UBaseUIViewModel::InitializeViewModel(const TScriptInterface<IUIModel>& InModel, const TScriptInterface<IUIView>& InView)
{
	BoundModel = InModel;
	if(BoundModel)
	{
		TArray<TScriptInterface<IDataCarrier>> dataCarriers = BoundModel->GetDataCarrier();
		TArray<UBaseDataCarrier*> baseDataCarriers;
		BoundView = InView;
		for (TScriptInterface<IDataCarrier> dataCarrier : dataCarriers)
		{
			baseDataCarriers.Add(Cast<UBaseDataCarrier>(dataCarrier.GetObject()));
		}
		UBaseUIView* view = Cast<UBaseUIView>(BoundView.GetObject());
		if (view)
		{
			view->CreateSubViews(baseDataCarriers);
		}
	}
}


TScriptInterface<IDataCarrier> UBaseUIViewModel::GetDataFromModel()
{
	return nullptr;
}


