#pragma once
#include "CoreMinimal.h"
#include "AttachLeaderboardUGCDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UWorksSteamLeaderboard.h"
#include "AttachLeaderboardUGCMinimalDelegateDelegate.h"
#include "UWorksUGCHandle.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreAttachLeaderboardUGC.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttachLeaderboardUGCDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

