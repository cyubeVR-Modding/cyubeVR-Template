#include "CubeGameInstance.h"

UCubeGameInstance::UCubeGameInstance() {
    this->LoadExistingWorld = false;
    this->WorldName = TEXT("World1");
    this->LoadingScreenMusic = NULL;
    this->LoadingScreenMusicComponent = NULL;
    this->CBM = NULL;
    this->STAT_TotalPlaytimeHours = 0.00f;
    this->STAT_PlaytimeMinutesThisSession = 0.00f;
    this->bDoLaterCBMInit = false;
    this->AccurateSettings = false;
    this->TextureArrayMain = NULL;
    this->TextureArrayNormal = NULL;
    this->TextureArraySnowMask = NULL;
    this->TextureArrayEmissive = NULL;
    this->EmptyNormalTexture = NULL;
    this->EmptyEmissiveTexture = NULL;
    this->TestTexture = NULL;
    this->LUT = NULL;
    this->MPC = NULL;
    this->DefaultRecommendedWorkshopItems.AddDefaulted(23);
    this->CustomBlockVRAMUsageMB = -1;
}

void UCubeGameInstance::UpdateTextureArrays() {
}

void UCubeGameInstance::UpdateMPC(float Value) {
}

void UCubeGameInstance::UpdateArraySize(UTexture2DArray* ArrayToResize, int32 NumSlices) {
}

void UCubeGameInstance::TestCopyTexture2(UTexture2D* Texture, UTexture2D* TextureNew) {
}

void UCubeGameInstance::TestCopyTexture(UTexture2D* Texture) {
}

void UCubeGameInstance::StopLoadingVideo() {
}

void UCubeGameInstance::StopLoadingScreenMusic() {
}

void UCubeGameInstance::StartLoadingScreenMusic() {
}

void UCubeGameInstance::SetupWorldLoad(bool LoadExistingWorld_, const FString& WorldName_, const FString& NewSeed_, int32 PregeneratedWorldID_, TArray<FString> WorldNames, TArray<int32> WorldSeeds, TArray<int32> WorldPregeneratedIDs_) {
}

void UCubeGameInstance::RenderCustomBlockLUT_Implementation() {
}

void UCubeGameInstance::ReloadMainMenuModules() {
}

void UCubeGameInstance::LaterCBMInit() {
}

void UCubeGameInstance::KillPIDs() {
}

UTexture2D* UCubeGameInstance::GetFirstLoadedRecipeTexture() {
    return NULL;
}

void UCubeGameInstance::GetBenchmarkResults(FBenchmarkResults& Results, bool& Valid) {
}

void UCubeGameInstance::CopyTextureToArraySlice(UTexture2DArray* DestArray, int32 DestSlice, UTexture2D* SourceTexture) {
}

void UCubeGameInstance::AddTextureToTextureArray(UTexture2DArray* TargetArray, UTexture2DArray* SourceArray) {
}


