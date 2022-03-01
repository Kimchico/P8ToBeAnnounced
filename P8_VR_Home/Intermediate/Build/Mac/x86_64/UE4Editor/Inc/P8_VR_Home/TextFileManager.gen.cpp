// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P8_VR_Home/TextFileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextFileManager() {}
// Cross Module References
	P8_VR_HOME_API UClass* Z_Construct_UClass_UTextFileManager_NoRegister();
	P8_VR_HOME_API UClass* Z_Construct_UClass_UTextFileManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_P8_VR_Home();
// End Cross Module References
	DEFINE_FUNCTION(UTextFileManager::execsave_array_text)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_save_directory);
		P_GET_PROPERTY(FStrProperty,Z_Param_file_name);
		P_GET_TARRAY(FString,Z_Param_save_text);
		P_GET_UBOOL(Z_Param_allow_overwriting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTextFileManager::save_array_text(Z_Param_save_directory,Z_Param_file_name,Z_Param_save_text,Z_Param_allow_overwriting);
		P_NATIVE_END;
	}
	void UTextFileManager::StaticRegisterNativesUTextFileManager()
	{
		UClass* Class = UTextFileManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "save_array_text", &UTextFileManager::execsave_array_text },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextFileManager_save_array_text_Statics
	{
		struct TextFileManager_eventsave_array_text_Parms
		{
			FString save_directory;
			FString file_name;
			TArray<FString> save_text;
			bool allow_overwriting;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_save_directory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file_name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_save_text_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_save_text;
		static void NewProp_allow_overwriting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allow_overwriting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_save_directory = { "save_directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventsave_array_text_Parms, save_directory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_file_name = { "file_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventsave_array_text_Parms, file_name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_save_text_Inner = { "save_text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_save_text = { "save_text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventsave_array_text_Parms, save_text), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_allow_overwriting_SetBit(void* Obj)
	{
		((TextFileManager_eventsave_array_text_Parms*)Obj)->allow_overwriting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_allow_overwriting = { "allow_overwriting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextFileManager_eventsave_array_text_Parms), &Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_allow_overwriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextFileManager_eventsave_array_text_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextFileManager_eventsave_array_text_Parms), &Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_save_directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_file_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_save_text_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_save_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_allow_overwriting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "keywords", "Save" },
		{ "ModuleRelativePath", "TextFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextFileManager, nullptr, "save_array_text", nullptr, nullptr, sizeof(TextFileManager_eventsave_array_text_Parms), Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextFileManager_save_array_text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextFileManager_save_array_text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextFileManager_NoRegister()
	{
		return UTextFileManager::StaticClass();
	}
	struct Z_Construct_UClass_UTextFileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextFileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_P8_VR_Home,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextFileManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextFileManager_save_array_text, "save_array_text" }, // 92689384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextFileManager.h" },
		{ "ModuleRelativePath", "TextFileManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextFileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextFileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextFileManager_Statics::ClassParams = {
		&UTextFileManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextFileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextFileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextFileManager, 3829173776);
	template<> P8_VR_HOME_API UClass* StaticClass<UTextFileManager>()
	{
		return UTextFileManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextFileManager(Z_Construct_UClass_UTextFileManager, &UTextFileManager::StaticClass, TEXT("/Script/P8_VR_Home"), TEXT("UTextFileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextFileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
