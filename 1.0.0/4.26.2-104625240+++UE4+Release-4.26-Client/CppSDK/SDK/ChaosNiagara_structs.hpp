#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosNiagara

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ChaosNiagara.ELocationZToSpawnEnum
// NumValues: 0x0006
enum class ELocationZToSpawnEnum : uint8
{
	ChaosNiagara_LocationZToSpawn_None       = 0,
	ChaosNiagara_LocationZToSpawn_Min        = 1,
	ChaosNiagara_LocationZToSpawn_Max        = 2,
	ChaosNiagara_LocationZToSpawn_MinMax     = 3,
	ChaosNiagara_Max                         = 4,
	ChaosNiagara_MAX                         = 5,
};

// Enum ChaosNiagara.ELocationYToSpawnEnum
// NumValues: 0x0006
enum class ELocationYToSpawnEnum : uint8
{
	ChaosNiagara_LocationYToSpawn_None       = 0,
	ChaosNiagara_LocationYToSpawn_Min        = 1,
	ChaosNiagara_LocationYToSpawn_Max        = 2,
	ChaosNiagara_LocationYToSpawn_MinMax     = 3,
	ChaosNiagara_Max                         = 4,
	ChaosNiagara_MAX                         = 5,
};

// Enum ChaosNiagara.ELocationXToSpawnEnum
// NumValues: 0x0006
enum class ELocationXToSpawnEnum : uint8
{
	ChaosNiagara_LocationXToSpawn_None       = 0,
	ChaosNiagara_LocationXToSpawn_Min        = 1,
	ChaosNiagara_LocationXToSpawn_Max        = 2,
	ChaosNiagara_LocationXToSpawn_MinMax     = 3,
	ChaosNiagara_Max                         = 4,
	ChaosNiagara_MAX                         = 5,
};

// Enum ChaosNiagara.ELocationFilteringModeEnum
// NumValues: 0x0004
enum class ELocationFilteringModeEnum : uint8
{
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max                         = 2,
	ChaosNiagara_MAX                         = 3,
};

// Enum ChaosNiagara.EDataSourceTypeEnum
// NumValues: 0x0005
enum class EDataSourceTypeEnum : uint8
{
	ChaosNiagara_DataSourceType_Collision    = 0,
	ChaosNiagara_DataSourceType_Breaking     = 1,
	ChaosNiagara_DataSourceType_Trailing     = 2,
	ChaosNiagara_Max                         = 3,
	ChaosNiagara_MAX                         = 4,
};

// Enum ChaosNiagara.EDebugTypeEnum
// NumValues: 0x0005
enum class EDebugTypeEnum : uint8
{
	ChaosNiagara_DebugType_NoDebug           = 0,
	ChaosNiagara_DebugType_ColorBySolver     = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max                         = 3,
	ChaosNiagara_MAX                         = 4,
};

// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
// NumValues: 0x0005
enum class ERandomVelocityGenerationTypeEnum : uint8
{
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max                         = 3,
	ChaosNiagara_MAX                         = 4,
};

// Enum ChaosNiagara.EDataSortTypeEnum
// NumValues: 0x0006
enum class EDataSortTypeEnum : uint8
{
	ChaosNiagara_DataSortType_NoSorting      = 0,
	ChaosNiagara_DataSortType_RandomShuffle  = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max                         = 4,
	ChaosNiagara_MAX                         = 5,
};

// ScriptStruct ChaosNiagara.ChaosDestructionEvent
// 0x0044 (0x0044 - 0x0000)
struct FChaosDestructionEvent final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0018(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity;                                   // 0x0024(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtentMin;                                         // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtentMax;                                         // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleID;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Type;                                              // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChaosDestructionEvent) == 0x000004, "Wrong alignment on FChaosDestructionEvent");
static_assert(sizeof(FChaosDestructionEvent) == 0x000044, "Wrong size on FChaosDestructionEvent");
static_assert(offsetof(FChaosDestructionEvent, Position) == 0x000000, "Member 'FChaosDestructionEvent::Position' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, Normal) == 0x00000C, "Member 'FChaosDestructionEvent::Normal' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, Velocity) == 0x000018, "Member 'FChaosDestructionEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, AngularVelocity) == 0x000024, "Member 'FChaosDestructionEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, ExtentMin) == 0x000030, "Member 'FChaosDestructionEvent::ExtentMin' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, ExtentMax) == 0x000034, "Member 'FChaosDestructionEvent::ExtentMax' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, ParticleID) == 0x000038, "Member 'FChaosDestructionEvent::ParticleID' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, Time) == 0x00003C, "Member 'FChaosDestructionEvent::Time' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent, Type) == 0x000040, "Member 'FChaosDestructionEvent::Type' has a wrong offset!");

}

