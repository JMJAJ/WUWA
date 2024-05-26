#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageWriteQueue

#include "Basic.hpp"


namespace SDK
{

// Enum ImageWriteQueue.EDesiredImageFormat
// NumValues: 0x0005
enum class EDesiredImageFormat : uint8
{
	PNG                                      = 0,
	JPG                                      = 1,
	BMP                                      = 2,
	EXR                                      = 3,
	EDesiredImageFormat_MAX                  = 4,
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060 (0x0060 - 0x0000)
struct alignas(0x10) FImageWriteOptions final
{
public:
	EDesiredImageFormat                           Format;                                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2466[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bSuccess)>                OnComplete;                                        // 0x0004(0x0014)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         CompressionQuality;                                // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverwriteFile;                                    // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAsync;                                            // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2467[0x42];                                    // 0x001E(0x0042)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FImageWriteOptions) == 0x000010, "Wrong alignment on FImageWriteOptions");
static_assert(sizeof(FImageWriteOptions) == 0x000060, "Wrong size on FImageWriteOptions");
static_assert(offsetof(FImageWriteOptions, Format) == 0x000000, "Member 'FImageWriteOptions::Format' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, OnComplete) == 0x000004, "Member 'FImageWriteOptions::OnComplete' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, CompressionQuality) == 0x000018, "Member 'FImageWriteOptions::CompressionQuality' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, bOverwriteFile) == 0x00001C, "Member 'FImageWriteOptions::bOverwriteFile' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, bAsync) == 0x00001D, "Member 'FImageWriteOptions::bAsync' has a wrong offset!");

}

