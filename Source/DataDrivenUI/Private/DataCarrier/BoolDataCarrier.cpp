// Fill out your copyright notice in the Description page of Project Settings.


#include "DataCarrier/BoolDataCarrier.h"

bool UBoolDataCarrier::GetData()
{
	return data;
}

void UBoolDataCarrier::SetData(bool val)
{
	data = val;
}