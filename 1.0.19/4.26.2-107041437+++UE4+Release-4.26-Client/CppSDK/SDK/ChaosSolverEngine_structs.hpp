#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosSolverEngine

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
// NumValues: 0x0007
enum class EClusterConnectionTypeEnum : uint8
{
	Chaos_PointImplicit                      = 0,
	Chaos_DelaunayTriangulation              = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None                               = 4,
	Chaos_EClsuterCreationParameters_Max     = 5,
	Chaos_MAX                                = 6,
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// 0x0070 (0x0070 - 0x0000)
struct FChaosPhysicsCollisionInfo final
{
public:
	class UPrimitiveComponent*                    Component;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComponent;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AccumulatedImpulse;                                // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0034(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OtherVelocity;                                     // 0x0040(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity;                                   // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OtherAngularVelocity;                              // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass;                                              // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OtherMass;                                         // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2627[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FChaosPhysicsCollisionInfo) == 0x000008, "Wrong alignment on FChaosPhysicsCollisionInfo");
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x000070, "Wrong size on FChaosPhysicsCollisionInfo");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x000000, "Member 'FChaosPhysicsCollisionInfo::Component' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x000008, "Member 'FChaosPhysicsCollisionInfo::OtherComponent' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x000010, "Member 'FChaosPhysicsCollisionInfo::Location' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x00001C, "Member 'FChaosPhysicsCollisionInfo::Normal' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x000028, "Member 'FChaosPhysicsCollisionInfo::AccumulatedImpulse' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x000034, "Member 'FChaosPhysicsCollisionInfo::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x000040, "Member 'FChaosPhysicsCollisionInfo::OtherVelocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x00004C, "Member 'FChaosPhysicsCollisionInfo::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x000058, "Member 'FChaosPhysicsCollisionInfo::OtherAngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Mass) == 0x000064, "Member 'FChaosPhysicsCollisionInfo::Mass' has a wrong offset!");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherMass) == 0x000068, "Member 'FChaosPhysicsCollisionInfo::OtherMass' has a wrong offset!");

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// 0x0030 (0x0030 - 0x0000)
struct FChaosBreakEvent final
{
public:
	class UPrimitiveComponent*                    Component;                                         // 0x0000(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity;                                   // 0x0020(0x000C)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass;                                              // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChaosBreakEvent) == 0x000008, "Wrong alignment on FChaosBreakEvent");
static_assert(sizeof(FChaosBreakEvent) == 0x000030, "Wrong size on FChaosBreakEvent");
static_assert(offsetof(FChaosBreakEvent, Component) == 0x000000, "Member 'FChaosBreakEvent::Component' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Location) == 0x000008, "Member 'FChaosBreakEvent::Location' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Velocity) == 0x000014, "Member 'FChaosBreakEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, AngularVelocity) == 0x000020, "Member 'FChaosBreakEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosBreakEvent, Mass) == 0x00002C, "Member 'FChaosBreakEvent::Mass' has a wrong offset!");

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// 0x0058 (0x0058 - 0x0000)
struct FChaosHandlerSet final
{
public:
	uint8                                         Pad_2628[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class UObject*>                          ChaosHandlers;                                     // 0x0008(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FChaosHandlerSet) == 0x000008, "Wrong alignment on FChaosHandlerSet");
static_assert(sizeof(FChaosHandlerSet) == 0x000058, "Wrong size on FChaosHandlerSet");
static_assert(offsetof(FChaosHandlerSet, ChaosHandlers) == 0x000008, "Member 'FChaosHandlerSet::ChaosHandlers' has a wrong offset!");

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x10) FBreakEventCallbackWrapper final
{
public:
	uint8                                         Pad_2629[0x40];                                    // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBreakEventCallbackWrapper) == 0x000010, "Wrong alignment on FBreakEventCallbackWrapper");
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x000040, "Wrong size on FBreakEventCallbackWrapper");

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// 0x0003 (0x0003 - 0x0000)
struct FChaosDebugSubstepControl final
{
public:
	bool                                          bPause;                                            // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSubstep;                                          // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStep;                                             // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChaosDebugSubstepControl) == 0x000001, "Wrong alignment on FChaosDebugSubstepControl");
static_assert(sizeof(FChaosDebugSubstepControl) == 0x000003, "Wrong size on FChaosDebugSubstepControl");
static_assert(offsetof(FChaosDebugSubstepControl, bPause) == 0x000000, "Member 'FChaosDebugSubstepControl::bPause' has a wrong offset!");
static_assert(offsetof(FChaosDebugSubstepControl, bSubstep) == 0x000001, "Member 'FChaosDebugSubstepControl::bSubstep' has a wrong offset!");
static_assert(offsetof(FChaosDebugSubstepControl, bStep) == 0x000002, "Member 'FChaosDebugSubstepControl::bStep' has a wrong offset!");

}

