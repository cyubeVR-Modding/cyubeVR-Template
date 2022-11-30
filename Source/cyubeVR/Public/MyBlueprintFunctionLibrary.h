#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBlockTypeBP.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PerEyeRaw.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MyBlueprintFunctionLibrary.generated.h"

class UTextureRenderTarget2D;
class UObject;
class ADynamicResolutionScalingActor;
class UActorComponent;
class UTexture;
class UWidget;
class UTexture2D;
class UStaticMesh;
class UProceduralMeshComponent;

UCLASS(Blueprintable)
class CYUBEVR_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMyBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool WasMirrorResSet();
    
    UFUNCTION(BlueprintCallable)
    static void TakeSpecialScreenshot(UObject* Context, ADynamicResolutionScalingActor* DynResActor, float mul);
    
    UFUNCTION(BlueprintCallable)
    static void StopVRAMUsageCounting();
    
    UFUNCTION(BlueprintCallable)
    static void SetSpectatorTexture(UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetRetainerTexture(UTextureRenderTarget2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetResizeScreenshotForSave(bool ResizeScreenshots);
    
    UFUNCTION(BlueprintCallable)
    static void SetLeftHandedMode(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetDynamicRes(UObject* Context, float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SavePixels(const FString& FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, FString& ErrorString);
    
    UFUNCTION(BlueprintCallable)
    static void SaveFileDialog(FString& FilePath, FString& Filename, bool& success);
    
    UFUNCTION(BlueprintCallable)
    static int32 RunTest();
    
    UFUNCTION(BlueprintCallable)
    static bool RunSC3();
    
    UFUNCTION(BlueprintCallable)
    static void RecreatePhysicsStateForComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void RecordPlausibleEvent2(const FString& EventName, const FString& ValueName1, const FString& Value1, const FString& ValueName2, const FString& Value2);
    
    UFUNCTION(BlueprintCallable)
    static void RecordPlausibleEvent(const FString& EventName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void PlayControllerMotorMusic();
    
    UFUNCTION(BlueprintCallable)
    static void OpenVR_ShowKeyboard(const FString& ExistingText, FTransform WorldTransform);
    
    UFUNCTION(BlueprintCallable)
    static void OpenVR_HideKeyboard();
    
    UFUNCTION(BlueprintCallable)
    static void OpenVR_GetKeyboardText(FString& KeyboardText);
    
    UFUNCTION(BlueprintCallable)
    static void LookAtWidgetDebug(TArray<UWidget*> Widgets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* LoadTexture2D_FromFile(const FString& FullFilePath, bool& IsValid, int32& Width, int32& Height, TEnumAsByte<EPixelFormat> PixelFormat, bool bGenerateMips);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPiS();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameWindowInFocus(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void IsEditorBuild(bool& bIsEditorBuild);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDateEaster();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDateChristmas();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCDriveAlmostFull();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitVRAMUsageCounting(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void InitScreenshots();
    
    UFUNCTION(BlueprintCallable)
    static void InitO();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitGameInstancePointer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void HookUpCustomSteamVRScreenshot();
    
    UFUNCTION(BlueprintCallable)
    static void GetVRAMUsage(int32& TotalRelevantUsage, TArray<FString>& ProcessNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetVideoCaptureMirrorSettings(bool& UseVideoMirror, float& FOV, bool& UseSmoothing, float& SmoothingSpeed, bool& HideControllers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetVersionName(FString& VersionName);
    
    UFUNCTION(BlueprintCallable)
    static float GetSteamStatFloat(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSteamStat(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSHA256_BP(const TArray<uint8>& ByteArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotatorArrayAverage(const TArray<FRotator>& Rotators);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRHIName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRawProjection(FPerEyeRaw& LeftEye, FPerEyeRaw& RightEye);
    
    UFUNCTION(BlueprintCallable)
    static EBlockTypeBP GetRandomEasterEggType();
    
    UFUNCTION(BlueprintCallable)
    static bool GetRAMInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumVRAM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumRAM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumCPUThreads();
    
    UFUNCTION(BlueprintCallable)
    static void GetLeftHandedMode(bool& Enabled);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHMDRefreshRate();
    
    UFUNCTION(BlueprintCallable)
    static void GetHMDName(FString& ModelName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHardwareInfo();
    
    UFUNCTION(BlueprintCallable)
    static void GetGPURenderTime(float& GPUTime);
    
    UFUNCTION(BlueprintCallable)
    static void GetFullscreenFocusSettings(bool& Fullscreen, bool& FocusWarning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFullFOV(float& HorizontalFOV, float& VerticalFOV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBlockTypeNameAnalytics(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAVX2Support();
    
    UFUNCTION(BlueprintCallable)
    static void GetArgs(FString& Args);
    
    UFUNCTION(BlueprintCallable)
    static void ForceExitGame();
    
    UFUNCTION(BlueprintCallable)
    static void FadeSteamVRColor(float Seconds, FLinearColor Color, bool Background);
    
    UFUNCTION(BlueprintCallable)
    static bool DetectRazerCortex();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteInputIniFile();
    
    UFUNCTION(BlueprintCallable)
    static void CopyCollisionToPMC(UStaticMesh* SMC, int32 LODIndex, UProceduralMeshComponent* PMC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ClosestPointOnLine(float lx1, float ly1, float lx2, float ly2, float x0, float y0);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintVerify(bool Result, const FString& FailMessage);
    
    UFUNCTION(BlueprintCallable)
    static int32 BlueprintCrashGame(const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    static void BenchmarkCRC(FVector TestVector);
    
    UFUNCTION(BlueprintCallable)
    static void AddToRootBP(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateSteamOverlay(const FString& URL);
    
};

