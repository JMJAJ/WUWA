#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapAudio

#include "Basic.hpp"

#include "MagicLeapAudio_classes.hpp"
#include "MagicLeapAudio_parameters.hpp"


namespace SDK
{

// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::IsMicMuted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapAudioFunctionLibrary", "IsMicMuted");

	Params::MagicLeapAudioFunctionLibrary_IsMicMuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    IsMuted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetMicMute(bool IsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapAudioFunctionLibrary", "SetMicMute");

	Params::MagicLeapAudioFunctionLibrary_SetMicMute Parms{};

	Parms.IsMuted = IsMuted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TDelegate<void()>                       ResultDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(const TDelegate<void()>& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapAudioFunctionLibrary", "SetOnAudioJackPluggedDelegate");

	Params::MagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate Parms{};

	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TDelegate<void()>                       ResultDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(const TDelegate<void()>& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MagicLeapAudioFunctionLibrary", "SetOnAudioJackUnpluggedDelegate");

	Params::MagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate Parms{};

	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

