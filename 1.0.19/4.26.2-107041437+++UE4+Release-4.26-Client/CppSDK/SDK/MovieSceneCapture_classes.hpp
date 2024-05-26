#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "MovieSceneCapture_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ImageWriteQueue_structs.hpp"


namespace SDK
{

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0030 (0x0060 - 0x0030)
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	uint8                                         Pad_25A7[0x28];                                    // 0x0030(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	EMovieSceneCaptureProtocolState               State;                                             // 0x0058(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_25A8[0x7];                                     // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	EMovieSceneCaptureProtocolState GetState() const;
	bool IsCapturing() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureProtocolBase">();
	}
	static class UMovieSceneCaptureProtocolBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureProtocolBase>();
	}
};
static_assert(alignof(UMovieSceneCaptureProtocolBase) == 0x000008, "Wrong alignment on UMovieSceneCaptureProtocolBase");
static_assert(sizeof(UMovieSceneCaptureProtocolBase) == 0x000060, "Wrong size on UMovieSceneCaptureProtocolBase");
static_assert(offsetof(UMovieSceneCaptureProtocolBase, State) == 0x000058, "Member 'UMovieSceneCaptureProtocolBase::State' has a wrong offset!");

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000 (0x0060 - 0x0060)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAudioCaptureProtocolBase">();
	}
	static class UMovieSceneAudioCaptureProtocolBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAudioCaptureProtocolBase>();
	}
};
static_assert(alignof(UMovieSceneAudioCaptureProtocolBase) == 0x000008, "Wrong alignment on UMovieSceneAudioCaptureProtocolBase");
static_assert(sizeof(UMovieSceneAudioCaptureProtocolBase) == 0x000060, "Wrong size on UMovieSceneAudioCaptureProtocolBase");

// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (0x0060 - 0x0060)
class UNullAudioCaptureProtocol final : public UMovieSceneAudioCaptureProtocolBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NullAudioCaptureProtocol">();
	}
	static class UNullAudioCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNullAudioCaptureProtocol>();
	}
};
static_assert(alignof(UNullAudioCaptureProtocol) == 0x000008, "Wrong alignment on UNullAudioCaptureProtocol");
static_assert(sizeof(UNullAudioCaptureProtocol) == 0x000060, "Wrong size on UNullAudioCaptureProtocol");

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0038 (0x0098 - 0x0060)
class UMasterAudioSubmixCaptureProtocol final : public UMovieSceneAudioCaptureProtocolBase
{
public:
	class FString                                 FileName;                                          // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_25A9[0x28];                                    // 0x0070(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MasterAudioSubmixCaptureProtocol">();
	}
	static class UMasterAudioSubmixCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMasterAudioSubmixCaptureProtocol>();
	}
};
static_assert(alignof(UMasterAudioSubmixCaptureProtocol) == 0x000008, "Wrong alignment on UMasterAudioSubmixCaptureProtocol");
static_assert(sizeof(UMasterAudioSubmixCaptureProtocol) == 0x000098, "Wrong size on UMasterAudioSubmixCaptureProtocol");
static_assert(offsetof(UMasterAudioSubmixCaptureProtocol, FileName) == 0x000060, "Member 'UMasterAudioSubmixCaptureProtocol::FileName' has a wrong offset!");

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000 (0x0060 - 0x0060)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneImageCaptureProtocolBase">();
	}
	static class UMovieSceneImageCaptureProtocolBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneImageCaptureProtocolBase>();
	}
};
static_assert(alignof(UMovieSceneImageCaptureProtocolBase) == 0x000008, "Wrong alignment on UMovieSceneImageCaptureProtocolBase");
static_assert(sizeof(UMovieSceneImageCaptureProtocolBase) == 0x000060, "Wrong size on UMovieSceneImageCaptureProtocolBase");

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0070 (0x00D0 - 0x0060)
class UCompositionGraphCaptureProtocol final : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses         IncludeRenderPasses;                               // 0x0060(0x0010)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                          bCaptureFramesInHDR;                               // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25AA[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HDRCompressionQuality;                             // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHDRCaptureGamut                              CaptureGamut;                                      // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25AB[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        PostProcessingMaterial;                            // 0x0080(0x0020)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableScreenPercentage;                          // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25AC[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     PostProcessingMaterialPtr;                         // 0x00A8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_25AD[0x20];                                    // 0x00B0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositionGraphCaptureProtocol">();
	}
	static class UCompositionGraphCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositionGraphCaptureProtocol>();
	}
};
static_assert(alignof(UCompositionGraphCaptureProtocol) == 0x000008, "Wrong alignment on UCompositionGraphCaptureProtocol");
static_assert(sizeof(UCompositionGraphCaptureProtocol) == 0x0000D0, "Wrong size on UCompositionGraphCaptureProtocol");
static_assert(offsetof(UCompositionGraphCaptureProtocol, IncludeRenderPasses) == 0x000060, "Member 'UCompositionGraphCaptureProtocol::IncludeRenderPasses' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, bCaptureFramesInHDR) == 0x000070, "Member 'UCompositionGraphCaptureProtocol::bCaptureFramesInHDR' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, HDRCompressionQuality) == 0x000074, "Member 'UCompositionGraphCaptureProtocol::HDRCompressionQuality' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, CaptureGamut) == 0x000078, "Member 'UCompositionGraphCaptureProtocol::CaptureGamut' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterial) == 0x000080, "Member 'UCompositionGraphCaptureProtocol::PostProcessingMaterial' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, bDisableScreenPercentage) == 0x0000A0, "Member 'UCompositionGraphCaptureProtocol::bDisableScreenPercentage' has a wrong offset!");
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr) == 0x0000A8, "Member 'UCompositionGraphCaptureProtocol::PostProcessingMaterialPtr' has a wrong offset!");

// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0010 (0x0070 - 0x0060)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	uint8                                         Pad_25AE[0x10];                                    // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FrameGrabberProtocol">();
	}
	static class UFrameGrabberProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrameGrabberProtocol>();
	}
};
static_assert(alignof(UFrameGrabberProtocol) == 0x000008, "Wrong alignment on UFrameGrabberProtocol");
static_assert(sizeof(UFrameGrabberProtocol) == 0x000070, "Wrong size on UFrameGrabberProtocol");

// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0070 (0x00E0 - 0x0070)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	uint8                                         Pad_25AF[0x70];                                    // 0x0070(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol">();
	}
	static class UImageSequenceProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol>();
	}
};
static_assert(alignof(UImageSequenceProtocol) == 0x000008, "Wrong alignment on UImageSequenceProtocol");
static_assert(sizeof(UImageSequenceProtocol) == 0x0000E0, "Wrong size on UImageSequenceProtocol");

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0008 (0x00E8 - 0x00E0)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int32                                         CompressionQuality;                                // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25B0[0x4];                                     // 0x00E4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompressedImageSequenceProtocol">();
	}
	static class UCompressedImageSequenceProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompressedImageSequenceProtocol>();
	}
};
static_assert(alignof(UCompressedImageSequenceProtocol) == 0x000008, "Wrong alignment on UCompressedImageSequenceProtocol");
static_assert(sizeof(UCompressedImageSequenceProtocol) == 0x0000E8, "Wrong size on UCompressedImageSequenceProtocol");
static_assert(offsetof(UCompressedImageSequenceProtocol, CompressionQuality) == 0x0000E0, "Member 'UCompressedImageSequenceProtocol::CompressionQuality' has a wrong offset!");

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_BMP final : public UImageSequenceProtocol
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_BMP">();
	}
	static class UImageSequenceProtocol_BMP* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_BMP>();
	}
};
static_assert(alignof(UImageSequenceProtocol_BMP) == 0x000008, "Wrong alignment on UImageSequenceProtocol_BMP");
static_assert(sizeof(UImageSequenceProtocol_BMP) == 0x0000E0, "Wrong size on UImageSequenceProtocol_BMP");

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000 (0x00E8 - 0x00E8)
class UImageSequenceProtocol_PNG final : public UCompressedImageSequenceProtocol
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_PNG">();
	}
	static class UImageSequenceProtocol_PNG* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_PNG>();
	}
};
static_assert(alignof(UImageSequenceProtocol_PNG) == 0x000008, "Wrong alignment on UImageSequenceProtocol_PNG");
static_assert(sizeof(UImageSequenceProtocol_PNG) == 0x0000E8, "Wrong size on UImageSequenceProtocol_PNG");

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000 (0x00E8 - 0x00E8)
class UImageSequenceProtocol_JPG final : public UCompressedImageSequenceProtocol
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_JPG">();
	}
	static class UImageSequenceProtocol_JPG* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_JPG>();
	}
};
static_assert(alignof(UImageSequenceProtocol_JPG) == 0x000008, "Wrong alignment on UImageSequenceProtocol_JPG");
static_assert(sizeof(UImageSequenceProtocol_JPG) == 0x0000E8, "Wrong size on UImageSequenceProtocol_JPG");

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0010 (0x00F0 - 0x00E0)
class UImageSequenceProtocol_EXR final : public UImageSequenceProtocol
{
public:
	bool                                          bCompressed;                                       // 0x00E0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHDRCaptureGamut                              CaptureGamut;                                      // 0x00E1(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25B1[0xE];                                     // 0x00E2(0x000E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageSequenceProtocol_EXR">();
	}
	static class UImageSequenceProtocol_EXR* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageSequenceProtocol_EXR>();
	}
};
static_assert(alignof(UImageSequenceProtocol_EXR) == 0x000008, "Wrong alignment on UImageSequenceProtocol_EXR");
static_assert(sizeof(UImageSequenceProtocol_EXR) == 0x0000F0, "Wrong size on UImageSequenceProtocol_EXR");
static_assert(offsetof(UImageSequenceProtocol_EXR, bCompressed) == 0x0000E0, "Member 'UImageSequenceProtocol_EXR::bCompressed' has a wrong offset!");
static_assert(offsetof(UImageSequenceProtocol_EXR, CaptureGamut) == 0x0000E1, "Member 'UImageSequenceProtocol_EXR::CaptureGamut' has a wrong offset!");

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0030 - 0x0030)
class IMovieSceneCaptureInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureInterface">();
	}
	static class IMovieSceneCaptureInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneCaptureInterface>();
	}
};
static_assert(alignof(IMovieSceneCaptureInterface) == 0x000008, "Wrong alignment on IMovieSceneCaptureInterface");
static_assert(sizeof(IMovieSceneCaptureInterface) == 0x000030, "Wrong size on IMovieSceneCaptureInterface");

