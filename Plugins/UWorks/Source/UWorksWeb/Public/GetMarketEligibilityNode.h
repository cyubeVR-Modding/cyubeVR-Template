#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetMarketEligibilityDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetMarketEligibilityNode.generated.h"

class UGetMarketEligibilityNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetMarketEligibilityNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMarketEligibilityDelegate Completed;
    
    UGetMarketEligibilityNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetMarketEligibilityNode* GetMarketEligibilityNode(const FString& Key, FUWorksSteamID SteamID);
    
};

