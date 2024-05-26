#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StaticMeshDescription

#include "Basic.hpp"

#include "MeshDescription_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// 0x0034 (0x0034 - 0x0000)
struct StaticMeshDescription_CreateCube final
{
public:
	struct FVector                                Center;                                            // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HalfExtents;                                       // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                        PolygonGroup;                                      // 0x0018(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_PlusX;                                   // 0x001C(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_MinusX;                                  // 0x0020(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_PlusY;                                   // 0x0024(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_MinusY;                                  // 0x0028(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_PlusZ;                                   // 0x002C(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID_MinusZ;                                  // 0x0030(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StaticMeshDescription_CreateCube) == 0x000004, "Wrong alignment on StaticMeshDescription_CreateCube");
static_assert(sizeof(StaticMeshDescription_CreateCube) == 0x000034, "Wrong size on StaticMeshDescription_CreateCube");
static_assert(offsetof(StaticMeshDescription_CreateCube, Center) == 0x000000, "Member 'StaticMeshDescription_CreateCube::Center' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, HalfExtents) == 0x00000C, "Member 'StaticMeshDescription_CreateCube::HalfExtents' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, PolygonGroup) == 0x000018, "Member 'StaticMeshDescription_CreateCube::PolygonGroup' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, PolygonID_PlusX) == 0x00001C, "Member 'StaticMeshDescription_CreateCube::PolygonID_PlusX' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, PolygonID_MinusX) == 0x000020, "Member 'StaticMeshDescription_CreateCube::PolygonID_MinusX' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, PolygonID_PlusY) == 0x000024, "Member 'StaticMeshDescription_CreateCube::PolygonID_PlusY' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, PolygonID_MinusY) == 0x000028, "Member 'StaticMeshDescription_CreateCube::PolygonID_MinusY' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, PolygonID_PlusZ) == 0x00002C, "Member 'StaticMeshDescription_CreateCube::PolygonID_PlusZ' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_CreateCube, PolygonID_MinusZ) == 0x000030, "Member 'StaticMeshDescription_CreateCube::PolygonID_MinusZ' has a wrong offset!");

// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// 0x0010 (0x0010 - 0x0000)
struct StaticMeshDescription_SetPolygonGroupMaterialSlotName final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SlotName;                                          // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StaticMeshDescription_SetPolygonGroupMaterialSlotName) == 0x000004, "Wrong alignment on StaticMeshDescription_SetPolygonGroupMaterialSlotName");
static_assert(sizeof(StaticMeshDescription_SetPolygonGroupMaterialSlotName) == 0x000010, "Wrong size on StaticMeshDescription_SetPolygonGroupMaterialSlotName");
static_assert(offsetof(StaticMeshDescription_SetPolygonGroupMaterialSlotName, PolygonGroupID) == 0x000000, "Member 'StaticMeshDescription_SetPolygonGroupMaterialSlotName::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_SetPolygonGroupMaterialSlotName, SlotName) == 0x000004, "Member 'StaticMeshDescription_SetPolygonGroupMaterialSlotName::SlotName' has a wrong offset!");

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// 0x0010 (0x0010 - 0x0000)
struct StaticMeshDescription_SetVertexInstanceUV final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              UV;                                                // 0x0004(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UVIndex;                                           // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StaticMeshDescription_SetVertexInstanceUV) == 0x000004, "Wrong alignment on StaticMeshDescription_SetVertexInstanceUV");
static_assert(sizeof(StaticMeshDescription_SetVertexInstanceUV) == 0x000010, "Wrong size on StaticMeshDescription_SetVertexInstanceUV");
static_assert(offsetof(StaticMeshDescription_SetVertexInstanceUV, VertexInstanceID) == 0x000000, "Member 'StaticMeshDescription_SetVertexInstanceUV::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_SetVertexInstanceUV, UV) == 0x000004, "Member 'StaticMeshDescription_SetVertexInstanceUV::UV' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_SetVertexInstanceUV, UVIndex) == 0x00000C, "Member 'StaticMeshDescription_SetVertexInstanceUV::UVIndex' has a wrong offset!");

// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// 0x0010 (0x0010 - 0x0000)
struct StaticMeshDescription_GetVertexInstanceUV final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UVIndex;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StaticMeshDescription_GetVertexInstanceUV) == 0x000004, "Wrong alignment on StaticMeshDescription_GetVertexInstanceUV");
static_assert(sizeof(StaticMeshDescription_GetVertexInstanceUV) == 0x000010, "Wrong size on StaticMeshDescription_GetVertexInstanceUV");
static_assert(offsetof(StaticMeshDescription_GetVertexInstanceUV, VertexInstanceID) == 0x000000, "Member 'StaticMeshDescription_GetVertexInstanceUV::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_GetVertexInstanceUV, UVIndex) == 0x000004, "Member 'StaticMeshDescription_GetVertexInstanceUV::UVIndex' has a wrong offset!");
static_assert(offsetof(StaticMeshDescription_GetVertexInstanceUV, ReturnValue) == 0x000008, "Member 'StaticMeshDescription_GetVertexInstanceUV::ReturnValue' has a wrong offset!");

}

