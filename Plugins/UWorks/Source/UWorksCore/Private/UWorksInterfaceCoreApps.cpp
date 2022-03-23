#include "UWorksInterfaceCoreApps.h"

class UUWorksRequestCoreGetFileDetails;
class UUWorksInterfaceCoreApps;

void UUWorksInterfaceCoreApps::UninstallDLC(int32 AppID) {
}

bool UUWorksInterfaceCoreApps::MarkContentCorrupt(bool bMissingFilesOnly) {
    return false;
}

void UUWorksInterfaceCoreApps::InstallDLC(int32 AppID) {
}

FString UUWorksInterfaceCoreApps::GetLaunchQueryParam(const FString& Key) {
    return TEXT("");
}

int32 UUWorksInterfaceCoreApps::GetInstalledDepots(int32 AppID, TArray<int32>& Depots, int32 MaxDepots) {
    return 0;
}

void UUWorksInterfaceCoreApps::GetFileDetailsMinimal(const FGetFileDetailsMinimalDelegate& Completed, const FString& Filename) {
}

UUWorksRequestCoreGetFileDetails* UUWorksInterfaceCoreApps::GetFileDetails() {
    return NULL;
}

int32 UUWorksInterfaceCoreApps::GetEarliestPurchaseUnixTime(int32 AppID) {
    return 0;
}

bool UUWorksInterfaceCoreApps::GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& bytesTotal) {
    return false;
}

int32 UUWorksInterfaceCoreApps::GetDLCCount() {
    return 0;
}

FString UUWorksInterfaceCoreApps::GetCurrentGameLanguage() {
    return TEXT("");
}

bool UUWorksInterfaceCoreApps::GetCurrentBetaName(FString& Name, int32 NameMaxLength) {
    return false;
}

FString UUWorksInterfaceCoreApps::GetAvailableGameLanguages() {
    return TEXT("");
}

UUWorksInterfaceCoreApps* UUWorksInterfaceCoreApps::GetApps() {
    return NULL;
}

FUWorksSteamID UUWorksInterfaceCoreApps::GetAppOwner() {
    return FUWorksSteamID{};
}

int32 UUWorksInterfaceCoreApps::GetAppInstallDir(int32 AppID, FString& Path, int32 PathMaxLength) {
    return 0;
}

int32 UUWorksInterfaceCoreApps::GetAppBuildId() {
    return 0;
}

bool UUWorksInterfaceCoreApps::BIsVACBanned() {
    return false;
}

bool UUWorksInterfaceCoreApps::BIsSubscribedFromFreeWeekend() {
    return false;
}

bool UUWorksInterfaceCoreApps::BIsSubscribedApp(int32 AppID) {
    return false;
}

bool UUWorksInterfaceCoreApps::BIsSubscribed() {
    return false;
}

bool UUWorksInterfaceCoreApps::BIsLowViolence() {
    return false;
}

bool UUWorksInterfaceCoreApps::BIsDlcInstalled(int32 AppID) {
    return false;
}

bool UUWorksInterfaceCoreApps::BIsCybercafe() {
    return false;
}

bool UUWorksInterfaceCoreApps::BIsAppInstalled(int32 AppID) {
    return false;
}

bool UUWorksInterfaceCoreApps::BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name, int32 NameMaxLength) {
    return false;
}

UUWorksInterfaceCoreApps::UUWorksInterfaceCoreApps() {
}

