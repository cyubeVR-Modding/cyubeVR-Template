#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "DownloadClanActivityCountsDelegateDelegate.h"
#include "DownloadClanActivityCountsMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreDownloadClanActivityCounts.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreDownloadClanActivityCounts : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadClanActivityCountsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadClanActivityCountsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreDownloadClanActivityCounts();
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<FUWorksSteamID> SteamIDClans);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

