#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UnsubscribeItemDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreUnsubscribeItemNode.generated.h"

class UCoreUnsubscribeItemNode;

UCLASS()
class UWORKSCORE_API UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUnsubscribeItemDelegate Completed;
    
    UCoreUnsubscribeItemNode();
    UFUNCTION(BlueprintCallable)
    static UCoreUnsubscribeItemNode* UnsubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    
};

