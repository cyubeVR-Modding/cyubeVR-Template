#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "StartPlaytimeTrackingDelegateDelegate.h"
#include "CoreStartPlaytimeTrackingNode.generated.h"

class UCoreStartPlaytimeTrackingNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartPlaytimeTrackingDelegate Completed;
    
    UCoreStartPlaytimeTrackingNode();

    UFUNCTION(BlueprintCallable)
    static UCoreStartPlaytimeTrackingNode* StartPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

