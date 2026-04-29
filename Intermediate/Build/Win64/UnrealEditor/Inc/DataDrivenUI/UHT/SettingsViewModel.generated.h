// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Examples/SettingsViewModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_SettingsViewModel_generated_h
#error "SettingsViewModel.generated.h already included, missing '#pragma once' in SettingsViewModel.h"
#endif
#define DATADRIVENUI_SettingsViewModel_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsViewModel(); \
	friend struct Z_Construct_UClass_USettingsViewModel_Statics; \
public: \
	DECLARE_CLASS(USettingsViewModel, UBaseUIViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(USettingsViewModel)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USettingsViewModel(USettingsViewModel&&); \
	USettingsViewModel(const USettingsViewModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsViewModel) \
	NO_API virtual ~USettingsViewModel();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_12_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_15_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class USettingsViewModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsViewModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
