#include "MyBlueprintFunctionLibrary.h"

class ADynamicResolutionScalingActor;
class UObject;
class UActorComponent;
class UWidget;
class UTexture;
class UTextureRenderTarget2D;
class UTexture2D;
class UStaticMesh;
class UProceduralMeshComponent;

bool UMyBlueprintFunctionLibrary::WasMirrorResSet() {
    return false;
}

void UMyBlueprintFunctionLibrary::TakeSpecialScreenshot(UObject* Context, ADynamicResolutionScalingActor* DynResActor, float mul) {
}

void UMyBlueprintFunctionLibrary::SetSpectatorTexture(UTexture* Texture) {
}

void UMyBlueprintFunctionLibrary::SetRetainerTexture(UTextureRenderTarget2D* Texture) {
}

void UMyBlueprintFunctionLibrary::SetResizeScreenshotForSave(bool ResizeScreenshots) {
}

void UMyBlueprintFunctionLibrary::SetLeftHandedMode(bool Enabled) {
}

void UMyBlueprintFunctionLibrary::SetDynamicRes(UObject* Context, float Value) {
}

bool UMyBlueprintFunctionLibrary::SavePixels(const FString& FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, FString& ErrorString) {
    return false;
}

void UMyBlueprintFunctionLibrary::SaveFileDialog(FString& FilePath, FString& Filename, bool& success) {
}

int32 UMyBlueprintFunctionLibrary::RunTest() {
    return 0;
}

bool UMyBlueprintFunctionLibrary::RunSC3() {
    return false;
}

void UMyBlueprintFunctionLibrary::RecreatePhysicsStateForComponent(UActorComponent* Component) {
}

void UMyBlueprintFunctionLibrary::PlayControllerMotorMusic() {
}

void UMyBlueprintFunctionLibrary::OpenVR_ShowKeyboard(const FString& ExistingText, FTransform WorldTransform) {
}

void UMyBlueprintFunctionLibrary::OpenVR_HideKeyboard() {
}

void UMyBlueprintFunctionLibrary::OpenVR_GetKeyboardText(FString& KeyboardText) {
}

void UMyBlueprintFunctionLibrary::LookAtWidgetDebug(TArray<UWidget*> Widgets) {
}

UTexture2D* UMyBlueprintFunctionLibrary::LoadTexture2D_FromFile(const FString& FullFilePath, bool& IsValid, int32& Width, int32& Height, TEnumAsByte<EPixelFormat> PixelFormat, bool bGenerateMips) {
    return NULL;
}

bool UMyBlueprintFunctionLibrary::IsGameWindowInFocus(UObject* Context) {
    return false;
}

void UMyBlueprintFunctionLibrary::IsEditorBuild(bool& bIsEditorBuild) {
}

bool UMyBlueprintFunctionLibrary::IsDateEaster() {
    return false;
}

bool UMyBlueprintFunctionLibrary::IsDateChristmas() {
    return false;
}

bool UMyBlueprintFunctionLibrary::IsCDriveAlmostFull() {
    return false;
}

void UMyBlueprintFunctionLibrary::InitScreenshots() {
}

void UMyBlueprintFunctionLibrary::InitO() {
}

void UMyBlueprintFunctionLibrary::HookUpCustomSteamVRScreenshot() {
}

void UMyBlueprintFunctionLibrary::GetVideoCaptureMirrorSettings(bool& UseVideoMirror, float& FOV, bool& UseSmoothing, float& SmoothingSpeed, bool& HideControllers) {
}

void UMyBlueprintFunctionLibrary::GetVersionName(FString& VersionName) {
}

int32 UMyBlueprintFunctionLibrary::GetSteamStat(const FString& StatName) {
    return 0;
}

FString UMyBlueprintFunctionLibrary::GetSHA256_BP(const TArray<uint8>& ByteArray) {
    return TEXT("");
}

FRotator UMyBlueprintFunctionLibrary::GetRotatorArrayAverage(const TArray<FRotator>& Rotators) {
    return FRotator{};
}

FString UMyBlueprintFunctionLibrary::GetRHIName() {
    return TEXT("");
}

void UMyBlueprintFunctionLibrary::GetRawProjection(FPerEyeRaw& LeftEye, FPerEyeRaw& RightEye) {
}

EBlockTypeBP UMyBlueprintFunctionLibrary::GetRandomEasterEggType() {
    return EBlockTypeBP::Stone;
}

bool UMyBlueprintFunctionLibrary::GetRAMInfo() {
    return false;
}

void UMyBlueprintFunctionLibrary::GetLeftHandedMode(bool& Enabled) {
}

void UMyBlueprintFunctionLibrary::GetHMDName(FString& ModelName) {
}

bool UMyBlueprintFunctionLibrary::GetHardwareInfo() {
    return false;
}

void UMyBlueprintFunctionLibrary::GetGPURenderTime(float& GPUTime) {
}

void UMyBlueprintFunctionLibrary::GetFullscreenFocusSettings(bool& Fullscreen, bool& FocusWarning) {
}

void UMyBlueprintFunctionLibrary::GetFullFOV(float& HorizontalFOV, float& VerticalFOV) {
}

FString UMyBlueprintFunctionLibrary::GetBlockTypeNameAnalytics(EBlockTypeBP Type) {
    return TEXT("");
}

bool UMyBlueprintFunctionLibrary::GetAVX2Support() {
    return false;
}

void UMyBlueprintFunctionLibrary::GetArgs(FString& Args) {
}

void UMyBlueprintFunctionLibrary::ForceExitGame() {
}

void UMyBlueprintFunctionLibrary::FadeSteamVRColor(float Seconds, FLinearColor Color, bool Background) {
}

void UMyBlueprintFunctionLibrary::DeleteInputIniFile() {
}

void UMyBlueprintFunctionLibrary::CopyCollisionToPMC(UStaticMesh* SMC, int32 LODIndex, UProceduralMeshComponent* PMC) {
}

FVector2D UMyBlueprintFunctionLibrary::ClosestPointOnLine(float lx1, float ly1, float lx2, float ly2, float x0, float y0) {
    return FVector2D{};
}

void UMyBlueprintFunctionLibrary::BlueprintVerify(bool Result, const FString& FailMessage) {
}

int32 UMyBlueprintFunctionLibrary::BlueprintCrashGame(const FString& ErrorMessage) {
    return 0;
}

void UMyBlueprintFunctionLibrary::BenchmarkCRC(FVector TestVector) {
}

void UMyBlueprintFunctionLibrary::AddToRootBP(UObject* Object) {
}

void UMyBlueprintFunctionLibrary::ActivateSteamOverlay(const FString& URL) {
}

UMyBlueprintFunctionLibrary::UMyBlueprintFunctionLibrary() {
}

