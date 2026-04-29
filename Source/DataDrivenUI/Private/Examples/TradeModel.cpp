// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/TradeModel.h"
#include "Net/UnrealNetwork.h"


void UTradeModel::InitializeModel()
{
    ownItems.Empty();
    theirItems.Empty();
    for(int i = 0; i < 5; ++i)
    {
        UItemDataCarrier* item = NewObject<UItemDataCarrier>(this, UItemDataCarrier::StaticClass());
        item->SetData(nullptr, FString("Item").Append(FString::FromInt(i+1)));
        ownItems.Add(item);
	}

    for (int i = 0; i < 5; ++i)
    {
        UItemDataCarrier* item = NewObject<UItemDataCarrier>(this, UItemDataCarrier::StaticClass());
        item->SetData(nullptr, FString("Item").Append(FString::FromInt(i + 6)));
        theirItems.Add(item);
    }
}

TScriptInterface<IDataCarrier> UTradeModel::UpdateModel()
{
    return TScriptInterface<IDataCarrier>();
}

TScriptInterface<IDataCarrier> UTradeModel::GetCurrentData()
{
    return TScriptInterface<IDataCarrier>();
}

TArray<TScriptInterface<IDataCarrier>> UTradeModel::GetDataCarrier()
{
	TArray<TScriptInterface<IDataCarrier>> dataCarriers;
    for(UItemDataCarrier* item : ownItems)
    {
        if (item)
        {
            dataCarriers.Add(item);
        }
    }
	return dataCarriers;
}

void UTradeModel::OnRep_Theirtems(TArray<UItemDataCarrier*> _items)
{
}
 

void UTradeModel::AcceptItems(TArray<UItemDataCarrier*> newItems)
{
} 


void UTradeModel::OnRep_OwnItems(TArray<UItemDataCarrier*> _items)
{
}

void UTradeModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    // Call the Super
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Add properties to replicated for the derived class
    DOREPLIFETIME(UTradeModel, ownItems);
    DOREPLIFETIME(UTradeModel, theirItems);
}
