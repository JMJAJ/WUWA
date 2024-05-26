#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroRenderingShadingModule

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroRenderingShadingModule.KuroLensflareRenderingSystem
// 0x0010 (0x0048 - 0x0038)
class UKuroLensflareRenderingSystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_1987[0x10];                                    // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static float GetKuroLensflareSceneSampleResult();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroLensflareRenderingSystem">();
	}
	static class UKuroLensflareRenderingSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroLensflareRenderingSystem>();
	}
};
static_assert(alignof(UKuroLensflareRenderingSystem) == 0x000008, "Wrong alignment on UKuroLensflareRenderingSystem");
static_assert(sizeof(UKuroLensflareRenderingSystem) == 0x000048, "Wrong size on UKuroLensflareRenderingSystem");

}
