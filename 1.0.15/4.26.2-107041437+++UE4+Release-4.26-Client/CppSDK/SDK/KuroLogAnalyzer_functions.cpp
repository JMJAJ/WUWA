#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroLogAnalyzer

#include "Basic.hpp"

#include "KuroLogAnalyzer_classes.hpp"
#include "KuroLogAnalyzer_parameters.hpp"


namespace SDK
{

// Function KuroLogAnalyzer.KuroLogAnalyzerLibrary.Clear
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKuroLogAnalyzerLibrary::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroLogAnalyzerLibrary", "Clear");

	Params::KuroLogAnalyzerLibrary_Clear Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroLogAnalyzer.KuroLogAnalyzerLibrary.Initialize
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   InVerbosity                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(class FName& Category, int32 Verbosity, const class FString& Format, const class FString& Message)>InLogDelegate                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKuroLogAnalyzerLibrary::Initialize(const int32 InVerbosity, const TDelegate<void(class FName& Category, int32 Verbosity, const class FString& Format, const class FString& Message)>& InLogDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroLogAnalyzerLibrary", "Initialize");

	Params::KuroLogAnalyzerLibrary_Initialize Parms{};

	Parms.InVerbosity = InVerbosity;
	Parms.InLogDelegate = InLogDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroLogAnalyzer.KuroLogAnalyzerLibrary.SetEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    bEnable                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKuroLogAnalyzerLibrary::SetEnable(const bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroLogAnalyzerLibrary", "SetEnable");

	Params::KuroLogAnalyzerLibrary_SetEnable Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

