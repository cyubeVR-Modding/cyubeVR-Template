#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FlushAssetAppearanceCacheDelegateDelegate.h"
#include "FlushAssetAppearanceCacheNode.generated.h"

class UFlushAssetAppearanceCacheNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UFlushAssetAppearanceCacheNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlushAssetAppearanceCacheDelegate Completed;
    
    UFlushAssetAppearanceCacheNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFlushAssetAppearanceCacheNode* FlushAssetAppearanceCacheNode(const FString& Key, int32 AppID);
    
};

