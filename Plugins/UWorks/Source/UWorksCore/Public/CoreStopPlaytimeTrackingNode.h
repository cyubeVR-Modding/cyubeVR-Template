#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "StopPlaytimeTrackingDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "CoreStopPlaytimeTrackingNode.generated.h"

class UCoreStopPlaytimeTrackingNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreStopPlaytimeTrackingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingDelegate Completed;
    
    UCoreStopPlaytimeTrackingNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStopPlaytimeTrackingNode* StopPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

