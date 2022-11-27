#include "UWorksInterfaceWebApps.h"

class UUWorksRequestWebUpToDateCheck;
class UUWorksRequestWebSetAppBuildLive;
class UUWorksRequestWebGetServerList;
class UUWorksRequestWebGetServersAtAddress;
class UUWorksRequestWebGetPlayersBanned;
class UUWorksRequestWebGetCheatingReportsList;
class UUWorksRequestWebGetAppList;
class UUWorksRequestWebGetAppDepotVersions;
class UUWorksRequestWebGetAppBuilds;
class UUWorksRequestWebGetAppBetas;

void UUWorksInterfaceWebApps::UpToDateCheckMinimal(int32 AppID, int32 Version, const FUpToDateCheckMinimalDelegate& Delegate) {
}

UUWorksRequestWebUpToDateCheck* UUWorksInterfaceWebApps::UpToDateCheck() {
    return NULL;
}

void UUWorksInterfaceWebApps::SetAppBuildLiveMinimal(const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description, const FSetAppBuildLiveMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetAppBuildLive* UUWorksInterfaceWebApps::SetAppBuildLive() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetServersAtAddressMinimal(const FString& Addr, const FGetServersAtAddressMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetServersAtAddress* UUWorksInterfaceWebApps::GetServersAtAddress() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetServerListMinimal(const FString& Key, const FString& Filter, int32 Limit, const FGetServerListMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetServerList* UUWorksInterfaceWebApps::GetServerList() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetPlayersBannedMinimal(const FString& Key, int32 AppID, const FGetPlayersBannedMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPlayersBanned* UUWorksInterfaceWebApps::GetPlayersBanned() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetCheatingReportsListMinimal(const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, const FString& ReportIDMin, const FGetCheatingReportsListMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetCheatingReportsList* UUWorksInterfaceWebApps::GetCheatingReportsList() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetAppListMinimal(const FGetAppListMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAppList* UUWorksInterfaceWebApps::GetAppList() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetAppDepotVersionsMinimal(const FString& Key, int32 AppID, const FGetAppDepotVersionsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAppDepotVersions* UUWorksInterfaceWebApps::GetAppDepotVersions() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetAppBuildsMinimal(const FString& Key, int32 AppID, int32 Count, const FGetAppBuildsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAppBuilds* UUWorksInterfaceWebApps::GetAppBuilds() {
    return NULL;
}

void UUWorksInterfaceWebApps::GetAppBetasMinimal(const FString& Key, int32 AppID, const FGetAppBetasMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAppBetas* UUWorksInterfaceWebApps::GetAppBetas() {
    return NULL;
}

UUWorksInterfaceWebApps::UUWorksInterfaceWebApps() {
}

