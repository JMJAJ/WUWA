#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VolumeGIRender

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class VolumeGIRender.GIVolumeComponent
// 0x00E0 (0x0300 - 0x0220)
class UGIVolumeComponent final : public USceneComponent
{
public:
	struct FVector                                VolumeSize;                                        // 0x0218(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             VolumeDim;                                         // 0x0224(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumProbes;                                         // 0x0230(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0234(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SkyIndirectScale;                                  // 0x0238(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SunIndirectScale;                                  // 0x023C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StaticIrraidianceScale;                            // 0x0240(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           TintColor;                                         // 0x0244(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AFB[0xAC];                                    // 0x0254(0x00AC)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GIVolumeComponent">();
	}
	static class UGIVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGIVolumeComponent>();
	}
};
static_assert(alignof(UGIVolumeComponent) == 0x000010, "Wrong alignment on UGIVolumeComponent");
static_assert(sizeof(UGIVolumeComponent) == 0x000300, "Wrong size on UGIVolumeComponent");
static_assert(offsetof(UGIVolumeComponent, VolumeSize) == 0x000218, "Member 'UGIVolumeComponent::VolumeSize' has a wrong offset!");
static_assert(offsetof(UGIVolumeComponent, VolumeDim) == 0x000224, "Member 'UGIVolumeComponent::VolumeDim' has a wrong offset!");
static_assert(offsetof(UGIVolumeComponent, NumProbes) == 0x000230, "Member 'UGIVolumeComponent::NumProbes' has a wrong offset!");
static_assert(offsetof(UGIVolumeComponent, Priority) == 0x000234, "Member 'UGIVolumeComponent::Priority' has a wrong offset!");
static_assert(offsetof(UGIVolumeComponent, SkyIndirectScale) == 0x000238, "Member 'UGIVolumeComponent::SkyIndirectScale' has a wrong offset!");
static_assert(offsetof(UGIVolumeComponent, SunIndirectScale) == 0x00023C, "Member 'UGIVolumeComponent::SunIndirectScale' has a wrong offset!");
static_assert(offsetof(UGIVolumeComponent, StaticIrraidianceScale) == 0x000240, "Member 'UGIVolumeComponent::StaticIrraidianceScale' has a wrong offset!");
static_assert(offsetof(UGIVolumeComponent, TintColor) == 0x000244, "Member 'UGIVolumeComponent::TintColor' has a wrong offset!");

// Class VolumeGIRender.ProbeVolumeActor
// 0x0008 (0x02B0 - 0x02A8)
class AProbeVolumeActor final : public AActor
{
public:
	class UGIVolumeComponent*                     GIVolumeComp;                                      // 0x02A8(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProbeVolumeActor">();
	}
	static class AProbeVolumeActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProbeVolumeActor>();
	}
};
static_assert(alignof(AProbeVolumeActor) == 0x000008, "Wrong alignment on AProbeVolumeActor");
static_assert(sizeof(AProbeVolumeActor) == 0x0002B0, "Wrong size on AProbeVolumeActor");
static_assert(offsetof(AProbeVolumeActor, GIVolumeComp) == 0x0002A8, "Member 'AProbeVolumeActor::GIVolumeComp' has a wrong offset!");

// Class VolumeGIRender.VolumeGIRenderSystem
// 0x0008 (0x0040 - 0x0038)
class UVolumeGIRenderSystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_1AFC[0x8];                                     // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VolumeGIRenderSystem">();
	}
	static class UVolumeGIRenderSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVolumeGIRenderSystem>();
	}
};
static_assert(alignof(UVolumeGIRenderSystem) == 0x000008, "Wrong alignment on UVolumeGIRenderSystem");
static_assert(sizeof(UVolumeGIRenderSystem) == 0x000040, "Wrong size on UVolumeGIRenderSystem");

}

