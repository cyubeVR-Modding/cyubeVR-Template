#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "StartPlaytimeTrackingMinimalDelegateDelegate.h"
#include "StartPlaytimeTrackingDelegateDelegate.h"
#include "UWorksRequestCoreStartPlaytimeTracking.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartPlaytimeTrackingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartPlaytimeTrackingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStartPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

