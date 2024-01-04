#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SupportGetAssetHistoryDelegateDelegate.h"
#include "SupportGetAssetHistoryNode.generated.h"

class USupportGetAssetHistoryNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USupportGetAssetHistoryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupportGetAssetHistoryDelegate Completed;
    
    USupportGetAssetHistoryNode();

    UFUNCTION(BlueprintCallable)
    static USupportGetAssetHistoryNode* SupportGetAssetHistoryNode(const FString& Key, int32 AppID, const FString& AssetID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

