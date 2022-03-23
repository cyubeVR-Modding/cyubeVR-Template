#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "StartPlaytimeTrackingDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CoreStartPlaytimeTrackingNode.generated.h"

class UCoreStartPlaytimeTrackingNode;

UCLASS()
class UWORKSCORE_API UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartPlaytimeTrackingDelegate Completed;
    
    UCoreStartPlaytimeTrackingNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStartPlaytimeTrackingNode* StartPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

