// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/UViewModelFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_UViewModelFactory_generated_h
#error "UViewModelFactory.generated.h already included, missing '#pragma once' in UViewModelFactory.h"
#endif
#define DATADRIVENUI_UViewModelFactory_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUViewModelFactory(); \
	friend struct Z_Construct_UClass_UUViewModelFactory_Statics; \
public: \
	DECLARE_CLASS(UUViewModelFactory, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), NO_API) \
	DECLARE_SERIALIZER(UUViewModelFactory) \
	virtual UObject* _getUObject() const override { return const_cast<UUViewModelFactory*>(this); }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUViewModelFactory(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUViewModelFactory(UUViewModelFactory&&); \
	UUViewModelFactory(const UUViewModelFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUViewModelFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUViewModelFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUViewModelFactory) \
	NO_API virtual ~UUViewModelFactory();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_16_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_19_INCLASS_NO_PURE_DECLS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UUViewModelFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Utilities_UViewModelFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
