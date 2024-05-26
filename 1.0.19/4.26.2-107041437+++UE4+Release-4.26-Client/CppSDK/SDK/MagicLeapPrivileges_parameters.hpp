#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapPrivileges

#include "Basic.hpp"

#include "MagicLeapPrivileges_structs.hpp"


namespace SDK::Params
{

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
// 0x0002 (0x0002 - 0x0000)
struct MagicLeapPrivilegesFunctionLibrary_CheckPrivilege final
{
public:
	EMagicLeapPrivilege                           Privilege;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPrivilegesFunctionLibrary_CheckPrivilege) == 0x000001, "Wrong alignment on MagicLeapPrivilegesFunctionLibrary_CheckPrivilege");
static_assert(sizeof(MagicLeapPrivilegesFunctionLibrary_CheckPrivilege) == 0x000002, "Wrong size on MagicLeapPrivilegesFunctionLibrary_CheckPrivilege");
static_assert(offsetof(MagicLeapPrivilegesFunctionLibrary_CheckPrivilege, Privilege) == 0x000000, "Member 'MagicLeapPrivilegesFunctionLibrary_CheckPrivilege::Privilege' has a wrong offset!");
static_assert(offsetof(MagicLeapPrivilegesFunctionLibrary_CheckPrivilege, ReturnValue) == 0x000001, "Member 'MagicLeapPrivilegesFunctionLibrary_CheckPrivilege::ReturnValue' has a wrong offset!");

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
// 0x0002 (0x0002 - 0x0000)
struct MagicLeapPrivilegesFunctionLibrary_RequestPrivilege final
{
public:
	EMagicLeapPrivilege                           Privilege;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilege) == 0x000001, "Wrong alignment on MagicLeapPrivilegesFunctionLibrary_RequestPrivilege");
static_assert(sizeof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilege) == 0x000002, "Wrong size on MagicLeapPrivilegesFunctionLibrary_RequestPrivilege");
static_assert(offsetof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilege, Privilege) == 0x000000, "Member 'MagicLeapPrivilegesFunctionLibrary_RequestPrivilege::Privilege' has a wrong offset!");
static_assert(offsetof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilege, ReturnValue) == 0x000001, "Member 'MagicLeapPrivilegesFunctionLibrary_RequestPrivilege::ReturnValue' has a wrong offset!");

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
// 0x001C (0x001C - 0x0000)
struct MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync final
{
public:
	EMagicLeapPrivilege                           Privilege;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EMagicLeapPrivilege RequestedPrivilege, bool WasGranted)> ResultDelegate;                                    // 0x0004(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2400[0x3];                                     // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync) == 0x000004, "Wrong alignment on MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync");
static_assert(sizeof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync) == 0x00001C, "Wrong size on MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync");
static_assert(offsetof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync, Privilege) == 0x000000, "Member 'MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync::Privilege' has a wrong offset!");
static_assert(offsetof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync, ResultDelegate) == 0x000004, "Member 'MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync::ResultDelegate' has a wrong offset!");
static_assert(offsetof(MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync, ReturnValue) == 0x000018, "Member 'MagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync::ReturnValue' has a wrong offset!");

}

