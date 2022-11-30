#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetQuantityDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksSteamItemDef.h"
#include "GetQuantityNode.generated.h"

class UGetQuantityNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetQuantityNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetQuantityDelegate Completed;
    
    UGetQuantityNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetQuantityNode* GetQuantityNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
    
};

