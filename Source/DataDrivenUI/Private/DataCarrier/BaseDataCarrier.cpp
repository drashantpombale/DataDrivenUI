// Fill out your copyright notice in the Description page of Project Settings.


#include "DataCarrier/BaseDataCarrier.h"

TScriptInterface<IUIView> UBaseDataCarrier::GetBoundView()
{
	return boundView;
}

void UBaseDataCarrier::SetBoundView(TScriptInterface<IUIView> InView)
{
	boundView = InView;
}

void UBaseDataCarrier::UpdateBoundView()
{

}

FString UBaseDataCarrier::GetDCTag()
{
	return tag;
}

void UBaseDataCarrier::SetDCTag(FString _tag)
{
	tag = _tag;
}
