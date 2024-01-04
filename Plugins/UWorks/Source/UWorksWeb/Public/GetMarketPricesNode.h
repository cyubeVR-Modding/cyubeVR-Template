#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetMarketPricesDelegateDelegate.h"
#include "GetMarketPricesNode.generated.h"

class UGetMarketPricesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetMarketPricesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMarketPricesDelegate Completed;
    
    UGetMarketPricesNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetMarketPricesNode* GetMarketPricesNode(const FString& Key, int32 AppID);
    
};

