#pragma once
#include "CoreMinimal.h"
#include "StopPlaytimeTrackingForAllItemsMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "StopPlaytimeTrackingForAllItemsDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreStopPlaytimeTrackingForAllItems.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStopPlaytimeTrackingForAllItems : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingForAllItemsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingForAllItemsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStopPlaytimeTrackingForAllItems();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

