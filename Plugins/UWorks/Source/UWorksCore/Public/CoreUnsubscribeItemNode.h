#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "UnsubscribeItemDelegateDelegate.h"
#include "CoreUnsubscribeItemNode.generated.h"

class UCoreUnsubscribeItemNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnsubscribeItemDelegate Completed;
    
    UCoreUnsubscribeItemNode();

    UFUNCTION(BlueprintCallable)
    static UCoreUnsubscribeItemNode* UnsubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    
};

