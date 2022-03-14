#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "StopPlaytimeTrackingDelegateDelegate.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingMinimalDelegateDelegate.h"
#include "UWorksPublishedFileID.h"
#include "UWorksRequestCoreStopPlaytimeTracking.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStopPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

