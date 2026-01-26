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
		{ "Comment", "// BP_EnemyBase'\xc4\xb1 buradan se\xc3\xa7\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP_EnemyBase'\xc4\xb1 buradan se\xc3\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// XY d\xc3\xbczleminde yar\xc4\xb1\xc3\xa7""ap\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "XY d\xc3\xbczleminde yar\xc4\xb1\xc3\xa7""ap" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProximityBonus_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Yak\xc4\xb1nda herhangi bir enemy varsa eklenecek base skor\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yak\xc4\xb1nda herhangi bir enemy varsa eklenecek base skor" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakTagBonus_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor \"Weak\" tag'l\xc4\xb1ysa yak\xc4\xb1n\xc4\xb1ndaki noktalara eklenecek bonus\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor \"Weak\" tag'l\xc4\xb1ysa yak\xc4\xb1n\xc4\xb1ndaki noktalara eklenecek bonus" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongTagPenalty_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor \"Strong\" tag'l\xc4\xb1ysa yak\xc4\xb1n\xc4\xb1ndaki noktalara uygulanacak ceza (pozitif gir, kod eksi uygular)\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor \"Strong\" tag'l\xc4\xb1ysa yak\xc4\xb1n\xc4\xb1ndaki noktalara uygulanacak ceza (pozitif gir, kod eksi uygular)" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakTagName_MetaData[] = {
		{ "Category", "ManualScore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor Tags isimleri (BP'de Actor > Tags listesine ekledi\xc4\x9fin)\n" },
#endif
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor Tags isimleri (BP'de Actor > Tags listesine ekledi\xc4\x9fin)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongTagName_MetaData[] = {
		{ "Category", "ManualScore" },
		{ "ModuleRelativePath", "EnvQueryTest_ManualScore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProximityBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeakTagBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrongTagPenalty;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeakTagName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StrongTagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_ManualScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_ProximityBonus = { "ProximityBonus", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, ProximityBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProximityBonus_MetaData), NewProp_ProximityBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagBonus = { "WeakTagBonus", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, WeakTagBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakTagBonus_MetaData), NewProp_WeakTagBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagPenalty = { "StrongTagPenalty", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, StrongTagPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongTagPenalty_MetaData), NewProp_StrongTagPenalty_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagName = { "WeakTagName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, WeakTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakTagName_MetaData), NewProp_WeakTagName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagName = { "StrongTagName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_ManualScore, StrongTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongTagName_MetaData), NewProp_StrongTagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_ProximityBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_WeakTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_ManualScore_Statics::NewProp_StrongTagName,
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
		{ Z_Construct_UClass_UEnvQueryTest_ManualScore, UEnvQueryTest_ManualScore::StaticClass, TEXT("UEnvQueryTest_ManualScore"), &Z_Registration_Info_UClass_UEnvQueryTest_ManualScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_ManualScore), 7862042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_EnvQueryTest_ManualScore_h__Script_GraduationProject_2496234114(TEXT("/Script/GraduationProject"),
	Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_EnvQueryTest_ManualScore_h__Script_GraduationProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GraduationProject_Source_GraduationProject_EnvQueryTest_ManualScore_h__Script_GraduationProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
