// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniPDGAssetLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGAssetLink() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
#if WITH_EDITORONLY_DATA
	static UEnum* EPDGBakePackageReplaceModeOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakePackageReplaceModeOption"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakePackageReplaceModeOption>()
	{
		return EPDGBakePackageReplaceModeOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGBakePackageReplaceModeOption(EPDGBakePackageReplaceModeOption_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGBakePackageReplaceModeOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Hash() { return 1842589856U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGBakePackageReplaceModeOption"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGBakePackageReplaceModeOption::CreateNewAssets", (int64)EPDGBakePackageReplaceModeOption::CreateNewAssets },
				{ "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets", (int64)EPDGBakePackageReplaceModeOption::ReplaceExistingAssets },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CreateNewAssets.Name", "EPDGBakePackageReplaceModeOption::CreateNewAssets" },
				{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
				{ "ReplaceExistingAssets.Name", "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGBakePackageReplaceModeOption",
				"EPDGBakePackageReplaceModeOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
	static UEnum* EPDGBakeSelectionOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakeSelectionOption"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakeSelectionOption>()
	{
		return EPDGBakeSelectionOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGBakeSelectionOption(EPDGBakeSelectionOption_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGBakeSelectionOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Hash() { return 1974176960U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGBakeSelectionOption"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGBakeSelectionOption::All", (int64)EPDGBakeSelectionOption::All },
				{ "EPDGBakeSelectionOption::SelectedNetwork", (int64)EPDGBakeSelectionOption::SelectedNetwork },
				{ "EPDGBakeSelectionOption::SelectedNode", (int64)EPDGBakeSelectionOption::SelectedNode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EPDGBakeSelectionOption::All" },
				{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
				{ "SelectedNetwork.Name", "EPDGBakeSelectionOption::SelectedNetwork" },
				{ "SelectedNode.Name", "EPDGBakeSelectionOption::SelectedNode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGBakeSelectionOption",
				"EPDGBakeSelectionOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
#endif // WITH_EDITORONLY_DATA
	static UEnum* EPDGWorkResultState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGWorkResultState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>()
	{
		return EPDGWorkResultState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGWorkResultState(EPDGWorkResultState_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGWorkResultState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Hash() { return 2136587144U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGWorkResultState"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGWorkResultState::None", (int64)EPDGWorkResultState::None },
				{ "EPDGWorkResultState::ToLoad", (int64)EPDGWorkResultState::ToLoad },
				{ "EPDGWorkResultState::Loading", (int64)EPDGWorkResultState::Loading },
				{ "EPDGWorkResultState::Loaded", (int64)EPDGWorkResultState::Loaded },
				{ "EPDGWorkResultState::ToDelete", (int64)EPDGWorkResultState::ToDelete },
				{ "EPDGWorkResultState::Deleting", (int64)EPDGWorkResultState::Deleting },
				{ "EPDGWorkResultState::Deleted", (int64)EPDGWorkResultState::Deleted },
				{ "EPDGWorkResultState::NotLoaded", (int64)EPDGWorkResultState::NotLoaded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Deleted.Name", "EPDGWorkResultState::Deleted" },
				{ "Deleting.Name", "EPDGWorkResultState::Deleting" },
				{ "Loaded.Name", "EPDGWorkResultState::Loaded" },
				{ "Loading.Name", "EPDGWorkResultState::Loading" },
				{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
				{ "None.Name", "EPDGWorkResultState::None" },
				{ "NotLoaded.Name", "EPDGWorkResultState::NotLoaded" },
				{ "ToDelete.Name", "EPDGWorkResultState::ToDelete" },
				{ "ToLoad.Name", "EPDGWorkResultState::ToLoad" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGWorkResultState",
				"EPDGWorkResultState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPDGNodeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGNodeState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>()
	{
		return EPDGNodeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGNodeState(EPDGNodeState_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGNodeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Hash() { return 1998236115U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGNodeState"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGNodeState::None", (int64)EPDGNodeState::None },
				{ "EPDGNodeState::Dirtied", (int64)EPDGNodeState::Dirtied },
				{ "EPDGNodeState::Dirtying", (int64)EPDGNodeState::Dirtying },
				{ "EPDGNodeState::Cooking", (int64)EPDGNodeState::Cooking },
				{ "EPDGNodeState::Cook_Complete", (int64)EPDGNodeState::Cook_Complete },
				{ "EPDGNodeState::Cook_Failed", (int64)EPDGNodeState::Cook_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cook_Complete.Name", "EPDGNodeState::Cook_Complete" },
				{ "Cook_Failed.Name", "EPDGNodeState::Cook_Failed" },
				{ "Cooking.Name", "EPDGNodeState::Cooking" },
				{ "Dirtied.Name", "EPDGNodeState::Dirtied" },
				{ "Dirtying.Name", "EPDGNodeState::Dirtying" },
				{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
				{ "None.Name", "EPDGNodeState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGNodeState",
				"EPDGNodeState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPDGLinkState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGLinkState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGLinkState>()
	{
		return EPDGLinkState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGLinkState(EPDGLinkState_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGLinkState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Hash() { return 359868125U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGLinkState"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGLinkState::Inactive", (int64)EPDGLinkState::Inactive },
				{ "EPDGLinkState::Linking", (int64)EPDGLinkState::Linking },
				{ "EPDGLinkState::Linked", (int64)EPDGLinkState::Linked },
				{ "EPDGLinkState::Error_Not_Linked", (int64)EPDGLinkState::Error_Not_Linked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Error_Not_Linked.Name", "EPDGLinkState::Error_Not_Linked" },
				{ "Inactive.Name", "EPDGLinkState::Inactive" },
				{ "Linked.Name", "EPDGLinkState::Linked" },
				{ "Linking.Name", "EPDGLinkState::Linking" },
				{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGLinkState",
				"EPDGLinkState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniPDGWorkResultObjectBakedOutput"), sizeof(FHoudiniPDGWorkResultObjectBakedOutput), Get_Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniPDGWorkResultObjectBakedOutput>()
{
	return FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput(FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniPDGWorkResultObjectBakedOutput"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniPDGWorkResultObjectBakedOutput
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniPDGWorkResultObjectBakedOutput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HoudiniPDGWorkResultObjectBakedOutput")),new UScriptStruct::TCppStructOps<FHoudiniPDGWorkResultObjectBakedOutput>);
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniPDGWorkResultObjectBakedOutput;
	struct Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Container for baked outputs of a PDG work result object. \n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Container for baked outputs of a PDG work result object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGWorkResultObjectBakedOutput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_MetaData[] = {
		{ "Comment", "// Array of baked output per output index of the work result object's outputs.\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Array of baked output per output index of the work result object's outputs." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGWorkResultObjectBakedOutput, BakedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniPDGWorkResultObjectBakedOutput",
		sizeof(FHoudiniPDGWorkResultObjectBakedOutput),
		alignof(FHoudiniPDGWorkResultObjectBakedOutput),
		Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPDGWorkResultObjectBakedOutput"), sizeof(FHoudiniPDGWorkResultObjectBakedOutput), Get_Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Hash() { return 1333247971U; }
class UScriptStruct* FWorkItemTally::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTally, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTally"), sizeof(FWorkItemTally), Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTally>()
{
	return FWorkItemTally::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorkItemTally(FWorkItemTally::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("WorkItemTally"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTally
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTally()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorkItemTally")),new UScriptStruct::TCppStructOps<FWorkItemTally>);
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFWorkItemTally;
	struct Z_Construct_UScriptStruct_FWorkItemTally_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalWorkItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalWorkItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTally>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, ErroredWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookedWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, CookingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, WaitingWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_TotalWorkItems = { "TotalWorkItems", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkItemTally, TotalWorkItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_TotalWorkItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_TotalWorkItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"WorkItemTally",
		sizeof(FWorkItemTally),
		alignof(FWorkItemTally),
		Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorkItemTally"), sizeof(FWorkItemTally), Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorkItemTally_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorkItemTally_Hash() { return 4264036560U; }
class UScriptStruct* FTOPWorkResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTOPWorkResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResult"), sizeof(FTOPWorkResult), Get_Z_Construct_UScriptStruct_FTOPWorkResult_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResult>()
{
	return FTOPWorkResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTOPWorkResult(FTOPWorkResult::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("TOPWorkResult"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFTOPWorkResult
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFTOPWorkResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TOPWorkResult")),new UScriptStruct::TCppStructOps<FTOPWorkResult>);
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFTOPWorkResult;
	struct Z_Construct_UScriptStruct_FTOPWorkResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorkItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorkItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects = { "ResultObjects", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResult, ResultObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner = { "ResultObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResultObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID = { "WorkItemID", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex = { "WorkItemIndex", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"TOPWorkResult",
		sizeof(FTOPWorkResult),
		alignof(FTOPWorkResult),
		Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTOPWorkResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TOPWorkResult"), sizeof(FTOPWorkResult), Get_Z_Construct_UScriptStruct_FTOPWorkResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTOPWorkResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTOPWorkResult_Hash() { return 3717080730U; }
class UScriptStruct* FTOPWorkResultObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTOPWorkResultObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResultObject, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResultObject"), sizeof(FTOPWorkResultObject), Get_Z_Construct_UScriptStruct_FTOPWorkResultObject_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResultObject>()
{
	return FTOPWorkResultObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTOPWorkResultObject(FTOPWorkResultObject::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("TOPWorkResultObject"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFTOPWorkResultObject
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFTOPWorkResultObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TOPWorkResultObject")),new UScriptStruct::TCppStructOps<FTOPWorkResultObject>);
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFTOPWorkResultObject;
	struct Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputObjectsToDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputObjectsToDelete;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputObjectsToDelete_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultOutputs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultOutputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResultObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000400000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputObjectsToDelete_MetaData[] = {
		{ "Comment", "// List of objects to delete, internal use only (DestroyResultOutputs)\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "List of objects to delete, internal use only (DestroyResultOutputs)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputObjectsToDelete = { "OutputObjectsToDelete", nullptr, (EPropertyFlags)0x0040000400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, OutputObjectsToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputObjectsToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputObjectsToDelete_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputObjectsToDelete_Inner = { "OutputObjectsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_MetaData[] = {
		{ "Comment", "// UPROPERTY()\n// TArray<UObject*>\x09\x09ResultObjects;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "UPROPERTY()\nTArray<UObject*>              ResultObjects;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs = { "ResultOutputs", nullptr, (EPropertyFlags)0x0020080400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, ResultOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner = { "ResultOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, State), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGWorkResultState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTOPWorkResultObject, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputActorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputObjectsToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_OutputObjectsToDelete_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_ResultOutputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"TOPWorkResultObject",
		sizeof(FTOPWorkResultObject),
		alignof(FTOPWorkResultObject),
		Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTOPWorkResultObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TOPWorkResultObject"), sizeof(FTOPWorkResultObject), Get_Z_Construct_UScriptStruct_FTOPWorkResultObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTOPWorkResultObject_Hash() { return 223938930U; }
class UScriptStruct* FOutputActorOwner::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOutputActorOwner_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputActorOwner, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("OutputActorOwner"), sizeof(FOutputActorOwner), Get_Z_Construct_UScriptStruct_FOutputActorOwner_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FOutputActorOwner>()
{
	return FOutputActorOwner::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutputActorOwner(FOutputActorOwner::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("OutputActorOwner"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFOutputActorOwner
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFOutputActorOwner()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OutputActorOwner")),new UScriptStruct::TCppStructOps<FOutputActorOwner>);
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFOutputActorOwner;
	struct Z_Construct_UScriptStruct_FOutputActorOwner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputActorOwner>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor = { "OutputActor", nullptr, (EPropertyFlags)0x0040000400000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutputActorOwner, OutputActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputActorOwner_Statics::NewProp_OutputActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputActorOwner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"OutputActorOwner",
		sizeof(FOutputActorOwner),
		alignof(FOutputActorOwner),
		Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputActorOwner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutputActorOwner()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutputActorOwner_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutputActorOwner"), sizeof(FOutputActorOwner), Get_Z_Construct_UScriptStruct_FOutputActorOwner_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutputActorOwner_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutputActorOwner_Hash() { return 2429121253U; }
	void UTOPNode::StaticRegisterNativesUTOPNode()
	{
	}
	UClass* Z_Construct_UClass_UTOPNode_NoRegister()
	{
		return UTOPNode::StaticClass();
	}
	struct Z_Construct_UClass_UTOPNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputActorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputActorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedWorkResultObjectOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BakedWorkResultObjectOutputs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BakedWorkResultObjectOutputs_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedWorkResultObjectOutputs_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[];
#endif
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasChildNodes_MetaData[];
#endif
		static void NewProp_bHasChildNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasChildNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveLoadedWorkResults_MetaData[];
#endif
		static void NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveLoadedWorkResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCachedHaveNotLoadedWorkResults_MetaData[];
#endif
		static void NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCachedHaveNotLoadedWorkResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[];
#endif
		static void NewProp_bAutoLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorkResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkResult_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkResultParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorkResultParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTOPNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner = { "OutputActorOwner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, OutputActorOwner), Z_Construct_UScriptStruct_FOutputActorOwner, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_MetaData[] = {
		{ "Comment", "// Map of [work_result_index]_[work_result_object_index] to the work result object's baked outputs. \n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Map of [work_result_index]_[work_result_object_index] to the work result object's baked outputs." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, BakedWorkResultObjectOutputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp = { "BakedWorkResultObjectOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp = { "BakedWorkResultObjectOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_MetaData[] = {
		{ "Comment", "// Visible in the level\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Visible in the level" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_MetaData[] = {
		{ "Comment", "// True if this node has child nodes\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "True if this node has child nodes" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bHasChildNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes = { "bHasChildNodes", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_MetaData[] = {
		{ "Comment", "// This is set when the TOP node's work items are processed by\n// FHoudiniPDGManager based on if any Loaded work result objects are found\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This is set when the TOP node's work items are processed by\nFHoudiniPDGManager based on if any Loaded work result objects are found" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bCachedHaveLoadedWorkResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults = { "bCachedHaveLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_MetaData[] = {
		{ "Comment", "// This is set when the TOP node's work items are processed by\n// FHoudiniPDGManager based on if any NotLoaded work result objects are found\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This is set when the TOP node's work items are processed by\nFHoudiniPDGManager based on if any NotLoaded work result objects are found" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bCachedHaveNotLoadedWorkResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults = { "bCachedHaveNotLoadedWorkResults", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, WorkItemTally), Z_Construct_UScriptStruct_FWorkItemTally, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState = { "NodeState", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodeState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGNodeState, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bAutoLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_MetaData[] = {
		{ "Comment", "// Hidden in the nodes combobox\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Hidden in the nodes combobox" },
	};
#endif
	void Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((UTOPNode*)Obj)->bHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNode), &Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult = { "WorkResult", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, WorkResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner = { "WorkResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent = { "WorkResultParent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, WorkResultParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, ParentName), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodePath), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodeName), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNode, NodeId), METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_OutputActorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_BakedWorkResultObjectOutputs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHasChildNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveLoadedWorkResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bCachedHaveNotLoadedWorkResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkItemTally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bAutoLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_bHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_WorkResultParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_ParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNode_Statics::NewProp_NodeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTOPNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTOPNode_Statics::ClassParams = {
		&UTOPNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTOPNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTOPNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTOPNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTOPNode, 1239226726);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNode>()
	{
		return UTOPNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTOPNode(Z_Construct_UClass_UTOPNode, &UTOPNode::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UTOPNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNode);
	void UTOPNetwork::StaticRegisterNativesUTOPNetwork()
	{
	}
	UClass* Z_Construct_UClass_UTOPNetwork_NoRegister()
	{
		return UTOPNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UTOPNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadResults_MetaData[];
#endif
		static void NewProp_bAutoLoadResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowResults_MetaData[];
#endif
		static void NewProp_bShowResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedTOPIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTOPNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllTOPNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllTOPNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTOPNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit(void* Obj)
	{
		((UTOPNetwork*)Obj)->bAutoLoadResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults = { "bAutoLoadResults", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit(void* Obj)
	{
		((UTOPNetwork*)Obj)->bShowResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults = { "bShowResults", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTOPNetwork), &Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, ParentName), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex_MetaData[] = {
		{ "Comment", "// TODO: Should be using SelectedNodeName instead?\n// Index is not consistent after updating filter\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "TODO: Should be using SelectedNodeName instead?\nIndex is not consistent after updating filter" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex = { "SelectedTOPIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, SelectedTOPIndex), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, AllTOPNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner = { "AllTOPNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTOPNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath_MetaData[] = {
		{ "Comment", "// HAPI path to this node (relative to the HDA)\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "HAPI path to this node (relative to the HDA)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, NodePath), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, NodeName), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTOPNetwork, NodeId), METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTOPNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bAutoLoadResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_bShowResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_ParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_SelectedTOPIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_AllTOPNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTOPNetwork_Statics::NewProp_NodeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTOPNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOPNetwork>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTOPNetwork_Statics::ClassParams = {
		&UTOPNetwork::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTOPNetwork_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTOPNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTOPNetwork()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTOPNetwork_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTOPNetwork, 2011766015);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UTOPNetwork>()
	{
		return UTOPNetwork::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTOPNetwork(Z_Construct_UClass_UTOPNetwork, &UTOPNetwork::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UTOPNetwork"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTOPNetwork);
	void UHoudiniPDGAssetLink::StaticRegisterNativesUHoudiniPDGAssetLink()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister()
	{
		return UHoudiniPDGAssetLink::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPDGAssetLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeAfterWorkResultObjectLoaded_MetaData[];
#endif
		static void NewProp_bBakeAfterWorkResultObjectLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeAfterWorkResultObjectLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecenterBakedActors_MetaData[];
#endif
		static void NewProp_bRecenterBakedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecenterBakedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDGBakePackageReplaceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PDGBakePackageReplaceMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PDGBakePackageReplaceMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDGBakeSelectionOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PDGBakeSelectionOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PDGBakeSelectionOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniEngineBakeOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HoudiniEngineBakeOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HoudiniEngineBakeOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeMenuExpanded_MetaData[];
#endif
		static void NewProp_bBakeMenuExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeMenuExpanded;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakeFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputParentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputParentActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsUIRefresh_MetaData[];
#endif
		static void NewProp_bNeedsUIRefresh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsUIRefresh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputCachePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputCachePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkItemTally_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkItemTally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumWorkitems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumWorkitems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TOPOutputFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TOPOutputFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TOPNodeFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TOPNodeFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTOPOutputFilter_MetaData[];
#endif
		static void NewProp_bUseTOPOutputFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTOPOutputFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTOPNodeFilter_MetaData[];
#endif
		static void NewProp_bUseTOPNodeFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTOPNodeFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCook_MetaData[];
#endif
		static void NewProp_bAutoCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinkState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTOPNetworkIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedTOPNetworkIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTOPNetworks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllTOPNetworks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllTOPNetworks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetNodePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetNodePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPDGAssetLink.h" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterWorkResultObjectLoaded_MetaData[] = {
		{ "Comment", "// Auto-bake: if this is true, it indicates that a work result object should be baked after it is loaded.\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Auto-bake: if this is true, it indicates that a work result object should be baked after it is loaded." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterWorkResultObjectLoaded_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bBakeAfterWorkResultObjectLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterWorkResultObjectLoaded = { "bBakeAfterWorkResultObjectLoaded", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterWorkResultObjectLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterWorkResultObjectLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterWorkResultObjectLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_MetaData[] = {
		{ "Comment", "// If true, recenter baked actors to their bounding box center after bake\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "If true, recenter baked actors to their bounding box center after bake" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bRecenterBakedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors = { "bRecenterBakedActors", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_MetaData[] = {
		{ "Comment", "// This determines if the baked assets should replace existing assets with the same name,\n// or always generate new assets (with numerical suffixes if needed to create unique names)\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "This determines if the baked assets should replace existing assets with the same name,\nor always generate new assets (with numerical suffixes if needed to create unique names)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode = { "PDGBakePackageReplaceMode", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, PDGBakePackageReplaceMode), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_MetaData[] = {
		{ "Comment", "// Which outputs to bake, for example, all, selected network, selected node\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Which outputs to bake, for example, all, selected network, selected node" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption = { "PDGBakeSelectionOption", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, PDGBakeSelectionOption), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_MetaData[] = {
		{ "Comment", "// What kind of output to bake, for example, bake actors, bake to blueprint\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "What kind of output to bake, for example, bake actors, bake to blueprint" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption = { "HoudiniEngineBakeOption", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, HoudiniEngineBakeOption), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bBakeMenuExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded = { "bBakeMenuExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Comment", "// Folder used for baking PDG outputs\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "Folder used for baking PDG outputs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, BakeFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// A parent actor to serve as the parent of any output actors\n// that are created.\n// If null, then output actors are created under a folder\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "A parent actor to serve as the parent of any output actors\nthat are created.\nIf null, then output actors are created under a folder" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor = { "OutputParentActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bNeedsUIRefresh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh = { "bNeedsUIRefresh", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath = { "OutputCachePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, OutputCachePath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally = { "WorkItemTally", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, WorkItemTally), Z_Construct_UScriptStruct_FWorkItemTally, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkitems_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkitems = { "NumWorkitems", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, NumWorkitems), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkitems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkitems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter = { "TOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPOutputFilter), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter = { "TOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, TOPNodeFilter), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bUseTOPOutputFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter = { "bUseTOPOutputFilter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bUseTOPNodeFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter = { "bUseTOPNodeFilter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit(void* Obj)
	{
		((UHoudiniPDGAssetLink*)Obj)->bAutoCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook = { "bAutoCook", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPDGAssetLink), &Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState = { "LinkState", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, LinkState), Z_Construct_UEnum_HoudiniEngineRuntime_EPDGLinkState, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex = { "SelectedTOPNetworkIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, SelectedTOPNetworkIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AllTOPNetworks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner = { "AllTOPNetworks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTOPNetwork_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000400200000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetID), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath_MetaData[] = {
		{ "Comment", "// The full path to the HDA in HAPI\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "The full path to the HDA in HAPI" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath = { "AssetNodePath", nullptr, (EPropertyFlags)0x0010000400200000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetNodePath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//UHoudiniAssetComponent*\x09\x09ParentHAC;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGAssetLink.h" },
		{ "ToolTip", "UPROPERTY()\nUHoudiniAssetComponent*                ParentHAC;" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000400200000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPDGAssetLink, AssetName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeAfterWorkResultObjectLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bRecenterBakedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakePackageReplaceMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_PDGBakeSelectionOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_HoudiniEngineBakeOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bBakeMenuExpanded,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_BakeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bNeedsUIRefresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_OutputCachePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_WorkItemTally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_NumWorkitems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPOutputFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_TOPNodeFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPOutputFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bUseTOPNodeFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_bAutoCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_LinkState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_SelectedTOPNetworkIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AllTOPNetworks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetNodePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::NewProp_AssetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPDGAssetLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams = {
		&UHoudiniPDGAssetLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPDGAssetLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPDGAssetLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPDGAssetLink, 2640932488);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniPDGAssetLink>()
	{
		return UHoudiniPDGAssetLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPDGAssetLink(Z_Construct_UClass_UHoudiniPDGAssetLink, &UHoudiniPDGAssetLink::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniPDGAssetLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPDGAssetLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
