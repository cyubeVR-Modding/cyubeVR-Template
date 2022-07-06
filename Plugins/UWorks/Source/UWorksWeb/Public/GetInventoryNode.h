#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetInventoryDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetInventoryNode.generated.h"

class UGetInventoryNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetInventoryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetInventoryDelegate Completed;
    
    UGetInventoryNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetInventoryNode* GetInventoryNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID);
    
};

