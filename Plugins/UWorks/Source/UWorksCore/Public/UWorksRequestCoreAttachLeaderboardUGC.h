#pragma once
#include "CoreMinimal.h"
#include "UWorksUGCHandle.h"
#include "UWorksRequestCore.h"
#include "AttachLeaderboardUGCDelegateDelegate.h"
#include "AttachLeaderboardUGCMinimalDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreAttachLeaderboardUGC.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAttachLeaderboardUGCDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAttachLeaderboardUGCMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreAttachLeaderboardUGC();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamLeaderboard& SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

