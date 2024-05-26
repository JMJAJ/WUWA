#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaterialShaderQualitySettings

#include "Basic.hpp"


namespace SDK
{

// Enum MaterialShaderQualitySettings.EMobileShadowQuality
// NumValues: 0x0005
enum class EMobileShadowQuality : uint8
{
	NoFiltering                              = 0,
	PCF_1x1                                  = 1,
	PCF_2x2                                  = 2,
	PCF_3x3                                  = 3,
	EMobileShadowQuality_MAX                 = 4,
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0009 (0x0009 - 0x0000)
struct FMaterialQualityOverrides final
{
public:
	bool                                          bDiscardQualityDuringCook;                         // 0x0000(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableOverride;                                   // 0x0001(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceFullyRough;                                  // 0x0002(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceNonMetal;                                    // 0x0003(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceDisableLMDirectionality;                     // 0x0004(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceLQReflections;                               // 0x0005(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceDisablePreintegratedGF;                      // 0x0006(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableMaterialNormalCalculation;                 // 0x0007(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMobileShadowQuality                          MobileShadowQuality;                               // 0x0008(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMaterialQualityOverrides) == 0x000001, "Wrong alignment on FMaterialQualityOverrides");
static_assert(sizeof(FMaterialQualityOverrides) == 0x000009, "Wrong size on FMaterialQualityOverrides");
static_assert(offsetof(FMaterialQualityOverrides, bDiscardQualityDuringCook) == 0x000000, "Member 'FMaterialQualityOverrides::bDiscardQualityDuringCook' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bEnableOverride) == 0x000001, "Member 'FMaterialQualityOverrides::bEnableOverride' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceFullyRough) == 0x000002, "Member 'FMaterialQualityOverrides::bForceFullyRough' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceNonMetal) == 0x000003, "Member 'FMaterialQualityOverrides::bForceNonMetal' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceDisableLMDirectionality) == 0x000004, "Member 'FMaterialQualityOverrides::bForceDisableLMDirectionality' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceLQReflections) == 0x000005, "Member 'FMaterialQualityOverrides::bForceLQReflections' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bForceDisablePreintegratedGF) == 0x000006, "Member 'FMaterialQualityOverrides::bForceDisablePreintegratedGF' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, bDisableMaterialNormalCalculation) == 0x000007, "Member 'FMaterialQualityOverrides::bDisableMaterialNormalCalculation' has a wrong offset!");
static_assert(offsetof(FMaterialQualityOverrides, MobileShadowQuality) == 0x000008, "Member 'FMaterialQualityOverrides::MobileShadowQuality' has a wrong offset!");

}

