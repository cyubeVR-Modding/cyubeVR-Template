#include "UWorksInterfaceWebInventory.h"

class UUWorksRequestWebExchangeItem;
class UUWorksRequestWebGetQuantity;
class UUWorksRequestWebGetPriceSheet;
class UUWorksRequestWebGetItemDefs;
class UUWorksRequestWebGetInventory;
class UUWorksRequestWebConsumeItem;
class UUWorksRequestWebConsolidate;
class UUWorksRequestWebAddPromoItem;
class UUWorksRequestWebAddItem;

void UUWorksInterfaceWebInventory::GetQuantityMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce, const FGetQuantityMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetQuantity* UUWorksInterfaceWebInventory::GetQuantity() {
    return NULL;
}

void UUWorksInterfaceWebInventory::GetPriceSheetMinimal(const FString& Key, int32 ECurrency, const FGetPriceSheetMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetPriceSheet* UUWorksInterfaceWebInventory::GetPriceSheet() {
    return NULL;
}

void UUWorksInterfaceWebInventory::GetItemDefsMinimal(const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds, const FGetItemDefsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetItemDefs* UUWorksInterfaceWebInventory::GetItemDefs() {
    return NULL;
}

void UUWorksInterfaceWebInventory::GetInventoryMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FGetInventoryMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetInventory* UUWorksInterfaceWebInventory::GetInventory() {
    return NULL;
}

void UUWorksInterfaceWebInventory::ExchangeItemMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID, const FExchangeItemMinimalDelegate& Delegate) {
}

UUWorksRequestWebExchangeItem* UUWorksInterfaceWebInventory::ExchangeItem() {
    return NULL;
}

void UUWorksInterfaceWebInventory::ConsumeItemMinimal(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID, const FConsumeItemMinimalDelegate& Delegate) {
}

UUWorksRequestWebConsumeItem* UUWorksInterfaceWebInventory::ConsumeItem() {
    return NULL;
}

void UUWorksInterfaceWebInventory::ConsolidateMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce, const FConsolidateMinimalDelegate& Delegate) {
}

UUWorksRequestWebConsolidate* UUWorksInterfaceWebInventory::Consolidate() {
    return NULL;
}

void UUWorksInterfaceWebInventory::AddPromoItemMinimal(const FString& Key, int32 AppID, FUWorksSteamItemDef ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID, const FAddPromoItemMinimalDelegate& Delegate) {
}

UUWorksRequestWebAddPromoItem* UUWorksInterfaceWebInventory::AddPromoItem() {
    return NULL;
}

void UUWorksInterfaceWebInventory::AddItemMinimal(const FString& Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID, const FAddItemMinimalDelegate& Delegate) {
}

UUWorksRequestWebAddItem* UUWorksInterfaceWebInventory::AddItem() {
    return NULL;
}

UUWorksInterfaceWebInventory::UUWorksInterfaceWebInventory() {
}

