// Fill out your copyright notice in the Description page of Project Settings.


#include "DataCarrier/ArrayDataCarrier.h"

TArray<UBaseDataCarrier*> UArrayDataCarrier::GetData()
{
	return data;
}

void UArrayDataCarrier::SetData(UBaseDataCarrier* val)
{
	data.Add(val);
}
