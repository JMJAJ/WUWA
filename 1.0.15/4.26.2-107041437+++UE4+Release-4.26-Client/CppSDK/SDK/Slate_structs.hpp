#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slate

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Slate.EVirtualKeyboardDismissAction
// NumValues: 0x0004
enum class EVirtualKeyboardDismissAction : uint8
{
	TextChangeOnDismiss                      = 0,
	TextCommitOnAccept                       = 1,
	TextCommitOnDismiss                      = 2,
	EVirtualKeyboardDismissAction_MAX        = 3,
};

// Enum Slate.EVirtualKeyboardTrigger
// NumValues: 0x0003
enum class EVirtualKeyboardTrigger : uint8
{
	OnFocusByPointer                         = 0,
	OnAllFocusEvents                         = 1,
	EVirtualKeyboardTrigger_MAX              = 2,
};

// Enum Slate.ETableViewMode
// NumValues: 0x0004
enum class ETableViewMode : uint8
{
	List                                     = 0,
	Tile                                     = 1,
	Tree                                     = 2,
	ETableViewMode_MAX                       = 3,
};

// Enum Slate.ESelectionMode
// NumValues: 0x0005
enum class ESelectionMode : uint8
{
	None                                     = 0,
	Single                                   = 1,
	SingleToggle                             = 2,
	Multi                                    = 3,
	ESelectionMode_MAX                       = 4,
};

// Enum Slate.EMultiBlockType
// NumValues: 0x000A
enum class EMultiBlockType : uint8
{
	None                                     = 0,
	ButtonRow                                = 1,
	EditableText                             = 2,
	Heading                                  = 3,
	MenuEntry                                = 4,
	Separator                                = 5,
	ToolBarButton                            = 6,
	ToolBarComboButton                       = 7,
	Widget                                   = 8,
	EMultiBlockType_MAX                      = 9,
};

// Enum Slate.EMultiBoxType
// NumValues: 0x0007
enum class EMultiBoxType : uint8
{
	MenuBar                                  = 0,
	ToolBar                                  = 1,
	VerticalToolBar                          = 2,
	UniformToolBar                           = 3,
	Menu                                     = 4,
	ButtonRow                                = 5,
	EMultiBoxType_MAX                        = 6,
};

// Enum Slate.EProgressBarFillType
// NumValues: 0x0006
enum class EProgressBarFillType : uint8
{
	LeftToRight                              = 0,
	RightToLeft                              = 1,
	FillFromCenter                           = 2,
	TopToBottom                              = 3,
	BottomToTop                              = 4,
	EProgressBarFillType_MAX                 = 5,
};

// Enum Slate.EStretch
// NumValues: 0x0009
enum class EStretch : uint8
{
	None                                     = 0,
	Fill                                     = 1,
	ScaleToFit                               = 2,
	ScaleToFitX                              = 3,
	ScaleToFitY                              = 4,
	ScaleToFill                              = 5,
	ScaleBySafeZone                          = 6,
	UserSpecified                            = 7,
	EStretch_MAX                             = 8,
};

// Enum Slate.EStretchDirection
// NumValues: 0x0004
enum class EStretchDirection : uint8
{
	Both                                     = 0,
	DownOnly                                 = 1,
	UpOnly                                   = 2,
	EStretchDirection_MAX                    = 3,
};

// Enum Slate.EScrollWhenFocusChanges
// NumValues: 0x0004
enum class EScrollWhenFocusChanges : uint8
{
	NoScroll                                 = 0,
	InstantScroll                            = 1,
	AnimatedScroll                           = 2,
	EScrollWhenFocusChanges_MAX              = 3,
};

// Enum Slate.EDescendantScrollDestination
// NumValues: 0x0004
enum class EDescendantScrollDestination : uint8
{
	IntoView                                 = 0,
	TopOrLeft                                = 1,
	Center                                   = 2,
	EDescendantScrollDestination_MAX         = 3,
};

// Enum Slate.EListItemAlignment
// NumValues: 0x0008
enum class EListItemAlignment : uint8
{
	EvenlyDistributed                        = 0,
	EvenlySize                               = 1,
	EvenlyWide                               = 2,
	LeftAligned                              = 3,
	RightAligned                             = 4,
	CenterAligned                            = 5,
	Fill                                     = 6,
	EListItemAlignment_MAX                   = 7,
};

// Enum Slate.ETextFlowDirection
// NumValues: 0x0004
enum class ETextFlowDirection : uint8
{
	Auto                                     = 0,
	LeftToRight                              = 1,
	RightToLeft                              = 2,
	ETextFlowDirection_MAX                   = 3,
};

// Enum Slate.ETextWrappingPolicy
// NumValues: 0x0003
enum class ETextWrappingPolicy : uint8
{
	DefaultWrapping                          = 0,
	AllowPerCharacterWrapping                = 1,
	ETextWrappingPolicy_MAX                  = 2,
};

// Enum Slate.ETextTransformPolicy
// NumValues: 0x0004
enum class ETextTransformPolicy : uint8
{
	None                                     = 0,
	ToLower                                  = 1,
	ToUpper                                  = 2,
	ETextTransformPolicy_MAX                 = 3,
};

// Enum Slate.ETextJustify
// NumValues: 0x0004
enum class ETextJustify : uint8
{
	Left                                     = 0,
	Center                                   = 1,
	Right                                    = 2,
	ETextJustify_MAX                         = 3,
};

// Enum Slate.ECustomizedToolMenuVisibility
// NumValues: 0x0004
enum class ECustomizedToolMenuVisibility : uint32
{
	None                                     = 0,
	Visible                                  = 1,
	Hidden                                   = 2,
	ECustomizedToolMenuVisibility_MAX        = 3,
};

