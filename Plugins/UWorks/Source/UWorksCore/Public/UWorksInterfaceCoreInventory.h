#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "SteamInventoryResultReadyDelegateDelegate.h"
#include "SteamInventoryFullUpdateDelegateDelegate.h"
#include "SteamInventoryDefinitionUpdateDelegateDelegate.h"
#include "UWorksSteamItemDef.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksSteamInventoryResult.h"
#include "UWorksSteamID.h"
#include "RequestEligiblePromoItemDefinitionsIDsMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksSteamItemDetails.h"
#include "UWorksInterfaceCoreInventory.generated.h"

class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs;
class UUWorksInterfaceCoreInventory;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreInventory : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamInventoryResultReadyDelegate SteamInventoryResultReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamInventoryFullUpdateDelegate SteamInventoryFullUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamInventoryDefinitionUpdateDelegate SteamInventoryDefinitionUpdate;
    
    UUWorksInterfaceCoreInventory();
    UFUNCTION(BlueprintCallable)
    bool TriggerItemDrop(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool TransferItemQuantity(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemSourceInstanceID, int32 ItemSourceQuantity, FUWorksSteamItemInstanceID ItemDestinationInstanceID);
    
    UFUNCTION(BlueprintCallable)
    bool TradeItems(FUWorksSteamInventoryResult& Handle, FUWorksSteamID SteamIDTradePartner, TArray<FUWorksSteamItemInstanceID> ItemsGiven, TArray<int32> ItemsGivenQuantities, TArray<FUWorksSteamItemInstanceID> ItemsReceived, TArray<int32> ItemsReceivedQuantities);
    
    UFUNCTION(BlueprintCallable)
    bool SerializeResult(FUWorksSteamInventoryResult Handle, TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    void RequestEligiblePromoItemDefinitionsIDsMinimal(const FRequestEligiblePromoItemDefinitionsIDsMinimalDelegate& Completed, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDs();
    
    UFUNCTION(BlueprintCallable)
    bool LoadItemDefinitions();
    
    UFUNCTION(BlueprintCallable)
    bool GrantPromoItems(FUWorksSteamInventoryResult& Handle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetResultTimestamp(FUWorksSteamInventoryResult Handle);
    
    UFUNCTION(BlueprintCallable)
    EUWorksResult GetResultStatus(FUWorksSteamInventoryResult Handle);
    
    UFUNCTION(BlueprintCallable)
    bool GetResultItems(FUWorksSteamInventoryResult Handle, TArray<FUWorksSteamItemDetails>& items);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemsByID(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemInstanceID> InstanceIDs);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemDefinitionPropertyValue(FUWorksSteamItemDef ItemDefinition, const FString& PropertyName, FString& PropertyValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemDefinitionPropertiesNames(FUWorksSteamItemDef ItemDefinition, TArray<FString>& PropertiesNames);
    
    UFUNCTION(BlueprintCallable)
    bool GetItemDefinitionIDs(TArray<FUWorksSteamItemDef>& ItemDefinitions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreInventory* GetInventory();
    
    UFUNCTION(BlueprintCallable)
    bool GetEligiblePromoItemDefinitionIDs(FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef>& ItemDefinitions);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllItems(FUWorksSteamInventoryResult& Handle);
    
    UFUNCTION(BlueprintCallable)
    bool GenerateItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions, TArray<int32> ItemQuantities);
    
    UFUNCTION(BlueprintCallable)
    bool ExchangeItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemsGenerated, TArray<int32> ItemsGeneratedQuantities, TArray<FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int32> ItemsDestroyedQuantities);
    
    UFUNCTION(BlueprintCallable)
    void DestroyResult(FUWorksSteamInventoryResult Handle);
    
    UFUNCTION(BlueprintCallable)
    bool DeserializeResult(FUWorksSteamInventoryResult& Handle, TArray<uint8> Buffer, bool bReservedMustBeFalse);
    
    UFUNCTION(BlueprintCallable)
    bool ConsumeItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemInstanceID, int32 ItemQuantity);
    
    UFUNCTION(BlueprintCallable)
    bool CheckResultSteamID(FUWorksSteamInventoryResult Handle, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool AddPromoItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions);
    
    UFUNCTION(BlueprintCallable)
    bool AddPromoItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);
    
};

