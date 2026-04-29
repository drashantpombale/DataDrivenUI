// Fill out your copyright notice in the Description page of Project Settings.


#include "DataCarrier/StringDataCarrier.h"

FString UStringDataCarrier::GetData()
{
	return data;
}

void UStringDataCarrier::SetData(FString val)
{
	data = val;
}
