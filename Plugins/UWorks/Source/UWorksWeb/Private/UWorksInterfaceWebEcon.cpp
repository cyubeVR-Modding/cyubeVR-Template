#include "UWorksInterfaceWebEcon.h"

UUWorksInterfaceWebEcon::UUWorksInterfaceWebEcon() {
}

void UUWorksInterfaceWebEcon::GetTradeOffersSummaryMinimal(const FString& Key, int32 TimeLastVisit, const FGetTradeOffersSummaryMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetTradeOffersSummary* UUWorksInterfaceWebEcon::GetTradeOffersSummary() {
    return NULL;
}

void UUWorksInterfaceWebEcon::GetTradeOffersMinimal(const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff, const FGetTradeOffersMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetTradeOffers* UUWorksInterfaceWebEcon::GetTradeOffers() {
    return NULL;
}

void UUWorksInterfaceWebEcon::GetTradeOfferMinimal(const FString& Key, const FString& TradeOfferID, const FString& Language, const FGetTradeOfferMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetTradeOffer* UUWorksInterfaceWebEcon::GetTradeOffer() {
    return NULL;
}

void UUWorksInterfaceWebEcon::GetTradeHistoryMinimal(const FString& Key, int32 MaxTrades, int32 StartAfterTime, const FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const FString& Language, bool bIncludeFailed, bool bIncludeTotal, const FGetTradeHistoryMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetTradeHistory* UUWorksInterfaceWebEcon::GetTradeHistory() {
    return NULL;
}

void UUWorksInterfaceWebEcon::FlushInventoryCacheMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID, const FFlushInventoryCacheMinimalDelegate& Delegate) {
}

UUWorksRequestWebFlushInventoryCache* UUWorksInterfaceWebEcon::FlushInventoryCache() {
    return NULL;
}

void UUWorksInterfaceWebEcon::FlushContextCacheMinimal(const FString& Key, int32 AppID, const FFlushContextCacheMinimalDelegate& Delegate) {
}

UUWorksRequestWebFlushContextCache* UUWorksInterfaceWebEcon::FlushContextCache() {
    return NULL;
}

void UUWorksInterfaceWebEcon::FlushAssetAppearanceCacheMinimal(const FString& Key, int32 AppID, const FFlushAssetAppearanceCacheMinimalDelegate& Delegate) {
}

UUWorksRequestWebFlushAssetAppearanceCache* UUWorksInterfaceWebEcon::FlushAssetAppearanceCache() {
    return NULL;
}

void UUWorksInterfaceWebEcon::DeclineTradeOfferMinimal(const FString& Key, const FString& TradeOfferID, const FDeclineTradeOfferMinimalDelegate& Delegate) {
}

UUWorksRequestWebDeclineTradeOffer* UUWorksInterfaceWebEcon::DeclineTradeOffer() {
    return NULL;
}

void UUWorksInterfaceWebEcon::CancelTradeOfferMinimal(const FString& Key, const FString& TradeOfferID, const FCancelTradeOfferMinimalDelegate& Delegate) {
}

UUWorksRequestWebCancelTradeOffer* UUWorksInterfaceWebEcon::CancelTradeOffer() {
    return NULL;
}


