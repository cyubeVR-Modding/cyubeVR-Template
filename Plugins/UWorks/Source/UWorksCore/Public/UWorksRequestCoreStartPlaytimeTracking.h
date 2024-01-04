#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "StartPlaytimeTrackingDelegateDelegate.h"
#include "StartPlaytimeTrackingMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UWorksRequestCoreStartPlaytimeTracking.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartPlaytimeTrackingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

