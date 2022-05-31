#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FlushContextCacheDelegateDelegate.h"
#include "FlushContextCacheNode.generated.h"

class UFlushContextCacheNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UFlushContextCacheNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlushContextCacheDelegate Completed;
    
    UFlushContextCacheNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFlushContextCacheNode* FlushContextCacheNode(const FString& Key, int32 AppID);
    
};

