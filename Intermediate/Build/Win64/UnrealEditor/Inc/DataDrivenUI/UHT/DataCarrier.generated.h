// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DataCarrier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATADRIVENUI_DataCarrier_generated_h
#error "DataCarrier.generated.h already included, missing '#pragma once' in DataCarrier.h"
#endif
#define DATADRIVENUI_DataCarrier_generated_h

#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATADRIVENUI_API UDataCarrier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataCarrier(UDataCarrier&&); \
	UDataCarrier(const UDataCarrier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATADRIVENUI_API, UDataCarrier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataCarrier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataCarrier) \
	DATADRIVENUI_API virtual ~UDataCarrier();


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataCarrier(); \
	friend struct Z_Construct_UClass_UDataCarrier_Statics; \
public: \
	DECLARE_CLASS(UDataCarrier, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataDrivenUI"), DATADRIVENUI_API) \
	DECLARE_SERIALIZER(UDataCarrier)


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_13_GENERATED_UINTERFACE_BODY() \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataCarrier() {} \
public: \
	typedef UDataCarrier UClassType; \
	typedef IDataCarrier ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_10_PROLOG
#define FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATADRIVENUI_API UClass* StaticClass<class UDataCarrier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HubWorldMMO_Plugins_Developer_DataDrivenUI_Source_DataDrivenUI_Public_Interfaces_DataCarrier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
