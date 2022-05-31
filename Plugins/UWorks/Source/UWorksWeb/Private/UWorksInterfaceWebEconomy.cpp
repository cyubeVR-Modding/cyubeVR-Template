#include "UWorksInterfaceWebEconomy.h"

class UUWorksRequestWebStartTrade;
class UUWorksRequestWebStartAssetTransaction;
class UUWorksRequestWebGetMarketPrices;
class UUWorksRequestWebGetExportedAssetsForUser;
class UUWorksRequestWebGetAssetPrices;
class UUWorksRequestWebGetAssetClassInfo;
class UUWorksRequestWebFinalizeAssetTransaction;
class UUWorksRequestWebCanTrade;

void UUWorksInterfaceWebEconomy::StartTradeMinimal(const FString& Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB, const FStartTradeMinimalDelegate& Delegate) {
}

UUWorksRequestWebStartTrade* UUWorksInterfaceWebEconomy::StartTrade() {
    return NULL;
}

void UUWorksInterfaceWebEconomy::StartAssetTransactionMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& AssetID0, int32 AssetQuantity0, const FString& Currency, const FString& Language, const FString& IPAddress, const FString& Referrer, bool bClientAuth, const FStartAssetTransactionMinimalDelegate& Delegate) {
}

UUWorksRequestWebStartAssetTransaction* UUWorksInterfaceWebEconomy::StartAssetTransaction() {
    return NULL;
}

void UUWorksInterfaceWebEconomy::GetMarketPricesMinimal(const FString& Key, int32 AppID, const FGetMarketPricesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetMarketPrices* UUWorksInterfaceWebEconomy::GetMarketPrices() {
    return NULL;
}

void UUWorksInterfaceWebEconomy::GetExportedAssetsForUserMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID, const FGetExportedAssetsForUserMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetExportedAssetsForUser* UUWorksInterfaceWebEconomy::GetExportedAssetsForUser() {
    return NULL;
}

void UUWorksInterfaceWebEconomy::GetAssetPricesMinimal(const FString& Key, int32 AppID, const FString& Currency, const FString& Language, const FGetAssetPricesMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAssetPrices* UUWorksInterfaceWebEconomy::GetAssetPrices() {
    return NULL;
}

void UUWorksInterfaceWebEconomy::GetAssetClassInfoMinimal(const FString& Key, int32 AppID, int32 ClassCount, const FString& ClassID0, const FString& Language, const FString& InstanceID0, const FGetAssetClassInfoMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAssetClassInfo* UUWorksInterfaceWebEconomy::GetAssetClassInfo() {
    return NULL;
}

void UUWorksInterfaceWebEconomy::FinalizeAssetTransactionMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& TxnID, const FString& Language, const FFinalizeAssetTransactionMinimalDelegate& Delegate) {
}

UUWorksRequestWebFinalizeAssetTransaction* UUWorksInterfaceWebEconomy::FinalizeAssetTransaction() {
    return NULL;
}

void UUWorksInterfaceWebEconomy::CanTradeMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId, const FCanTradeMinimalDelegate& Delegate) {
}

UUWorksRequestWebCanTrade* UUWorksInterfaceWebEconomy::CanTrade() {
    return NULL;
}

UUWorksInterfaceWebEconomy::UUWorksInterfaceWebEconomy() {
}