// Class MovieSceneCapture.MovieSceneCapture
// 0x0208 (0x0238 - 0x0030)
class UMovieSceneCapture : public UObject
{
public:
	uint8                                         Pad_25B2[0x10];                                    // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         ImageCaptureProtocolType;                          // 0x0040(0x0020)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         AudioCaptureProtocolType;                          // 0x0060(0x0020)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneImageCaptureProtocolBase*    ImageCaptureProtocol;                              // 0x0080(0x0008)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneAudioCaptureProtocolBase*    AudioCaptureProtocol;                              // 0x0088(0x0008)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings             Settings;                                          // 0x0090(0x0070)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                          bUseSeparateProcess;                               // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCloseEditorWhenCaptureStarts;                     // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25B3[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AdditionalCommandLineArguments;                    // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InheritedCommandLineArguments;                     // 0x0118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25B4[0x110];                                   // 0x0128(0x0110)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	void SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
	void SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCapture">();
	}
	static class UMovieSceneCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCapture>();
	}
};
static_assert(alignof(UMovieSceneCapture) == 0x000008, "Wrong alignment on UMovieSceneCapture");
static_assert(sizeof(UMovieSceneCapture) == 0x000238, "Wrong size on UMovieSceneCapture");
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocolType) == 0x000040, "Member 'UMovieSceneCapture::ImageCaptureProtocolType' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocolType) == 0x000060, "Member 'UMovieSceneCapture::AudioCaptureProtocolType' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocol) == 0x000080, "Member 'UMovieSceneCapture::ImageCaptureProtocol' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocol) == 0x000088, "Member 'UMovieSceneCapture::AudioCaptureProtocol' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, Settings) == 0x000090, "Member 'UMovieSceneCapture::Settings' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, bUseSeparateProcess) == 0x000100, "Member 'UMovieSceneCapture::bUseSeparateProcess' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, bCloseEditorWhenCaptureStarts) == 0x000101, "Member 'UMovieSceneCapture::bCloseEditorWhenCaptureStarts' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 0x000108, "Member 'UMovieSceneCapture::AdditionalCommandLineArguments' has a wrong offset!");
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 0x000118, "Member 'UMovieSceneCapture::InheritedCommandLineArguments' has a wrong offset!");

// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0258 - 0x0238)
class ULevelCapture final : public UMovieSceneCapture
{
public:
	bool                                          bAutoStartCapture;                                 // 0x0238(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25B5[0xB];                                     // 0x0239(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  PrerequisiteActorId;                               // 0x0244(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_25B6[0x4];                                     // 0x0254(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelCapture">();
	}
	static class ULevelCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelCapture>();
	}
};
static_assert(alignof(ULevelCapture) == 0x000008, "Wrong alignment on ULevelCapture");
static_assert(sizeof(ULevelCapture) == 0x000258, "Wrong size on ULevelCapture");
static_assert(offsetof(ULevelCapture, bAutoStartCapture) == 0x000238, "Member 'ULevelCapture::bAutoStartCapture' has a wrong offset!");
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 0x000244, "Member 'ULevelCapture::PrerequisiteActorId' has a wrong offset!");

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneCaptureEnvironment final : public UObject
{
public:
	static class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
	static class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
	static float GetCaptureElapsedTime();
	static int32 GetCaptureFrameNumber();
	static bool IsCaptureInProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCaptureEnvironment">();
	}
	static class UMovieSceneCaptureEnvironment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCaptureEnvironment>();
	}
};
static_assert(alignof(UMovieSceneCaptureEnvironment) == 0x000008, "Wrong alignment on UMovieSceneCaptureEnvironment");
static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x000030, "Wrong size on UMovieSceneCaptureEnvironment");

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0080 (0x00E0 - 0x0060)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                 World;                                             // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_25B7[0x78];                                    // 0x0068(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnBeginFinalize();
	void OnCaptureFrame();
	void OnFinalize();
	void OnPauseCapture();
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);
	void OnPreTick();
	bool OnSetup();
	void OnStartCapture();
	void OnTick();
	void OnWarmUp();
	void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID);
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);
	void StopCapturingFinalPixels();

	class FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics) const;
	struct FFrameMetrics GetCurrentFrameMetrics() const;
	bool OnCanFinalize() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UserDefinedCaptureProtocol">();
	}
	static class UUserDefinedCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserDefinedCaptureProtocol>();
	}
};
static_assert(alignof(UUserDefinedCaptureProtocol) == 0x000008, "Wrong alignment on UUserDefinedCaptureProtocol");
static_assert(sizeof(UUserDefinedCaptureProtocol) == 0x0000E0, "Wrong size on UUserDefinedCaptureProtocol");
static_assert(offsetof(UUserDefinedCaptureProtocol, World) == 0x000060, "Member 'UUserDefinedCaptureProtocol::World' has a wrong offset!");

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0008 (0x00E8 - 0x00E0)
class UUserDefinedImageCaptureProtocol final : public UUserDefinedCaptureProtocol
{
public:
	EDesiredImageFormat                           Format;                                            // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableCompression;                                // 0x00E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25B8[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CompressionQuality;                                // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class FString GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID);
	class FString GenerateFilenameForCurrentFrame();
	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UserDefinedImageCaptureProtocol">();
	}
	static class UUserDefinedImageCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserDefinedImageCaptureProtocol>();
	}
};
static_assert(alignof(UUserDefinedImageCaptureProtocol) == 0x000008, "Wrong alignment on UUserDefinedImageCaptureProtocol");
static_assert(sizeof(UUserDefinedImageCaptureProtocol) == 0x0000E8, "Wrong size on UUserDefinedImageCaptureProtocol");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, Format) == 0x0000E0, "Member 'UUserDefinedImageCaptureProtocol::Format' has a wrong offset!");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, bEnableCompression) == 0x0000E1, "Member 'UUserDefinedImageCaptureProtocol::bEnableCompression' has a wrong offset!");
static_assert(offsetof(UUserDefinedImageCaptureProtocol, CompressionQuality) == 0x0000E4, "Member 'UUserDefinedImageCaptureProtocol::CompressionQuality' has a wrong offset!");

// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (0x0088 - 0x0070)
class UVideoCaptureProtocol final : public UFrameGrabberProtocol
{
public:
	bool                                          bUseCompression;                                   // 0x0070(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25BA[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CompressionQuality;                                // 0x0074(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25BB[0x10];                                    // 0x0078(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VideoCaptureProtocol">();
	}
	static class UVideoCaptureProtocol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVideoCaptureProtocol>();
	}
};
static_assert(alignof(UVideoCaptureProtocol) == 0x000008, "Wrong alignment on UVideoCaptureProtocol");
static_assert(sizeof(UVideoCaptureProtocol) == 0x000088, "Wrong size on UVideoCaptureProtocol");
static_assert(offsetof(UVideoCaptureProtocol, bUseCompression) == 0x000070, "Member 'UVideoCaptureProtocol::bUseCompression' has a wrong offset!");
static_assert(offsetof(UVideoCaptureProtocol, CompressionQuality) == 0x000074, "Member 'UVideoCaptureProtocol::CompressionQuality' has a wrong offset!");

}

