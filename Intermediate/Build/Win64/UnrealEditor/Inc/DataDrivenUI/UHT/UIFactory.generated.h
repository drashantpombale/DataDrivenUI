// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UIFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_UIFactory_generated_h
#error "UIFactory.generated.h already included, missing '#pragma once' in UIFactory.h"
#endif
#define DATADRIVENUI_UIFactory_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVENUI_API UUIFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIFactory(UUIFactory&&); \
	UUIFactory(const UUIFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVENUI_API, UUIFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFactory) \
	DATADRIVENUI_API virtual ~UUIFactory();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIFactory(); \
	friend struct Z_Construct_UClass_UUIFactory_Statics; \
public: \
	DECLARE_CLASS(UUIFactory, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), DATADRIVENUI_API) \
	DECLARE_SERIALIZER(UUIFactory)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_12_GENERATED_UINTERFACE_BODY() \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIFactory() {} \
public: \
	typedef UUIFactory UClassType; \
	typedef IUIFactory ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_9_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UUIFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_UIFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
