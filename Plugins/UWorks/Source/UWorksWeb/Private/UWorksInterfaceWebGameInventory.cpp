#include "UWorksInterfaceWebGameInventory.h"

class UUWorksRequestWebSupportGetAssetHistory;
class UUWorksRequestWebHistoryExecuteCommands;
class UUWorksRequestWebGetUserHistory;
class UUWorksRequestWebGetHistoryCommandDetails;

void UUWorksInterfaceWebGameInventory::SupportGetAssetHistoryMinimal(const FString& Key, int32 AppID, const FString& AssetID, const FString& ContextID, const FSupportGetAssetHistoryMinimalDelegate& Delegate) {
}

UUWorksRequestWebSupportGetAssetHistory* UUWorksInterfaceWebGameInventory::SupportGetAssetHistory() {
    return NULL;
}

void UUWorksInterfaceWebGameInventory::HistoryExecuteCommandsMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, const FString& ActorId, const FHistoryExecuteCommandsMinimalDelegate& Delegate) {
}

UUWorksRequestWebHistoryExecuteCommands* UUWorksInterfaceWebGameInventory::HistoryExecuteCommands() {
    return NULL;
}

void UUWorksInterfaceWebGameInventory::GetUserHistoryMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, int32 StartTime, int32 EndTime, const FGetUserHistoryMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetUserHistory* UUWorksInterfaceWebGameInventory::GetUserHistory() {
    return NULL;
}

void UUWorksInterfaceWebGameInventory::GetHistoryCommandDetailsMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& Command, const FString& ContextID, const FString& Arguments, const FGetHistoryCommandDetailsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetHistoryCommandDetails* UUWorksInterfaceWebGameInventory::GetHistoryCommandDetails() {
    return NULL;
}

UUWorksInterfaceWebGameInventory::UUWorksInterfaceWebGameInventory() {
}

