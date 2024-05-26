#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RoadNetRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum RoadNetRuntime.ERoadNetCoordinateSpace
// NumValues: 0x0003
enum class ERoadNetCoordinateSpace : uint8
{
	Local                                    = 0,
	World                                    = 1,
	ERoadNetCoordinateSpace_MAX              = 2,
};

// ScriptStruct RoadNetRuntime.RoadNetNode
// 0x0070 (0x0070 - 0x0000)
struct FRoadNetNode final
{
public:
	int32                                         NodeID;                                            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Pos;                                               // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             TilePos;                                           // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AEF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<int32>                                   LinkIDs;                                           // 0x0020(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRoadNetNode) == 0x000008, "Wrong alignment on FRoadNetNode");
static_assert(sizeof(FRoadNetNode) == 0x000070, "Wrong size on FRoadNetNode");
static_assert(offsetof(FRoadNetNode, NodeID) == 0x000000, "Member 'FRoadNetNode::NodeID' has a wrong offset!");
static_assert(offsetof(FRoadNetNode, Pos) == 0x000004, "Member 'FRoadNetNode::Pos' has a wrong offset!");
static_assert(offsetof(FRoadNetNode, TilePos) == 0x000010, "Member 'FRoadNetNode::TilePos' has a wrong offset!");
static_assert(offsetof(FRoadNetNode, LinkIDs) == 0x000020, "Member 'FRoadNetNode::LinkIDs' has a wrong offset!");

}