// Enum Slate.EMultipleKeyBindingIndex
// NumValues: 0x0004
enum class EMultipleKeyBindingIndex : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	NumChords                                = 2,
	EMultipleKeyBindingIndex_MAX             = 3,
};

// Enum Slate.EUserInterfaceActionType
// NumValues: 0x0007
enum class EUserInterfaceActionType : uint8
{
	None                                     = 0,
	Button                                   = 1,
	ToggleButton                             = 2,
	RadioButton                              = 3,
	Check                                    = 4,
	CollapsedButton                          = 5,
	EUserInterfaceActionType_MAX             = 6,
};

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0001 (0x0001 - 0x0000)
struct FVirtualKeyboardOptions final
{
public:
	bool                                          bEnableAutocorrect;                                // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVirtualKeyboardOptions) == 0x000001, "Wrong alignment on FVirtualKeyboardOptions");
static_assert(sizeof(FVirtualKeyboardOptions) == 0x000001, "Wrong size on FVirtualKeyboardOptions");
static_assert(offsetof(FVirtualKeyboardOptions, bEnableAutocorrect) == 0x000000, "Member 'FVirtualKeyboardOptions::bEnableAutocorrect' has a wrong offset!");

// ScriptStruct Slate.CustomizedToolMenuEntry
// 0x0004 (0x0004 - 0x0000)
struct FCustomizedToolMenuEntry final
{
public:
	ECustomizedToolMenuVisibility                 Visibility;                                        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizedToolMenuEntry) == 0x000004, "Wrong alignment on FCustomizedToolMenuEntry");
static_assert(sizeof(FCustomizedToolMenuEntry) == 0x000004, "Wrong size on FCustomizedToolMenuEntry");
static_assert(offsetof(FCustomizedToolMenuEntry, Visibility) == 0x000000, "Member 'FCustomizedToolMenuEntry::Visibility' has a wrong offset!");

// ScriptStruct Slate.CustomizedToolMenuSection
// 0x0004 (0x0004 - 0x0000)
struct FCustomizedToolMenuSection final
{
public:
	ECustomizedToolMenuVisibility                 Visibility;                                        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizedToolMenuSection) == 0x000004, "Wrong alignment on FCustomizedToolMenuSection");
static_assert(sizeof(FCustomizedToolMenuSection) == 0x000004, "Wrong size on FCustomizedToolMenuSection");
static_assert(offsetof(FCustomizedToolMenuSection, Visibility) == 0x000000, "Member 'FCustomizedToolMenuSection::Visibility' has a wrong offset!");

// ScriptStruct Slate.CustomizedToolMenuNameArray
// 0x0010 (0x0010 - 0x0000)
struct FCustomizedToolMenuNameArray final
{
public:
	TArray<class FName>                           Names;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizedToolMenuNameArray) == 0x000008, "Wrong alignment on FCustomizedToolMenuNameArray");
static_assert(sizeof(FCustomizedToolMenuNameArray) == 0x000010, "Wrong size on FCustomizedToolMenuNameArray");
static_assert(offsetof(FCustomizedToolMenuNameArray, Names) == 0x000000, "Member 'FCustomizedToolMenuNameArray::Names' has a wrong offset!");

// ScriptStruct Slate.CustomizedToolMenu
// 0x01F0 (0x01F0 - 0x0000)
struct FCustomizedToolMenu final
{
public:
	class FName                                   Name;                                              // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2462[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FCustomizedToolMenuEntry> Entries;                                           // 0x0010(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuSection> Sections;                                          // 0x0060(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuNameArray> EntryOrder;                                        // 0x00B0(0x0050)(NativeAccessSpecifierPublic)
	TArray<class FName>                           SectionOrder;                                      // 0x0100(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2463[0xE0];                                    // 0x0110(0x00E0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCustomizedToolMenu) == 0x000008, "Wrong alignment on FCustomizedToolMenu");
static_assert(sizeof(FCustomizedToolMenu) == 0x0001F0, "Wrong size on FCustomizedToolMenu");
static_assert(offsetof(FCustomizedToolMenu, Name) == 0x000000, "Member 'FCustomizedToolMenu::Name' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, Entries) == 0x000010, "Member 'FCustomizedToolMenu::Entries' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, Sections) == 0x000060, "Member 'FCustomizedToolMenu::Sections' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, EntryOrder) == 0x0000B0, "Member 'FCustomizedToolMenu::EntryOrder' has a wrong offset!");
static_assert(offsetof(FCustomizedToolMenu, SectionOrder) == 0x000100, "Member 'FCustomizedToolMenu::SectionOrder' has a wrong offset!");

// ScriptStruct Slate.InputChord
// 0x0028 (0x0028 - 0x0000)
struct FInputChord final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bShift : 1;                                        // 0x0020(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCtrl : 1;                                         // 0x0020(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAlt : 1;                                          // 0x0020(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCmd : 1;                                          // 0x0020(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2464[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputChord) == 0x000008, "Wrong alignment on FInputChord");
static_assert(sizeof(FInputChord) == 0x000028, "Wrong size on FInputChord");
static_assert(offsetof(FInputChord, Key) == 0x000000, "Member 'FInputChord::Key' has a wrong offset!");

// ScriptStruct Slate.Anchors
// 0x0010 (0x0010 - 0x0000)
struct FAnchors final
{
public:
	struct FVector2D                              Minimum;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Maximum;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAnchors) == 0x000004, "Wrong alignment on FAnchors");
static_assert(sizeof(FAnchors) == 0x000010, "Wrong size on FAnchors");
static_assert(offsetof(FAnchors, Minimum) == 0x000000, "Member 'FAnchors::Minimum' has a wrong offset!");
static_assert(offsetof(FAnchors, Maximum) == 0x000008, "Member 'FAnchors::Maximum' has a wrong offset!");

}

