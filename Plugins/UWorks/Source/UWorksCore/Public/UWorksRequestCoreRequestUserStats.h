#pragma once
#include "CoreMinimal.h"
#include "RequestUserStatsMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "RequestUserStatsDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksGameID.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestUserStats.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestUserStats : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestUserStatsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestUserStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestUserStats();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result, FUWorksSteamID& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

