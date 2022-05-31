#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CanTradeDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CanTradeNode.generated.h"

class UCanTradeNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UCanTradeNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanTradeDelegate Completed;
    
    UCanTradeNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCanTradeNode* CanTradeNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);
    
};

