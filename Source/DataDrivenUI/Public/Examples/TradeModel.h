// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemDataCarrier.h"
#include "Models/BaseUIModel.h"
#include "TradeModel.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemsUpdate);
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DATADRIVENUI_API UTradeModel : public UBaseUIModel
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable)
	FItemsUpdate updateItems;

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_OwnItems)
	TArray<UItemDataCarrier*> ownItems;

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_Theirtems)
	TArray<UItemDataCarrier*> theirItems;

	UFUNCTION(BlueprintCallable)
	virtual void InitializeModel() override;

	virtual TScriptInterface<IDataCarrier> UpdateModel() override;

	virtual TScriptInterface<IDataCarrier> GetCurrentData() override;

	virtual TArray<TScriptInterface<IDataCarrier>> GetDataCarrier() override;

	UFUNCTION()
	void OnRep_OwnItems(TArray<UItemDataCarrier*> _items);

	UFUNCTION()
	void OnRep_Theirtems(TArray<UItemDataCarrier*> _items);

	UFUNCTION(BlueprintCallable)
	void AcceptItems(TArray<UItemDataCarrier*> newItems);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
