#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksInterfaceWeb.h"
#include "StartTradeMinimalDelegateDelegate.h"
#include "StartAssetTransactionMinimalDelegateDelegate.h"
#include "CanTradeMinimalDelegateDelegate.h"
#include "GetMarketPricesMinimalDelegateDelegate.h"
#include "GetExportedAssetsForUserMinimalDelegateDelegate.h"
#include "GetAssetPricesMinimalDelegateDelegate.h"
#include "GetAssetClassInfoMinimalDelegateDelegate.h"
#include "FinalizeAssetTransactionMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebEconomy.generated.h"

class UUWorksRequestWebStartTrade;
class UUWorksRequestWebStartAssetTransaction;
class UUWorksRequestWebGetMarketPrices;
class UUWorksRequestWebGetExportedAssetsForUser;
class UUWorksRequestWebGetAssetPrices;
class UUWorksRequestWebGetAssetClassInfo;
class UUWorksRequestWebFinalizeAssetTransaction;
class UUWorksRequestWebCanTrade;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebEconomy : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebEconomy();
    UFUNCTION(BlueprintCallable)
    static void StartTradeMinimal(const FString& Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB, const FStartTradeMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebStartTrade* StartTrade();
    
    UFUNCTION(BlueprintCallable)
    static void StartAssetTransactionMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& AssetID0, int32 AssetQuantity0, const FString& Currency, const FString& Language, const FString& IPAddress, const FString& Referrer, bool bClientAuth, const FStartAssetTransactionMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebStartAssetTransaction* StartAssetTransaction();
    
    UFUNCTION(BlueprintCallable)
    static void GetMarketPricesMinimal(const FString& Key, int32 AppID, const FGetMarketPricesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetMarketPrices* GetMarketPrices();
    
    UFUNCTION(BlueprintCallable)
    static void GetExportedAssetsForUserMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID, const FGetExportedAssetsForUserMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetExportedAssetsForUser* GetExportedAssetsForUser();
    
    UFUNCTION(BlueprintCallable)
    static void GetAssetPricesMinimal(const FString& Key, int32 AppID, const FString& Currency, const FString& Language, const FGetAssetPricesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAssetPrices* GetAssetPrices();
    
    UFUNCTION(BlueprintCallable)
    static void GetAssetClassInfoMinimal(const FString& Key, int32 AppID, int32 ClassCount, const FString& ClassID0, const FString& Language, const FString& InstanceID0, const FGetAssetClassInfoMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAssetClassInfo* GetAssetClassInfo();
    
    UFUNCTION(BlueprintCallable)
    static void FinalizeAssetTransactionMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& TxnID, const FString& Language, const FFinalizeAssetTransactionMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebFinalizeAssetTransaction* FinalizeAssetTransaction();
    
    UFUNCTION(BlueprintCallable)
    static void CanTradeMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId, const FCanTradeMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebCanTrade* CanTrade();
    
};

