#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingDelegateDelegate.h"
#include "StopPlaytimeTrackingMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UWorksRequestCoreStopPlaytimeTracking.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopPlaytimeTrackingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

