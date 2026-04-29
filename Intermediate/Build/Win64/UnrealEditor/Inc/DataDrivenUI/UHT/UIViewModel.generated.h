// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UIViewModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_UIViewModel_generated_h
#error "UIViewModel.generated.h already included, missing '#pragma once' in UIViewModel.h"
#endif
#define DATADRIVENUI_UIViewModel_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVENUI_API UUIViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIViewModel(UUIViewModel&&); \
	UUIViewModel(const UUIViewModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVENUI_API, UUIViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIViewModel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIViewModel) \
	DATADRIVENUI_API virtual ~UUIViewModel();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIViewModel(); \
	friend struct Z_Construct_UClass_UUIViewModel_Statics; \
public: \
	DECLARE_CLASS(UUIViewModel, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), DATADRIVENUI_API) \
	DECLARE_SERIALIZER(UUIViewModel)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIViewModel() {} \
public: \
	typedef UUIViewModel UClassType; \
	typedef IUIViewModel ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_12_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UUIViewModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIViewModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
