#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroPakKey

#include "Basic.hpp"

#include "KuroPakKey_classes.hpp"
#include "KuroPakKey_parameters.hpp"


namespace SDK
{

// Function KuroPakKey.KuroPakKeyLibrary.GetUpdateInterval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UKuroPakKeyLibrary::GetUpdateInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroPakKeyLibrary", "GetUpdateInterval");

	Params::KuroPakKeyLibrary_GetUpdateInterval Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroPakKey.KuroPakKeyLibrary.HasPendingEncryptedPaks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKuroPakKeyLibrary::HasPendingEncryptedPaks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroPakKeyLibrary", "HasPendingEncryptedPaks");

	Params::KuroPakKeyLibrary_HasPendingEncryptedPaks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroPakKey.KuroPakKeyLibrary.LoadPakKeysFromFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           FilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKuroPakKeyLibrary::LoadPakKeysFromFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroPakKeyLibrary", "LoadPakKeysFromFile");

	Params::KuroPakKeyLibrary_LoadPakKeysFromFile Parms{};

	Parms.FilePath = std::move(FilePath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroPakKey.KuroPakKeyLibrary.NeedExtPakKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKuroPakKeyLibrary::NeedExtPakKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroPakKeyLibrary", "NeedExtPakKeys");

	Params::KuroPakKeyLibrary_NeedExtPakKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroPakKey.KuroPakKeyLibrary.SetCompleteCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(bool Success)>           Callback                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UKuroPakKeyLibrary::SetCompleteCallback(TDelegate<void(bool Success)> Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroPakKeyLibrary", "SetCompleteCallback");

	Params::KuroPakKeyLibrary_SetCompleteCallback Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroPakKey.KuroPakKeyLibrary.SetRSAPublicKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           PublicKey                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKuroPakKeyLibrary::SetRSAPublicKey(const class FString& PublicKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroPakKeyLibrary", "SetRSAPublicKey");

	Params::KuroPakKeyLibrary_SetRSAPublicKey Parms{};

	Parms.PublicKey = std::move(PublicKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroPakKey.KuroPakKeyLibrary.UnbindCallback
// (Final, Native, Static, Public, BlueprintCallable)

void UKuroPakKeyLibrary::UnbindCallback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroPakKeyLibrary", "UnbindCallback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

