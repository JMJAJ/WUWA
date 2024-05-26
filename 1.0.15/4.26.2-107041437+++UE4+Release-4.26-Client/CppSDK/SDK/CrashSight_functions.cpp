#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CrashSight

#include "Basic.hpp"

#include "CrashSight_classes.hpp"
#include "CrashSight_parameters.hpp"


namespace SDK
{

// Function CrashSight.CrashSightProxy.SetBranchInfo
// (Final, Native, Static, Public)
// Parameters:
// class FString                           Stream                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Changelist                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashSightProxy::SetBranchInfo(const class FString& Stream, const class FString& Changelist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CrashSightProxy", "SetBranchInfo");

	Params::CrashSightProxy_SetBranchInfo Parms{};

	Parms.Stream = std::move(Stream);
	Parms.Changelist = std::move(Changelist);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CrashSight.CrashSightProxy.SetCustomData
// (Final, Native, Static, Public)
// Parameters:
// class FString                           Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Value                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashSightProxy::SetCustomData(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CrashSightProxy", "SetCustomData");

	Params::CrashSightProxy_SetCustomData Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CrashSight.CrashSightProxy.SetCustomDataByFName
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class FName                             Key                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Value                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashSightProxy::SetCustomDataByFName(const class FName& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CrashSightProxy", "SetCustomDataByFName");

	Params::CrashSightProxy_SetCustomDataByFName Parms{};

	Parms.Key = Key;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CrashSight.CrashSightProxy.SetUserId
// (Final, Native, Static, Public)
// Parameters:
// class FString                           UserId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashSightProxy::SetUserId(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CrashSightProxy", "SetUserId");

	Params::CrashSightProxy_SetUserId Parms{};

	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CrashSight.CrashSightProxy.Test
// (Final, Native, Static, Public)

void UCrashSightProxy::Test()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CrashSightProxy", "Test");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CrashSight.CrashSightProxy.TestCriticalError
// (Final, Native, Static, Public)

void UCrashSightProxy::TestCriticalError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CrashSightProxy", "TestCriticalError");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

