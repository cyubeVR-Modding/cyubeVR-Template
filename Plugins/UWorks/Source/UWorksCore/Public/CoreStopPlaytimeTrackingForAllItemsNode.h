#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingForAllItemsDelegateDelegate.h"
#include "CoreStopPlaytimeTrackingForAllItemsNode.generated.h"

class UCoreStopPlaytimeTrackingForAllItemsNode;

UCLASS()
class UWORKSCORE_API UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingForAllItemsDelegate Completed;
    
    UCoreStopPlaytimeTrackingForAllItemsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStopPlaytimeTrackingForAllItemsNode* StopPlaytimeTrackingForAllItemsNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

