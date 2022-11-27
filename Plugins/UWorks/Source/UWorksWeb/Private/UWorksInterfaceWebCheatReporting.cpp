#include "UWorksInterfaceWebCheatReporting.h"

class UUWorksRequestWebStartSecureMultiplayerSession;
class UUWorksRequestWebRequestVacStatusForUser;
class UUWorksRequestWebRequestPlayerGameBan;
class UUWorksRequestWebReportPlayerCheating;
class UUWorksRequestWebReportCheatData;
class UUWorksRequestWebRemovePlayerGameBan;
class UUWorksRequestWebGetCheatingReports;
class UUWorksRequestWebEndSecureMultiplayerSession;

void UUWorksInterfaceWebCheatReporting::StartSecureMultiplayerSessionMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FStartSecureMultiplayerSessionMinimalDelegate& Delegate) {
}

UUWorksRequestWebStartSecureMultiplayerSession* UUWorksInterfaceWebCheatReporting::StartSecureMultiplayerSession() {
    return NULL;
}

void UUWorksInterfaceWebCheatReporting::RequestVacStatusForUserMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId, const FRequestVacStatusForUserMinimalDelegate& Delegate) {
}

UUWorksRequestWebRequestVacStatusForUser* UUWorksInterfaceWebCheatReporting::RequestVacStatusForUser() {
    return NULL;
}

void UUWorksInterfaceWebCheatReporting::RequestPlayerGameBanMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan, const FRequestPlayerGameBanMinimalDelegate& Delegate) {
}

UUWorksRequestWebRequestPlayerGameBan* UUWorksInterfaceWebCheatReporting::RequestPlayerGameBan() {
    return NULL;
}

void UUWorksInterfaceWebCheatReporting::ReportPlayerCheatingMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity, const FReportPlayerCheatingMinimalDelegate& Delegate) {
}

UUWorksRequestWebReportPlayerCheating* UUWorksInterfaceWebCheatReporting::ReportPlayerCheating() {
    return NULL;
}

void UUWorksInterfaceWebCheatReporting::ReportCheatDataMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& PathAndFileName, const FString& WebCheatURL, const FString& TimeNow, const FString& TimeStarted, const FString& TimeStopped, const FString& CheatName, int32 GameProcessID, int32 CheatProcessID, const FString& CheatParamA, const FString& CheatParamB, const FReportCheatDataMinimalDelegate& Delegate) {
}

UUWorksRequestWebReportCheatData* UUWorksInterfaceWebCheatReporting::ReportCheatData() {
    return NULL;
}

void UUWorksInterfaceWebCheatReporting::RemovePlayerGameBanMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FRemovePlayerGameBanMinimalDelegate& Delegate) {
}

UUWorksRequestWebRemovePlayerGameBan* UUWorksInterfaceWebCheatReporting::RemovePlayerGameBan() {
    return NULL;
}

void UUWorksInterfaceWebCheatReporting::GetCheatingReportsMinimal(const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID, const FGetCheatingReportsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetCheatingReports* UUWorksInterfaceWebCheatReporting::GetCheatingReports() {
    return NULL;
}

void UUWorksInterfaceWebCheatReporting::EndSecureMultiplayerSessionMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId, const FEndSecureMultiplayerSessionMinimalDelegate& Delegate) {
}

UUWorksRequestWebEndSecureMultiplayerSession* UUWorksInterfaceWebCheatReporting::EndSecureMultiplayerSession() {
    return NULL;
}

UUWorksInterfaceWebCheatReporting::UUWorksInterfaceWebCheatReporting() {
}

