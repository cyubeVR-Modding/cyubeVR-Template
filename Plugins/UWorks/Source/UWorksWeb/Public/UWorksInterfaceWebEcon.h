#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "CancelTradeOfferMinimalDelegateDelegate.h"
#include "DeclineTradeOfferMinimalDelegateDelegate.h"
#include "FlushAssetAppearanceCacheMinimalDelegateDelegate.h"
#include "FlushContextCacheMinimalDelegateDelegate.h"
#include "FlushInventoryCacheMinimalDelegateDelegate.h"
#include "GetTradeHistoryMinimalDelegateDelegate.h"
#include "GetTradeOfferMinimalDelegateDelegate.h"
#include "GetTradeOffersMinimalDelegateDelegate.h"
#include "GetTradeOffersSummaryMinimalDelegateDelegate.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksInterfaceWebEcon.generated.h"

class UUWorksRequestWebCancelTradeOffer;
class UUWorksRequestWebDeclineTradeOffer;
class UUWorksRequestWebFlushAssetAppearanceCache;
class UUWorksRequestWebFlushContextCache;
class UUWorksRequestWebFlushInventoryCache;
class UUWorksRequestWebGetTradeHistory;
class UUWorksRequestWebGetTradeOffer;
class UUWorksRequestWebGetTradeOffers;
class UUWorksRequestWebGetTradeOffersSummary;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebEcon : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebEcon();

    UFUNCTION(BlueprintCallable)
    static void GetTradeOffersSummaryMinimal(const FString& Key, int32 TimeLastVisit, const FGetTradeOffersSummaryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetTradeOffersSummary* GetTradeOffersSummary();
    
    UFUNCTION(BlueprintCallable)
    static void GetTradeOffersMinimal(const FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff, const FGetTradeOffersMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetTradeOffers* GetTradeOffers();
    
    UFUNCTION(BlueprintCallable)
    static void GetTradeOfferMinimal(const FString& Key, const FString& TradeOfferID, const FString& Language, const FGetTradeOfferMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetTradeOffer* GetTradeOffer();
    
    UFUNCTION(BlueprintCallable)
    static void GetTradeHistoryMinimal(const FString& Key, int32 MaxTrades, int32 StartAfterTime, const FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const FString& Language, bool bIncludeFailed, bool bIncludeTotal, const FGetTradeHistoryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetTradeHistory* GetTradeHistory();
    
    UFUNCTION(BlueprintCallable)
    static void FlushInventoryCacheMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID, const FFlushInventoryCacheMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebFlushInventoryCache* FlushInventoryCache();
    
    UFUNCTION(BlueprintCallable)
    static void FlushContextCacheMinimal(const FString& Key, int32 AppID, const FFlushContextCacheMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebFlushContextCache* FlushContextCache();
    
    UFUNCTION(BlueprintCallable)
    static void FlushAssetAppearanceCacheMinimal(const FString& Key, int32 AppID, const FFlushAssetAppearanceCacheMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebFlushAssetAppearanceCache* FlushAssetAppearanceCache();
    
    UFUNCTION(BlueprintCallable)
    static void DeclineTradeOfferMinimal(const FString& Key, const FString& TradeOfferID, const FDeclineTradeOfferMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebDeclineTradeOffer* DeclineTradeOffer();
    
    UFUNCTION(BlueprintCallable)
    static void CancelTradeOfferMinimal(const FString& Key, const FString& TradeOfferID, const FCancelTradeOfferMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebCancelTradeOffer* CancelTradeOffer();
    
};

