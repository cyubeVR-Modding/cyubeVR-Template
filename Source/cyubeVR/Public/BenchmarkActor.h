#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BenchmarkActor.generated.h"

UCLASS()
class CYUBEVR_API ABenchmarkActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountFramesWithWrongTime;
    
    ABenchmarkActor();
    UFUNCTION(BlueprintCallable)
    static bool WereSteamVRSettingsModified();
    
    UFUNCTION(BlueprintCallable)
    static void StoreExistingSteamVRSettings();
    
    UFUNCTION(BlueprintCallable)
    void StopBenchmark();
    
    UFUNCTION(BlueprintCallable)
    void StartBenchmark();
    
    UFUNCTION(BlueprintCallable)
    static void SetupChaperoneForBenchmark(bool Benchmark);
    
    UFUNCTION(BlueprintCallable)
    static void SetSteamVRSettingsModified(bool Modified);
    
    UFUNCTION(BlueprintCallable)
    static void SetSteamVRSettings(bool Edit1, bool Edit2, bool Edit3, bool Edit4, bool ManualSS, float SSValue, bool MotionSmoothing, int32 SSValuePerApp, bool ForceDisableAsync);
    
    UFUNCTION(BlueprintCallable)
    static void SetSSValue(int32& Result);
    
    UFUNCTION(BlueprintCallable)
    static void SetSSPerAppValue(int32& Result);
    
    UFUNCTION(BlueprintCallable)
    static void SetMotionSmoothing(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceDisableAsyncReproForApp();
    
    UFUNCTION(BlueprintCallable)
    static void SetAudioSetting(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetAsyncRepro(bool Enabled, int32& Result);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreSteamVRSettings();
    
    UFUNCTION(BlueprintCallable)
    static void IsSteamVRHMDValid(bool& ValidHMD);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRenderingActiveEnough();
    
    UFUNCTION(BlueprintCallable)
    static void GetSystemInfo(FString& CPU, FString& GPU, int32& Cores, int32& Threads, FString& OSName, FString& DriverVersionName, int32& SystemMemory, int32& VideoMemory);
    
    UFUNCTION(BlueprintCallable)
    static void GetSteamVRSettings(bool& ReproCorrect, bool& SSCorrect, bool& SSCorrectPerApp, bool& DashboardCorrect, bool& MotionSmoothingCorrect);
    
    UFUNCTION(BlueprintCallable)
    static void GetRenderingResolution(int32& H, int32& W);
    
    UFUNCTION(BlueprintCallable)
    static void GetHMDModelData(FString& ModelName, FString& ManufacturerName, float& DisplayFrequency, float& HorizontalFOVPerEye, float& VerticalFOVPerEye, FString& SteamVRVersion);
    
    UFUNCTION(BlueprintCallable)
    static void GetGPUName(FString& GPU);
    
    UFUNCTION(BlueprintCallable)
    void GetFPS(float& FPS, float& FrametimeMS);
    
    UFUNCTION(BlueprintCallable)
    void GetBenchmarkResults(float& AverageFPS, float& AverageFrametime, float& Low1Percent, float& Low001Percent, bool& ActiveRendering);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAudioSetting();
    
    UFUNCTION(BlueprintCallable)
    static void EncodeScoreDetails(TArray<int32>& DetailsArray, const FString& CPUName, const FString& HeadsetName, const FString& GPUName, bool ShowName, int32 ResX, int32 ResY, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    static void DisableMinimizeButton();
    
    UFUNCTION(BlueprintCallable)
    static void DecodeScoreDetails(TArray<int32> DetailsArray, FString& GPU, FString& CPU, FString& HeadsetName, bool& ShowName, int32& ResX, int32& ResY);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboardForReddit(const FString& FPS, const FString& FPSAverageNoFormatting, const FString& FPS1Low, const FString& FPS03Low, const FString& HMDName, const FString& res, const FString& RefreshRate, const FString& HorizontalFOV, const FString& VerticalFOV, const FString& RenderedPPD, const FString& GPU, const FString& GPUMemory, const FString& GPUDriver, const FString& CPU, const FString& CoresThreads, const FString& RAM, const FString& Windows, const FString& SteamVR, const FString& OpenVRBenchmark);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BenchmarkFinishedEvent();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAudioSetting();
    
};

