#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SubscribeItemDelegateDelegate.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "CoreSubscribeItemNode.generated.h"

class UCoreSubscribeItemNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreSubscribeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubscribeItemDelegate Completed;
    
    UCoreSubscribeItemNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSubscribeItemNode* SubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    
};

