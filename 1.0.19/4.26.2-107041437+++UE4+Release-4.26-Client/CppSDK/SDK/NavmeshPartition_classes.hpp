#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavmeshPartition

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class NavmeshPartition.AudioMaterialComponent
// 0x0010 (0x0230 - 0x0220)
class UAudioMaterialComponent final : public USceneComponent
{
public:
	uint8                                         Pad_1A90[0x18];                                    // 0x0218(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMaterialComponent">();
	}
	static class UAudioMaterialComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMaterialComponent>();
	}
};
static_assert(alignof(UAudioMaterialComponent) == 0x000010, "Wrong alignment on UAudioMaterialComponent");
static_assert(sizeof(UAudioMaterialComponent) == 0x000230, "Wrong size on UAudioMaterialComponent");

// Class NavmeshPartition.NavmeshPartitionActor
// 0x0010 (0x02B8 - 0x02A8)
class ANavmeshPartitionActor final : public AActor
{
public:
	class UNavmeshPartitionComponent*             NavmeshPartitionComp;                              // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioMaterialComponent*                AudioMaterialComp;                                 // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionActor">();
	}
	static class ANavmeshPartitionActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshPartitionActor>();
	}
};
static_assert(alignof(ANavmeshPartitionActor) == 0x000008, "Wrong alignment on ANavmeshPartitionActor");
static_assert(sizeof(ANavmeshPartitionActor) == 0x0002B8, "Wrong size on ANavmeshPartitionActor");
static_assert(offsetof(ANavmeshPartitionActor, NavmeshPartitionComp) == 0x0002A8, "Member 'ANavmeshPartitionActor::NavmeshPartitionComp' has a wrong offset!");
static_assert(offsetof(ANavmeshPartitionActor, AudioMaterialComp) == 0x0002B0, "Member 'ANavmeshPartitionActor::AudioMaterialComp' has a wrong offset!");

// Class NavmeshPartition.NavmeshPartitionComponent
// 0x0050 (0x0270 - 0x0220)
class UNavmeshPartitionComponent final : public USceneComponent
{
public:
	uint8                                         Pad_1A91[0x58];                                    // 0x0218(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionComponent">();
	}
	static class UNavmeshPartitionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavmeshPartitionComponent>();
	}
};
static_assert(alignof(UNavmeshPartitionComponent) == 0x000010, "Wrong alignment on UNavmeshPartitionComponent");
static_assert(sizeof(UNavmeshPartitionComponent) == 0x000270, "Wrong size on UNavmeshPartitionComponent");

// Class NavmeshPartition.NavmeshPartitionGlobalActor
// 0x0008 (0x02B0 - 0x02A8)
class ANavmeshPartitionGlobalActor final : public AActor
{
public:
	class UNavmeshPartitionGlobalComponent*       NavmeshPartitionGlobalComp;                        // 0x02A8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionGlobalActor">();
	}
	static class ANavmeshPartitionGlobalActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavmeshPartitionGlobalActor>();
	}
};
static_assert(alignof(ANavmeshPartitionGlobalActor) == 0x000008, "Wrong alignment on ANavmeshPartitionGlobalActor");
static_assert(sizeof(ANavmeshPartitionGlobalActor) == 0x0002B0, "Wrong size on ANavmeshPartitionGlobalActor");
static_assert(offsetof(ANavmeshPartitionGlobalActor, NavmeshPartitionGlobalComp) == 0x0002A8, "Member 'ANavmeshPartitionGlobalActor::NavmeshPartitionGlobalComp' has a wrong offset!");

// Class NavmeshPartition.NavmeshPartitionGlobalComponent
// 0x00A0 (0x02C0 - 0x0220)
class UNavmeshPartitionGlobalComponent final : public USceneComponent
{
public:
	uint8                                         Pad_1A92[0xA8];                                    // 0x0218(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavmeshPartitionGlobalComponent">();
	}
	static class UNavmeshPartitionGlobalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavmeshPartitionGlobalComponent>();
	}
};
static_assert(alignof(UNavmeshPartitionGlobalComponent) == 0x000010, "Wrong alignment on UNavmeshPartitionGlobalComponent");
static_assert(sizeof(UNavmeshPartitionGlobalComponent) == 0x0002C0, "Wrong size on UNavmeshPartitionGlobalComponent");

}

