#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "FlushInventoryCacheDelegateDelegate.h"
#include "FlushInventoryCacheNode.generated.h"

class UFlushInventoryCacheNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UFlushInventoryCacheNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlushInventoryCacheDelegate Completed;
    
    UFlushInventoryCacheNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFlushInventoryCacheNode* FlushInventoryCacheNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
};

