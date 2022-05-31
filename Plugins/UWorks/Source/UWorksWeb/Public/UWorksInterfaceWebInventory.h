#pragma once
#include "CoreMinimal.h"
#include "GetItemDefsMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksSteamItemDef.h"
#include "GetQuantityMinimalDelegateDelegate.h"
#include "GetPriceSheetMinimalDelegateDelegate.h"
#include "GetInventoryMinimalDelegateDelegate.h"
#include "ExchangeItemMinimalDelegateDelegate.h"
#include "ConsumeItemMinimalDelegateDelegate.h"
#include "ConsolidateMinimalDelegateDelegate.h"
#include "AddPromoItemMinimalDelegateDelegate.h"
#include "AddItemMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebInventory.generated.h"

class UUWorksRequestWebGetQuantity;
class UUWorksRequestWebGetItemDefs;
class UUWorksRequestWebGetPriceSheet;
class UUWorksRequestWebGetInventory;
class UUWorksRequestWebExchangeItem;
class UUWorksRequestWebConsumeItem;
class UUWorksRequestWebAddPromoItem;
class UUWorksRequestWebConsolidate;
class UUWorksRequestWebAddItem;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebInventory : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebInventory();
    UFUNCTION(BlueprintCallable)
    static void GetQuantityMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce, const FGetQuantityMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetQuantity* GetQuantity();
    
    UFUNCTION(BlueprintCallable)
    static void GetPriceSheetMinimal(const FString& Key, int32 ECurrency, const FGetPriceSheetMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPriceSheet* GetPriceSheet();
    
    UFUNCTION(BlueprintCallable)
    static void GetItemDefsMinimal(const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds, const FGetItemDefsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetItemDefs* GetItemDefs();
    
    UFUNCTION(BlueprintCallable)
    static void GetInventoryMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FGetInventoryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetInventory* GetInventory();
    
    UFUNCTION(BlueprintCallable)
    static void ExchangeItemMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID, const FExchangeItemMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebExchangeItem* ExchangeItem();
    
    UFUNCTION(BlueprintCallable)
    static void ConsumeItemMinimal(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID, const FConsumeItemMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebConsumeItem* ConsumeItem();
    
    UFUNCTION(BlueprintCallable)
    static void ConsolidateMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce, const FConsolidateMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebConsolidate* Consolidate();
    
    UFUNCTION(BlueprintCallable)
    static void AddPromoItemMinimal(const FString& Key, int32 AppID, FUWorksSteamItemDef ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID, const FAddPromoItemMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebAddPromoItem* AddPromoItem();
    
    UFUNCTION(BlueprintCallable)
    static void AddItemMinimal(const FString& Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID, const FAddItemMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebAddItem* AddItem();
    
};

