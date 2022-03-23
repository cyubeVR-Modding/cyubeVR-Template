#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "EUWorksLeaderboardSortMethod.h"
#include "EUWorksLeaderboardDisplayType.h"
#include "UWorksRequestCoreFindOrCreateLeaderboard.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFindOrCreateLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFindOrCreateLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreFindOrCreateLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

