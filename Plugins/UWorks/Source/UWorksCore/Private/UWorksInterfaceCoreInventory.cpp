#include "UWorksInterfaceCoreInventory.h"

class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs;
class UUWorksInterfaceCoreInventory;

bool UUWorksInterfaceCoreInventory::TriggerItemDrop(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition) {
    return false;
}

bool UUWorksInterfaceCoreInventory::TransferItemQuantity(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemSourceInstanceID, int32 ItemSourceQuantity, FUWorksSteamItemInstanceID ItemDestinationInstanceID) {
    return false;
}

bool UUWorksInterfaceCoreInventory::TradeItems(FUWorksSteamInventoryResult& Handle, FUWorksSteamID SteamIDTradePartner, TArray<FUWorksSteamItemInstanceID> ItemsGiven, TArray<int32> ItemsGivenQuantities, TArray<FUWorksSteamItemInstanceID> ItemsReceived, TArray<int32> ItemsReceivedQuantities) {
    return false;
}

bool UUWorksInterfaceCoreInventory::SerializeResult(FUWorksSteamInventoryResult Handle, TArray<uint8>& Buffer) {
    return false;
}

void UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDsMinimal(const FRequestEligiblePromoItemDefinitionsIDsMinimalDelegate& Completed, FUWorksSteamID SteamID) {
}

UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDs() {
    return NULL;
}

bool UUWorksInterfaceCoreInventory::LoadItemDefinitions() {
    return false;
}

bool UUWorksInterfaceCoreInventory::GrantPromoItems(FUWorksSteamInventoryResult& Handle) {
    return false;
}

int32 UUWorksInterfaceCoreInventory::GetResultTimestamp(FUWorksSteamInventoryResult Handle) {
    return 0;
}

EUWorksResult UUWorksInterfaceCoreInventory::GetResultStatus(FUWorksSteamInventoryResult Handle) {
    return EUWorksResult::Unknown;
}

bool UUWorksInterfaceCoreInventory::GetResultItems(FUWorksSteamInventoryResult Handle, TArray<FUWorksSteamItemDetails>& items) {
    return false;
}

bool UUWorksInterfaceCoreInventory::GetItemsByID(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemInstanceID> InstanceIDs) {
    return false;
}

bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertyValue(FUWorksSteamItemDef ItemDefinition, const FString& PropertyName, FString& PropertyValue) {
    return false;
}

bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertiesNames(FUWorksSteamItemDef ItemDefinition, TArray<FString>& PropertiesNames) {
    return false;
}

bool UUWorksInterfaceCoreInventory::GetItemDefinitionIDs(TArray<FUWorksSteamItemDef>& ItemDefinitions) {
    return false;
}

UUWorksInterfaceCoreInventory* UUWorksInterfaceCoreInventory::GetInventory() {
    return NULL;
}

bool UUWorksInterfaceCoreInventory::GetEligiblePromoItemDefinitionIDs(FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef>& ItemDefinitions) {
    return false;
}

bool UUWorksInterfaceCoreInventory::GetAllItems(FUWorksSteamInventoryResult& Handle) {
    return false;
}

bool UUWorksInterfaceCoreInventory::GenerateItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions, TArray<int32> ItemQuantities) {
    return false;
}

bool UUWorksInterfaceCoreInventory::ExchangeItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemsGenerated, TArray<int32> ItemsGeneratedQuantities, TArray<FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int32> ItemsDestroyedQuantities) {
    return false;
}

void UUWorksInterfaceCoreInventory::DestroyResult(FUWorksSteamInventoryResult Handle) {
}

bool UUWorksInterfaceCoreInventory::DeserializeResult(FUWorksSteamInventoryResult& Handle, TArray<uint8> Buffer, bool bReservedMustBeFalse) {
    return false;
}

bool UUWorksInterfaceCoreInventory::ConsumeItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemInstanceID, int32 ItemQuantity) {
    return false;
}

bool UUWorksInterfaceCoreInventory::CheckResultSteamID(FUWorksSteamInventoryResult Handle, FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksInterfaceCoreInventory::AddPromoItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions) {
    return false;
}

bool UUWorksInterfaceCoreInventory::AddPromoItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition) {
    return false;
}

UUWorksInterfaceCoreInventory::UUWorksInterfaceCoreInventory() {
}

