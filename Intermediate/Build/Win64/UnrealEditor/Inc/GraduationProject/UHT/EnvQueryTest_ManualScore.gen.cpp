// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraduationProject/EnvQueryTest_ManualScore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_ManualScore() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GRADUATIONPROJECT_API UClass* Z_Construct_UClass_UEnvQueryTest_ManualScore();
GRADUATIONPROJECT_API UClass* Z_Construct_UClass_UEnvQueryTest_ManualScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraduationProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryTest_ManualScore ************************************************
void UEnvQueryTest_ManualScore::StaticRegisterNativesUEnvQueryTest_ManualScore()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryTest_ManualScore;
UClass* UEnvQueryTest_ManualScore::GetPrivateStaticClass()
{
	using TClass = UEnvQueryTest_ManualScore;
	if (!Z_Registration_Info_UClass_UEnvQueryTest_ManualScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvQueryTest_ManualScore"),
			Z_Registration_Info_UClass_UEnvQueryTest_ManualScore.InnerSingleton,
			StaticRegisterNativesUEnvQueryTest_ManualScore,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_ManualScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryTest_ManualScore_NoRegister()
{
	return UEnvQueryTest_ManualScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryTest_ManualScore.h" },
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "ManualScore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// EQS'in tarayaca\xc4\x9f\xc4\xb1 actor class.\n// Buraya BP_BaseAlly verilecek.\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EQS'in tarayaca\xc4\x9f\xc4\xb1 actor class.\nBuraya BP_BaseAlly verilecek." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Point etraf\xc4\xb1nda kontrol edilen 2D yar\xc4\xb1\xc3\xa7""ap.\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Point etraf\xc4\xb1nda kontrol edilen 2D yar\xc4\xb1\xc3\xa7""ap." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProximityBonus_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Yak\xc4\xb1nda en az bir actor varsa verilen taban puan.\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yak\xc4\xb1nda en az bir actor varsa verilen taban puan." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakTagBonus_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weak tag'i varsa ek puan.\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weak tag'i varsa ek puan." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongTagPenalty_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Strong tag'i varsa ceza.\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strong tag'i varsa ceza." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionOverlapPenalty_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DetectionArea overlap durumunda uygulanacak ceza.\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DetectionArea overlap durumunda uygulanacak ceza." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionAreaComponentName_MetaData[] = {
		{ "Category", "ManualScore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BP_BaseAlly i\xc3\xa7indeki collision component ad\xc4\xb1.\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP_BaseAlly i\xc3\xa7indeki collision component ad\xc4\xb1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakTagName_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongTagName_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawRawScore_MetaData[] = {
		{ "Category", "ManualScore|Debug" },
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLabelZOffset_MetaData[] = {
		{ "Category", "ManualScore|Debug" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDuration_MetaData[] = {
		{ "Category", "ManualScore|Debug" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProximityBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeakTagBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrongTagPenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionOverlapPenalty;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DetectionAreaComponentName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeakTagName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StrongTagName;
	static void NewProp_bDrawRawScore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawRawScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLabelZOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_ManualScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_ProximityBonus = { "ProximityBonus", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, ProximityBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProximityBonus_MetaData), NewProp_ProximityBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagBonus = { "WeakTagBonus", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, WeakTagBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakTagBonus_MetaData), NewProp_WeakTagBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagPenalty = { "StrongTagPenalty", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, StrongTagPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongTagPenalty_MetaData), NewProp_StrongTagPenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DetectionOverlapPenalty = { "DetectionOverlapPenalty", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, DetectionOverlapPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionOverlapPenalty_MetaData), NewProp_DetectionOverlapPenalty_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DetectionAreaComponentName = { "DetectionAreaComponentName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, DetectionAreaComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionAreaComponentName_MetaData), NewProp_DetectionAreaComponentName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagName = { "WeakTagName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, WeakTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakTagName_MetaData), NewProp_WeakTagName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagName = { "StrongTagName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, StrongTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongTagName_MetaData), NewProp_StrongTagName_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_bDrawRawScore_SetBit(void* Obj)
{
	((UEnvQueryTest_ManualScore*)Obj)->bDrawRawScore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_bDrawRawScore = { "bDrawRawScore", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_ManualScore), &Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_bDrawRawScore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawRawScore_MetaData), NewProp_bDrawRawScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DebugLabelZOffset = { "DebugLabelZOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, DebugLabelZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLabelZOffset_MetaData), NewProp_DebugLabelZOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DebugDuration = { "DebugDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, DebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDuration_MetaData), NewProp_DebugDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_ProximityBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DetectionOverlapPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DetectionAreaComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_bDrawRawScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DebugLabelZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_DebugDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_GraduationProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::ClassParams = {
	&UEnvQueryTest_ManualScore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_ManualScore()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_ManualScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_ManualScore.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_ManualScore.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_ManualScore);
UEnvQueryTest_ManualScore::~UEnvQueryTest_ManualScore() {}
// ********** End Class UEnvQueryTest_ManualScore **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_EnvQueryTest_ManualScore_h__Script_GraduationProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_ManualScore, UEnvQueryTest_ManualScore::StaticClass, TEXT("UEnvQueryTest_ManualScore"), &Z_Registration_Info_UClass_UEnvQueryTest_ManualScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_ManualScore), 1637388702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_EnvQueryTest_ManualScore_h__Script_GraduationProject_67174878(TEXT("/Script/GraduationProject"),
	Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_EnvQueryTest_ManualScore_h__Script_GraduationProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_EnvQueryTest_ManualScore_h__Script_GraduationProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
