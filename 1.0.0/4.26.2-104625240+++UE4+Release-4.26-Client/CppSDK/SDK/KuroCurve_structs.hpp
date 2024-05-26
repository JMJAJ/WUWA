#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroCurve

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct KuroCurve.KuroCurveVector
// 0x01A8 (0x01A8 - 0x0000)
struct FKuroCurveVector final
{
public:
	uint8                                         bUseCurve : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A63[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Constant;                                          // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     Curve[0x3];                                        // 0x0010(0x0088)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FKuroCurveVector) == 0x000008, "Wrong alignment on FKuroCurveVector");
static_assert(sizeof(FKuroCurveVector) == 0x0001A8, "Wrong size on FKuroCurveVector");
static_assert(offsetof(FKuroCurveVector, Constant) == 0x000004, "Member 'FKuroCurveVector::Constant' has a wrong offset!");
static_assert(offsetof(FKuroCurveVector, Curve) == 0x000010, "Member 'FKuroCurveVector::Curve' has a wrong offset!");

// ScriptStruct KuroCurve.KuroCurveLinearColor
// 0x0220 (0x0220 - 0x0000)
struct FKuroCurveLinearColor final
{
public:
	uint8                                         bUseCurve : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A64[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Constant;                                          // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A65[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeCurveLinearColor               Curve;                                             // 0x0018(0x0208)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FKuroCurveLinearColor) == 0x000008, "Wrong alignment on FKuroCurveLinearColor");
static_assert(sizeof(FKuroCurveLinearColor) == 0x000220, "Wrong size on FKuroCurveLinearColor");
static_assert(offsetof(FKuroCurveLinearColor, Constant) == 0x000004, "Member 'FKuroCurveLinearColor::Constant' has a wrong offset!");
static_assert(offsetof(FKuroCurveLinearColor, Curve) == 0x000018, "Member 'FKuroCurveLinearColor::Curve' has a wrong offset!");

// ScriptStruct KuroCurve.KuroCurveFloat
// 0x0090 (0x0090 - 0x0000)
struct FKuroCurveFloat final
{
public:
	uint8                                         bUseCurve : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A66[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Constant;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     Curve;                                             // 0x0008(0x0088)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FKuroCurveFloat) == 0x000008, "Wrong alignment on FKuroCurveFloat");
static_assert(sizeof(FKuroCurveFloat) == 0x000090, "Wrong size on FKuroCurveFloat");
static_assert(offsetof(FKuroCurveFloat, Constant) == 0x000004, "Member 'FKuroCurveFloat::Constant' has a wrong offset!");
static_assert(offsetof(FKuroCurveFloat, Curve) == 0x000008, "Member 'FKuroCurveFloat::Curve' has a wrong offset!");

// ScriptStruct KuroCurve.KuroCurveVector2D
// 0x0120 (0x0120 - 0x0000)
struct FKuroCurveVector2D final
{
public:
	uint8                                         bUseCurve : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A67[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Constant;                                          // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A68[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     Curve[0x2];                                        // 0x0010(0x0088)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FKuroCurveVector2D) == 0x000008, "Wrong alignment on FKuroCurveVector2D");
static_assert(sizeof(FKuroCurveVector2D) == 0x000120, "Wrong size on FKuroCurveVector2D");
static_assert(offsetof(FKuroCurveVector2D, Constant) == 0x000004, "Member 'FKuroCurveVector2D::Constant' has a wrong offset!");
static_assert(offsetof(FKuroCurveVector2D, Curve) == 0x000010, "Member 'FKuroCurveVector2D::Curve' has a wrong offset!");

}

