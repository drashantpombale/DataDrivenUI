// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/UViewModelFactory.h"
#include "Utilities/ViewModelMapping.h"

UBaseUIViewModel* UUViewModelFactory::CreateViewModelForView(UBaseUIView* View)
{
    if (!View) return nullptr;
    UViewModelMapping* modelMapping = Cast<UViewModelMapping>(LoadObject<UViewModelMapping>(nullptr, TEXT("/DataDrivenUI/DataAssets/ViewModelMapping.ViewModelMapping")));
    for (const FViewModelMappingData& Mapping : modelMapping->MappingData)
    {
        if (Mapping.ViewClass->IsChildOf(View->GetClass()))
        {
            UBaseUIViewModel* ViewModel = NewObject<UBaseUIViewModel>(View, Mapping.ViewModelClass);
            if (ViewModel)
            {
                return ViewModel;
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("No ViewModel found for View: %s"), *View->GetName());
    return nullptr;
}
