// Fill out your copyright notice in the Description page of Project Settings.


#include "DataCarrier/FloatDataCarrier.h"

float UFloatDataCarrier::GetData()
{
	return data;
}

void UFloatDataCarrier::SetData(float val)
{
	data = val;
}
