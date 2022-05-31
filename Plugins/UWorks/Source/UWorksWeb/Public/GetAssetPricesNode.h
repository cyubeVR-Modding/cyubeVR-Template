#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAssetPricesDelegateDelegate.h"
#include "GetAssetPricesNode.generated.h"

class UGetAssetPricesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAssetPricesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAssetPricesDelegate Completed;
    
    UGetAssetPricesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAssetPricesNode* GetAssetPricesNode(const FString& Key, int32 AppID, const FString& Currency, const FString& Language);
    
};

