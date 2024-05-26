#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroImposter

#include "Basic.hpp"


namespace SDK::Params
{

// Function KuroImposter.KuroImposterUpdater.UpdateImposters
// 0x0010 (0x0010 - 0x0000)
struct KuroImposterUpdater_UpdateImposters final
{
public:
	class UDirectionalLightComponent*             DirLight;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DeltaTime;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D15[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroImposterUpdater_UpdateImposters) == 0x000008, "Wrong alignment on KuroImposterUpdater_UpdateImposters");
static_assert(sizeof(KuroImposterUpdater_UpdateImposters) == 0x000010, "Wrong size on KuroImposterUpdater_UpdateImposters");
static_assert(offsetof(KuroImposterUpdater_UpdateImposters, DirLight) == 0x000000, "Member 'KuroImposterUpdater_UpdateImposters::DirLight' has a wrong offset!");
static_assert(offsetof(KuroImposterUpdater_UpdateImposters, DeltaTime) == 0x000008, "Member 'KuroImposterUpdater_UpdateImposters::DeltaTime' has a wrong offset!");

// Function KuroImposter.KuroImposterUtility.GenerateAll
// 0x0010 (0x0010 - 0x0000)
struct KuroImposterUtility_GenerateAll final
{
public:
	class UWorld*                                 EditorWorld;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBake;                                             // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bClear;                                            // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D16[0x6];                                     // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroImposterUtility_GenerateAll) == 0x000008, "Wrong alignment on KuroImposterUtility_GenerateAll");
static_assert(sizeof(KuroImposterUtility_GenerateAll) == 0x000010, "Wrong size on KuroImposterUtility_GenerateAll");
static_assert(offsetof(KuroImposterUtility_GenerateAll, EditorWorld) == 0x000000, "Member 'KuroImposterUtility_GenerateAll::EditorWorld' has a wrong offset!");
static_assert(offsetof(KuroImposterUtility_GenerateAll, bBake) == 0x000008, "Member 'KuroImposterUtility_GenerateAll::bBake' has a wrong offset!");
static_assert(offsetof(KuroImposterUtility_GenerateAll, bClear) == 0x000009, "Member 'KuroImposterUtility_GenerateAll::bClear' has a wrong offset!");

// Function KuroImposter.KuroImposterUtility.RemoveAll
// 0x0010 (0x0010 - 0x0000)
struct KuroImposterUtility_RemoveAll final
{
public:
	class UWorld*                                 EditorWorld;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bClear;                                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D17[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroImposterUtility_RemoveAll) == 0x000008, "Wrong alignment on KuroImposterUtility_RemoveAll");
static_assert(sizeof(KuroImposterUtility_RemoveAll) == 0x000010, "Wrong size on KuroImposterUtility_RemoveAll");
static_assert(offsetof(KuroImposterUtility_RemoveAll, EditorWorld) == 0x000000, "Member 'KuroImposterUtility_RemoveAll::EditorWorld' has a wrong offset!");
static_assert(offsetof(KuroImposterUtility_RemoveAll, bClear) == 0x000008, "Member 'KuroImposterUtility_RemoveAll::bClear' has a wrong offset!");

}

