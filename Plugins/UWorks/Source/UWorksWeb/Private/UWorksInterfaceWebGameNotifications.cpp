#include "UWorksInterfaceWebGameNotifications.h"

class UUWorksRequestWebUpdateSession;
class UUWorksRequestWebRequestNotifications;
class UUWorksRequestWebGetSessionDetailsForApp;
class UUWorksRequestWebEnumerateSessionsForApp;
class UUWorksRequestWebDeleteSessionBatch;
class UUWorksRequestWebDeleteSession;
class UUWorksRequestWebCreateSession;

void UUWorksInterfaceWebGameNotifications::UpdateSessionMinimal(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FUpdateSessionMinimalDelegate& Delegate) {
}

UUWorksRequestWebUpdateSession* UUWorksInterfaceWebGameNotifications::UpdateSession() {
    return NULL;
}

void UUWorksInterfaceWebGameNotifications::RequestNotificationsMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FRequestNotificationsMinimalDelegate& Delegate) {
}

UUWorksRequestWebRequestNotifications* UUWorksInterfaceWebGameNotifications::RequestNotifications() {
    return NULL;
}

void UUWorksInterfaceWebGameNotifications::GetSessionDetailsForAppMinimal(const FString& Key, FUWorksSessions Sessions, int32 AppID, const FString& Language, const FGetSessionDetailsForAppMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetSessionDetailsForApp* UUWorksInterfaceWebGameNotifications::GetSessionDetailsForApp() {
    return NULL;
}

void UUWorksInterfaceWebGameNotifications::EnumerateSessionsForAppMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language, const FEnumerateSessionsForAppMinimalDelegate& Delegate) {
}

UUWorksRequestWebEnumerateSessionsForApp* UUWorksInterfaceWebGameNotifications::EnumerateSessionsForApp() {
    return NULL;
}

void UUWorksInterfaceWebGameNotifications::DeleteSessionMinimal(const FString& Key, const FString& SessionId, int32 AppID, FUWorksSteamID SteamID, const FDeleteSessionMinimalDelegate& Delegate) {
}

void UUWorksInterfaceWebGameNotifications::DeleteSessionBatchMinimal(const FString& Key, const FString& SessionId, int32 AppID, const FDeleteSessionBatchMinimalDelegate& Delegate) {
}

UUWorksRequestWebDeleteSessionBatch* UUWorksInterfaceWebGameNotifications::DeleteSessionBatch() {
    return NULL;
}

UUWorksRequestWebDeleteSession* UUWorksInterfaceWebGameNotifications::DeleteSession() {
    return NULL;
}

void UUWorksInterfaceWebGameNotifications::CreateSessionMinimal(const FString& Key, int32 AppID, const FString& Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FCreateSessionMinimalDelegate& Delegate) {
}

UUWorksRequestWebCreateSession* UUWorksInterfaceWebGameNotifications::CreateSession() {
    return NULL;
}

UUWorksInterfaceWebGameNotifications::UUWorksInterfaceWebGameNotifications() {
}

