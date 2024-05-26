#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapPlanes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MagicLeapPlanes_structs.hpp"


namespace SDK::Params
{

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapPlanesComponent_RequestPlanesAsync final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesComponent_RequestPlanesAsync) == 0x000001, "Wrong alignment on MagicLeapPlanesComponent_RequestPlanesAsync");
static_assert(sizeof(MagicLeapPlanesComponent_RequestPlanesAsync) == 0x000001, "Wrong size on MagicLeapPlanesComponent_RequestPlanesAsync");
static_assert(offsetof(MagicLeapPlanesComponent_RequestPlanesAsync, ReturnValue) == 0x000000, "Member 'MagicLeapPlanesComponent_RequestPlanesAsync::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
// 0x0014 (0x0014 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_AddPersistentQuery final
{
public:
	EMagicLeapPlaneQueryType                      PersistentQueryType;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  ReturnValue;                                       // 0x0004(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_AddPersistentQuery) == 0x000004, "Wrong alignment on MagicLeapPlanesFunctionLibrary_AddPersistentQuery");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_AddPersistentQuery) == 0x000014, "Wrong size on MagicLeapPlanesFunctionLibrary_AddPersistentQuery");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_AddPersistentQuery, PersistentQueryType) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_AddPersistentQuery::PersistentQueryType' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_AddPersistentQuery, ReturnValue) == 0x000004, "Member 'MagicLeapPlanesFunctionLibrary_AddPersistentQuery::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_CreateTracker final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_CreateTracker) == 0x000001, "Wrong alignment on MagicLeapPlanesFunctionLibrary_CreateTracker");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_CreateTracker) == 0x000001, "Wrong size on MagicLeapPlanesFunctionLibrary_CreateTracker");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_CreateTracker, ReturnValue) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_CreateTracker::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_DestroyTracker final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_DestroyTracker) == 0x000001, "Wrong alignment on MagicLeapPlanesFunctionLibrary_DestroyTracker");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_DestroyTracker) == 0x000001, "Wrong size on MagicLeapPlanesFunctionLibrary_DestroyTracker");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_DestroyTracker, ReturnValue) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_DestroyTracker::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
// 0x00A0 (0x00A0 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_GetContentScale final
{
public:
	const class AActor*                           ContentActor;                                      // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapPlaneResult                  PlaneResult;                                       // 0x0008(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FB[0x8];                                     // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ReturnValue;                                       // 0x0070(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_GetContentScale) == 0x000010, "Wrong alignment on MagicLeapPlanesFunctionLibrary_GetContentScale");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_GetContentScale) == 0x0000A0, "Wrong size on MagicLeapPlanesFunctionLibrary_GetContentScale");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_GetContentScale, ContentActor) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_GetContentScale::ContentActor' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_GetContentScale, PlaneResult) == 0x000008, "Member 'MagicLeapPlanesFunctionLibrary_GetContentScale::PlaneResult' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_GetContentScale, ReturnValue) == 0x000070, "Member 'MagicLeapPlanesFunctionLibrary_GetContentScale::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_IsTrackerValid final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_IsTrackerValid) == 0x000001, "Wrong alignment on MagicLeapPlanesFunctionLibrary_IsTrackerValid");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_IsTrackerValid) == 0x000001, "Wrong size on MagicLeapPlanesFunctionLibrary_IsTrackerValid");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_IsTrackerValid, ReturnValue) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_IsTrackerValid::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
// 0x0090 (0x0090 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync final
{
public:
	struct FMagicLeapPlanesQuery                  Query;                                             // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGuid                                  Handle;                                            // 0x0060(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(bool bSuccess, struct FGuid& QueryHandle, EMagicLeapPlaneQueryType QueryType, TArray<struct FMagicLeapPlaneResult>& NewPlanes, TArray<struct FGuid>& RemovedPlaneIDs, TArray<struct FMagicLeapPlaneBoundaries>& NewPolygons, TArray<struct FGuid>& RemovedPolygonIDs)> ResultDelegate;                                    // 0x0070(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0084(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FC[0xB];                                     // 0x0085(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync) == 0x000010, "Wrong alignment on MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync) == 0x000090, "Wrong size on MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync, Query) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync::Query' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync, Handle) == 0x000060, "Member 'MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync::Handle' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync, ResultDelegate) == 0x000070, "Member 'MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync::ResultDelegate' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync, ReturnValue) == 0x000084, "Member 'MagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
// 0x0080 (0x0080 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync final
{
public:
	struct FMagicLeapPlanesQuery                  Query;                                             // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TDelegate<void(bool bSuccess, TArray<struct FMagicLeapPlaneResult>& Planes, TArray<struct FMagicLeapPlaneBoundaries>& Polygons)> ResultDelegate;                                    // 0x0060(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0074(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FD[0xB];                                     // 0x0075(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync) == 0x000010, "Wrong alignment on MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync) == 0x000080, "Wrong size on MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync, Query) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync::Query' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync, ResultDelegate) == 0x000060, "Member 'MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync::ResultDelegate' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync, ReturnValue) == 0x000074, "Member 'MagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
// 0x0030 (0x0030 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery final
{
public:
	TArray<EMagicLeapPlaneQueryFlags>             InQueryFlags;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>             InResultFlags;                                     // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>             OutFlags;                                          // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery) == 0x000008, "Wrong alignment on MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery) == 0x000030, "Wrong size on MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery, InQueryFlags) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery::InQueryFlags' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery, InResultFlags) == 0x000010, "Member 'MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery::InResultFlags' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery, OutFlags) == 0x000020, "Member 'MagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery::OutFlags' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
// 0x0014 (0x0014 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_RemovePersistentQuery final
{
public:
	struct FGuid                                  Handle;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23FE[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_RemovePersistentQuery) == 0x000004, "Wrong alignment on MagicLeapPlanesFunctionLibrary_RemovePersistentQuery");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_RemovePersistentQuery) == 0x000014, "Wrong size on MagicLeapPlanesFunctionLibrary_RemovePersistentQuery");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_RemovePersistentQuery, Handle) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_RemovePersistentQuery::Handle' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_RemovePersistentQuery, ReturnValue) == 0x000010, "Member 'MagicLeapPlanesFunctionLibrary_RemovePersistentQuery::ReturnValue' has a wrong offset!");

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
// 0x0030 (0x0030 - 0x0000)
struct MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags final
{
public:
	TArray<EMagicLeapPlaneQueryFlags>             InPriority;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>             InFlagsToReorder;                                  // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>             OutReorderedFlags;                                 // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags) == 0x000008, "Wrong alignment on MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags");
static_assert(sizeof(MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags) == 0x000030, "Wrong size on MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags, InPriority) == 0x000000, "Member 'MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags::InPriority' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags, InFlagsToReorder) == 0x000010, "Member 'MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags::InFlagsToReorder' has a wrong offset!");
static_assert(offsetof(MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags, OutReorderedFlags) == 0x000020, "Member 'MagicLeapPlanesFunctionLibrary_ReorderPlaneFlags::OutReorderedFlags' has a wrong offset!");

}

