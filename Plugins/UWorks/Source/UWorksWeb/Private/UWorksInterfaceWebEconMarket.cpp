#include "UWorksInterfaceWebEconMarket.h"

class UUWorksRequestWebGetPopular;
class UUWorksRequestWebGetMarketEligibility;
class UUWorksRequestWebGetAssetID;
class UUWorksRequestWebCancelAppListingsForUser;

void UUWorksInterfaceWebEconMarket::GetPopularMinimal(const FString& Key, const FString& Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency, const FGetPopularMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPopular* UUWorksInterfaceWebEconMarket::GetPopular() {
    return NULL;
}

void UUWorksInterfaceWebEconMarket::GetMarketEligibilityMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetMarketEligibilityMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetMarketEligibility* UUWorksInterfaceWebEconMarket::GetMarketEligibility() {
    return NULL;
}

void UUWorksInterfaceWebEconMarket::GetAssetIDMinimal(const FString& Key, int32 AppID, const FString& ListingID, const FGetAssetIDMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAssetID* UUWorksInterfaceWebEconMarket::GetAssetID() {
    return NULL;
}

void UUWorksInterfaceWebEconMarket::CancelAppListingsForUserMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous, const FCancelAppListingsForUserMinimalDelegate& Delegate) {
}

UUWorksRequestWebCancelAppListingsForUser* UUWorksInterfaceWebEconMarket::CancelAppListingsForUser() {
    return NULL;
}

UUWorksInterfaceWebEconMarket::UUWorksInterfaceWebEconMarket() {
}

