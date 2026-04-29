// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/BaseUIViewModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_BaseUIViewModel_generated_h
#error "BaseUIViewModel.generated.h already included, missing '#pragma once' in BaseUIViewModel.h"
#endif
#define DATADRIVENUI_BaseUIViewModel_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseUIViewModel(); \
	friend struct Z_Construct_UClass_UBaseUIViewModel_Statics; \
public: \
	DECLARE_CLASS(UBaseUIViewModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UBaseUIViewModel) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseUIViewModel*>(this); }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseUIViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseUIViewModel(UBaseUIViewModel&&); \
	UBaseUIViewModel(const UBaseUIViewModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseUIViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseUIViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseUIViewModel) \
	NO_API virtual ~UBaseUIViewModel();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_16_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_19_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UBaseUIViewModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_ViewModels_BaseUIViewModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
