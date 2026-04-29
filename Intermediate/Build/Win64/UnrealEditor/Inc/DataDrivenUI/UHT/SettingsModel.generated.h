// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Examples/SettingsModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_SettingsModel_generated_h
#error "SettingsModel.generated.h already included, missing '#pragma once' in SettingsModel.h"
#endif
#define DATADRIVENUI_SettingsModel_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsModel(); \
	friend struct Z_Construct_UClass_USettingsModel_Statics; \
public: \
	DECLARE_CLASS(USettingsModel, UBaseUIModel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(USettingsModel)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USettingsModel(USettingsModel&&); \
	USettingsModel(const USettingsModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsModel) \
	NO_API virtual ~USettingsModel();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_15_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_18_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class USettingsModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Examples_SettingsModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
