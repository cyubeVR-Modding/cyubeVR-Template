#include "BenchmarkActor.h"

bool ABenchmarkActor::WereSteamVRSettingsModified() {
    return false;
}

void ABenchmarkActor::StoreExistingSteamVRSettings() {
}

void ABenchmarkActor::StopBenchmark() {
}

void ABenchmarkActor::StartBenchmark() {
}

void ABenchmarkActor::SetupChaperoneForBenchmark(bool Benchmark) {
}

void ABenchmarkActor::SetSteamVRSettingsModified(bool Modified) {
}

void ABenchmarkActor::SetSteamVRSettings(bool Edit1, bool Edit2, bool Edit3, bool Edit4, bool ManualSS, float SSValue, bool MotionSmoothing, int32 SSValuePerApp, bool ForceDisableAsync) {
}

void ABenchmarkActor::SetSSValue(int32& Result) {
}

void ABenchmarkActor::SetSSPerAppValue(int32& Result) {
}

void ABenchmarkActor::SetMotionSmoothing(bool Enabled) {
}

void ABenchmarkActor::SetForceDisableAsyncReproForApp() {
}

void ABenchmarkActor::SetAudioSetting(bool bValue) {
}

void ABenchmarkActor::SetAsyncRepro(bool Enabled, int32& Result) {
}

void ABenchmarkActor::RestoreSteamVRSettings() {
}

void ABenchmarkActor::IsSteamVRHMDValid(bool& ValidHMD) {
}

bool ABenchmarkActor::IsRenderingActiveEnough() {
    return false;
}

void ABenchmarkActor::GetSystemInfo(FString& CPU, FString& GPU, int32& Cores, int32& Threads, FString& OSName, FString& DriverVersionName, int32& SystemMemory, int32& VideoMemory) {
}

void ABenchmarkActor::GetSteamVRSettings(bool& ReproCorrect, bool& SSCorrect, bool& SSCorrectPerApp, bool& DashboardCorrect, bool& MotionSmoothingCorrect) {
}

void ABenchmarkActor::GetRenderingResolution(int32& H, int32& W) {
}

void ABenchmarkActor::GetHMDModelData(FString& ModelName, FString& ManufacturerName, float& DisplayFrequency, float& HorizontalFOVPerEye, float& VerticalFOVPerEye, FString& SteamVRVersion) {
}

void ABenchmarkActor::GetGPUName(FString& GPU) {
}

void ABenchmarkActor::GetFPS(float& FPS, float& FrametimeMS) {
}

void ABenchmarkActor::GetBenchmarkResults(float& AverageFPS, float& AverageFrametime, float& Low1Percent, float& Low001Percent, bool& ActiveRendering) {
}

bool ABenchmarkActor::GetAudioSetting() {
    return false;
}

void ABenchmarkActor::EncodeScoreDetails(TArray<int32>& DetailsArray, const FString& CPUName, const FString& HeadsetName, const FString& GPUName, bool ShowName, int32 ResX, int32 ResY, int32 Version) {
}

void ABenchmarkActor::DisableMinimizeButton() {
}

void ABenchmarkActor::DecodeScoreDetails(TArray<int32> DetailsArray, FString& GPU, FString& CPU, FString& HeadsetName, bool& ShowName, int32& ResX, int32& ResY) {
}

void ABenchmarkActor::CopyToClipboardForReddit(const FString& FPS, const FString& FPSAverageNoFormatting, const FString& FPS1Low, const FString& FPS03Low, const FString& HMDName, const FString& res, const FString& RefreshRate, const FString& HorizontalFOV, const FString& VerticalFOV, const FString& RenderedPPD, const FString& GPU, const FString& GPUMemory, const FString& GPUDriver, const FString& CPU, const FString& CoresThreads, const FString& RAM, const FString& Windows, const FString& SteamVR, const FString& OpenVRBenchmark) {
}

void ABenchmarkActor::BenchmarkFinishedEvent_Implementation() {
}

void ABenchmarkActor::ApplyAudioSetting() {
}

ABenchmarkActor::ABenchmarkActor() {
    this->AmountFramesWithWrongTime = 0;
}

