#include "UWorksInterfaceCoreScreenshots.h"

class UTexture2D;
class UUWorksInterfaceCoreScreenshots;

FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::WriteScreenshot(UTexture2D* Image) {
    return FUWorksScreenshotHandle{};
}

void UUWorksInterfaceCoreScreenshots::TriggerScreenshot() {
}

bool UUWorksInterfaceCoreScreenshots::TagUser(FUWorksScreenshotHandle Screenshot, FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksInterfaceCoreScreenshots::TagPublishedFile(FUWorksScreenshotHandle Screenshot, FUWorksPublishedFileID PublishedFileID) {
    return false;
}

bool UUWorksInterfaceCoreScreenshots::SetLocation(FUWorksScreenshotHandle Screenshot, const FString& Location) {
    return false;
}

bool UUWorksInterfaceCoreScreenshots::IsScreenshotsHooked() {
    return false;
}

void UUWorksInterfaceCoreScreenshots::HookScreenshots(bool bHook) {
}

UUWorksInterfaceCoreScreenshots* UUWorksInterfaceCoreScreenshots::GetScreenshots() {
    return NULL;
}

FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddVRScreenshotToLibrary(EUWorksVRScreenshotType Type, const FString& Filename, const FString& VRFileName) {
    return FUWorksScreenshotHandle{};
}

FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddScreenshotToLibrary(const FString& FileMame, const FString& ThumbnailFileName, int32 Width, int32 Height) {
    return FUWorksScreenshotHandle{};
}

UUWorksInterfaceCoreScreenshots::UUWorksInterfaceCoreScreenshots() {
}

