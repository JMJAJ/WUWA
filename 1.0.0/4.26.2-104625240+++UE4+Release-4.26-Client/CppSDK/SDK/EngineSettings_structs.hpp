#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineSettings

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum EngineSettings.ESubLevelStripMode
// NumValues: 0x0003
enum class ESubLevelStripMode : uint8
{
	ExactClass                               = 0,
	IsChildOf                                = 1,
	ESubLevelStripMode_MAX                   = 2,
};

// Enum EngineSettings.EFourPlayerSplitScreenType
// NumValues: 0x0004
enum class EFourPlayerSplitScreenType : uint8
{
	Grid                                     = 0,
	Vertical                                 = 1,
	Horizontal                               = 2,
	EFourPlayerSplitScreenType_MAX           = 3,
};

// Enum EngineSettings.EThreePlayerSplitScreenType
// NumValues: 0x0005
enum class EThreePlayerSplitScreenType : uint8
{
	FavorTop                                 = 0,
	FavorBottom                              = 1,
	Vertical                                 = 2,
	Horizontal                               = 3,
	EThreePlayerSplitScreenType_MAX          = 4,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
// NumValues: 0x0003
enum class ETwoPlayerSplitScreenType : uint8
{
	Horizontal                               = 0,
	Vertical                                 = 1,
	ETwoPlayerSplitScreenType_MAX            = 2,
};

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028 (0x0028 - 0x0000)
struct FAutoCompleteCommand final
{
public:
	class FString                                 Command;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Desc;                                              // 0x0010(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2470[0x8];                                     // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAutoCompleteCommand) == 0x000008, "Wrong alignment on FAutoCompleteCommand");
static_assert(sizeof(FAutoCompleteCommand) == 0x000028, "Wrong size on FAutoCompleteCommand");
static_assert(offsetof(FAutoCompleteCommand, Command) == 0x000000, "Member 'FAutoCompleteCommand::Command' has a wrong offset!");
static_assert(offsetof(FAutoCompleteCommand, Desc) == 0x000010, "Member 'FAutoCompleteCommand::Desc' has a wrong offset!");

// ScriptStruct EngineSettings.GameModeName
// 0x0030 (0x0030 - 0x0000)
struct FGameModeName final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         GameMode;                                          // 0x0010(0x0020)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameModeName) == 0x000008, "Wrong alignment on FGameModeName");
static_assert(sizeof(FGameModeName) == 0x000030, "Wrong size on FGameModeName");
static_assert(offsetof(FGameModeName, Name) == 0x000000, "Member 'FGameModeName::Name' has a wrong offset!");
static_assert(offsetof(FGameModeName, GameMode) == 0x000010, "Member 'FGameModeName::GameMode' has a wrong offset!");

}
