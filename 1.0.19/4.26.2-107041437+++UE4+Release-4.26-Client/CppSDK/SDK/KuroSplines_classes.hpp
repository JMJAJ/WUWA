#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroSplines

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroSplines.KuroMoveSplineComponent
// 0x0050 (0x0630 - 0x05E0)
class UKuroMoveSplineComponent final : public USplineComponent
{
public:
	TArray<int32>                                 MoveStates;                                        // 0x05D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 MoveSpeeds;                                        // 0x05E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 IgnorePoints;                                      // 0x05F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 StayTimes;                                         // 0x0608(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 IsHides;                                           // 0x0618(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1810[0x8];                                     // 0x0628(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 GetIgnorePoint(int32 Param_Index);
	int32 GetIsHide(int32 Param_Index);
	int32 GetMoveSpeed(int32 Param_Index);
	int32 GetMoveState(int32 Param_Index);
	int32 GetStayTime(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroMoveSplineComponent">();
	}
	static class UKuroMoveSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroMoveSplineComponent>();
	}
};
static_assert(alignof(UKuroMoveSplineComponent) == 0x000010, "Wrong alignment on UKuroMoveSplineComponent");
static_assert(sizeof(UKuroMoveSplineComponent) == 0x000630, "Wrong size on UKuroMoveSplineComponent");
static_assert(offsetof(UKuroMoveSplineComponent, MoveStates) == 0x0005D8, "Member 'UKuroMoveSplineComponent::MoveStates' has a wrong offset!");
static_assert(offsetof(UKuroMoveSplineComponent, MoveSpeeds) == 0x0005E8, "Member 'UKuroMoveSplineComponent::MoveSpeeds' has a wrong offset!");
static_assert(offsetof(UKuroMoveSplineComponent, IgnorePoints) == 0x0005F8, "Member 'UKuroMoveSplineComponent::IgnorePoints' has a wrong offset!");
static_assert(offsetof(UKuroMoveSplineComponent, StayTimes) == 0x000608, "Member 'UKuroMoveSplineComponent::StayTimes' has a wrong offset!");
static_assert(offsetof(UKuroMoveSplineComponent, IsHides) == 0x000618, "Member 'UKuroMoveSplineComponent::IsHides' has a wrong offset!");

// Class KuroSplines.KuroParkourSplineComponent
// 0x0030 (0x0610 - 0x05E0)
class UKuroParkourSplineComponent final : public USplineComponent
{
public:
	TArray<float>                                 RadiusGroup;                                       // 0x05D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 ModifiedTimes;                                     // 0x05E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 BuffIds;                                           // 0x05F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1811[0x8];                                     // 0x0608(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 GetBuffId(int32 Param_Index);
	float GetModifiedTime(int32 Param_Index);
	float GetRadius(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroParkourSplineComponent">();
	}
	static class UKuroParkourSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroParkourSplineComponent>();
	}
};
static_assert(alignof(UKuroParkourSplineComponent) == 0x000010, "Wrong alignment on UKuroParkourSplineComponent");
static_assert(sizeof(UKuroParkourSplineComponent) == 0x000610, "Wrong size on UKuroParkourSplineComponent");
static_assert(offsetof(UKuroParkourSplineComponent, RadiusGroup) == 0x0005D8, "Member 'UKuroParkourSplineComponent::RadiusGroup' has a wrong offset!");
static_assert(offsetof(UKuroParkourSplineComponent, ModifiedTimes) == 0x0005E8, "Member 'UKuroParkourSplineComponent::ModifiedTimes' has a wrong offset!");
static_assert(offsetof(UKuroParkourSplineComponent, BuffIds) == 0x0005F8, "Member 'UKuroParkourSplineComponent::BuffIds' has a wrong offset!");

}

