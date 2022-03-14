#include "CubeGameInstance.h"

class UTexture2DArray;
class UTexture2D;

void UCubeGameInstance::UpdateTextureArrays() {
}

void UCubeGameInstance::UpdateMPC(float Value) {
}

void UCubeGameInstance::UpdateArraySize(UTexture2DArray* ArrayToResize, int32 NumSlices) {
}

void UCubeGameInstance::TestCopyTextureArray(UTexture2DArray* TextureArray) {
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

void UCubeGameInstance::SetupWorldLoad(bool LoadExistingWorld_, const FString& WorldName_, const FString& NewSeed_, TArray<FString> WorldNames, TArray<int32> WorldSeeds) {
}

void UCubeGameInstance::RenderCustomBlockLUT_Implementation() {
}

void UCubeGameInstance::LaterCBMInit() {
}

void UCubeGameInstance::GetBenchmarkResults(FBenchmarkResults& Results, bool& Valid) {
}

void UCubeGameInstance::CopyTextureToArraySlice(UTexture2DArray* DestArray, int32 DestSlice, UTexture2D* SourceTexture) {
}

void UCubeGameInstance::AddTextureToTextureArray(UTexture2DArray* TargetArray, UTexture2DArray* SourceArray) {
}

UCubeGameInstance::UCubeGameInstance() {
    this->LoadExistingWorld = false;
    this->WorldName = TEXT("World1");
    this->LoadingScreenMusic = NULL;
    this->LoadingScreenMusicComponent = NULL;
    this->CBM = NULL;
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
}

