#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetTradeOfferDelegateDelegate.h"
#include "GetTradeOfferNode.generated.h"

class UGetTradeOfferNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetTradeOfferNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeOfferDelegate Completed;
    
    UGetTradeOfferNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetTradeOfferNode* GetTradeOfferNode(const FString& Key, const FString& TradeOfferID, const FString& Language);
    
};

