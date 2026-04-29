// Fill out your copyright notice in the Description page of Project Settings.


#include "Views/BaseUIView.h"
#include "Utilities/UViewModelFactory.h"

void UBaseUIView::InitializeView(TScriptInterface<IUIModel> Model)
{
	UBaseUIViewModel* viewModel = GetWorld()->GetGameInstance<UUViewModelFactory>()->CreateViewModelForView(this);
	if (IsValid(viewModel))
	{
		BoundViewModel = viewModel;
		viewModel->InitializeViewModel(Model, this);
	}
}

void UBaseUIView::UpdateModel()
{
}

void UBaseUIView::BindViewModel(TScriptInterface<IUIViewModel> ViewModel)
{
	BoundViewModel = ViewModel;
}

TScriptInterface<IDataCarrier> UBaseUIView::GetDataFromModel()
{
	return nullptr;
}

void UBaseUIView::CreateSubViews(TArray<UBaseDataCarrier*> dataCarriers)
{
	for (UBaseDataCarrier* dataCarrier : dataCarriers)
	{
		UpdateSubView(dataCarrier);
	}
}
