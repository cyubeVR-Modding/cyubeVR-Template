#pragma once
#include "CoreMinimal.h"
#include "StopPlaytimeTrackingForAllItemsDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "CoreStopPlaytimeTrackingForAllItemsNode.generated.h"

class UCoreStopPlaytimeTrackingForAllItemsNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingForAllItemsDelegate Completed;
    
    UCoreStopPlaytimeTrackingForAllItemsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStopPlaytimeTrackingForAllItemsNode* StopPlaytimeTrackingForAllItemsNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

