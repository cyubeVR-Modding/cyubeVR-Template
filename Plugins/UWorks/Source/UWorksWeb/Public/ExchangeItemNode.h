#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ExchangeItemDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksSteamItemDef.h"
#include "ExchangeItemNode.generated.h"

class UExchangeItemNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UExchangeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExchangeItemDelegate Completed;
    
    UExchangeItemNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UExchangeItemNode* ExchangeItemNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID);
    
};

