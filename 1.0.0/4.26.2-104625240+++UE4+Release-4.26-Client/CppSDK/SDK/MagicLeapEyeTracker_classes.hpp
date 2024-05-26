#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapEyeTracker

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "MagicLeapEyeTracker_structs.hpp"


namespace SDK
{

// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UMagicLeapEyeTrackerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
	static bool GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapEyeTrackerFunctionLibrary">();
	}
	static class UMagicLeapEyeTrackerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapEyeTrackerFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapEyeTrackerFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapEyeTrackerFunctionLibrary");
static_assert(sizeof(UMagicLeapEyeTrackerFunctionLibrary) == 0x000030, "Wrong size on UMagicLeapEyeTrackerFunctionLibrary");

}

