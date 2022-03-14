#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "StartTradeDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "StartTradeNode.generated.h"

class UStartTradeNode;

UCLASS()
class UWORKSWEB_API UStartTradeNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartTradeDelegate Completed;
    
    UStartTradeNode();
    UFUNCTION(BlueprintCallable)
    static UStartTradeNode* StartTradeNode(const FString& Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

