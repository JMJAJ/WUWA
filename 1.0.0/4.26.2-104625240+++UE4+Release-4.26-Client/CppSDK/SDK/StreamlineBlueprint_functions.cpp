#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StreamlineBlueprint

#include "Basic.hpp"

#include "StreamlineBlueprint_classes.hpp"
#include "StreamlineBlueprint_parameters.hpp"


namespace SDK
{

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineDLSSGMode                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDefaultDLSSGMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "GetDefaultDLSSGMode");

	Params::StreamlineLibraryDLSSG_GetDefaultDLSSGMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UStreamlineLibraryDLSSG::GetDLSSGFrames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGFrames");

	Params::StreamlineLibraryDLSSG_GetDLSSGFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   MinDriverVersionMajor                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   MinDriverVersionMinor                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryDLSSG::GetDLSSGMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGMinimumDriverVersion");

	Params::StreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = Parms.MinDriverVersionMajor;

	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = Parms.MinDriverVersionMinor;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineDLSSGMode                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDLSSGMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGMode");

	Params::StreamlineLibraryDLSSG_GetDLSSGMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   MinFrames                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   MaxFrames                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryDLSSG::GetDLSSGSupportedFramesRange(int32* MinFrames, int32* MaxFrames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGSupportedFramesRange");

	Params::StreamlineLibraryDLSSG_GetDLSSGSupportedFramesRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (MinFrames != nullptr)
		*MinFrames = Parms.MinFrames;

	if (MaxFrames != nullptr)
		*MaxFrames = Parms.MaxFrames;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<EUStreamlineDLSSGMode>           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<EUStreamlineDLSSGMode> UStreamlineLibraryDLSSG::GetSupportedDLSSGModes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "GetSupportedDLSSGModes");

	Params::StreamlineLibraryDLSSG_GetSupportedDLSSGModes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineDLSSGMode                   DLSSGMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamlineLibraryDLSSG::IsDLSSGModeSupported(EUStreamlineDLSSGMode DLSSGMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGModeSupported");

	Params::StreamlineLibraryDLSSG_IsDLSSGModeSupported Parms{};

	Parms.DLSSGMode = DLSSGMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamlineLibraryDLSSG::IsDLSSGSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGSupported");

	Params::StreamlineLibraryDLSSG_IsDLSSGSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineDLSSGSupport                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineDLSSGSupport UStreamlineLibraryDLSSG::QueryDLSSGSupport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "QueryDLSSGSupport");

	Params::StreamlineLibraryDLSSG_QueryDLSSGSupport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Frames                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryDLSSG::SetDLSSGFrames(int32 Frames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "SetDLSSGFrames");

	Params::StreamlineLibraryDLSSG_SetDLSSGFrames Parms{};

	Parms.Frames = Frames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUStreamlineDLSSGMode                   DLSSGMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryDLSSG::SetDLSSGMode(EUStreamlineDLSSGMode DLSSGMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDLSSG", "SetDLSSGMode");

	Params::StreamlineLibraryDLSSG_SetDLSSGMode Parms{};

	Parms.DLSSGMode = DLSSGMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineReflexMode                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineReflexMode UStreamlineLibraryReflex::GetDefaultReflexMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "GetDefaultReflexMode");

	Params::StreamlineLibraryReflex_GetDefaultReflexMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStreamlineLibraryReflex::GetGameLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "GetGameLatencyInMs");

	Params::StreamlineLibraryReflex_GetGameLatencyInMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStreamlineLibraryReflex::GetGameToRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "GetGameToRenderLatencyInMs");

	Params::StreamlineLibraryReflex_GetGameToRenderLatencyInMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineReflexMode                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineReflexMode UStreamlineLibraryReflex::GetReflexMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "GetReflexMode");

	Params::StreamlineLibraryReflex_GetReflexMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStreamlineLibraryReflex::GetRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "GetRenderLatencyInMs");

	Params::StreamlineLibraryReflex_GetRenderLatencyInMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamlineLibraryReflex::IsReflexSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "IsReflexSupported");

	Params::StreamlineLibraryReflex_IsReflexSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineReflexSupport               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineReflexSupport UStreamlineLibraryReflex::QueryReflexSupport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "QueryReflexSupport");

	Params::StreamlineLibraryReflex_QueryReflexSupport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUStreamlineReflexMode                  Mode                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryReflex::SetReflexMode(const EUStreamlineReflexMode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryReflex", "SetReflexMode");

	Params::StreamlineLibraryReflex_SetReflexMode Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
