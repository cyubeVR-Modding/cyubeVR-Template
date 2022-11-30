#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksLeaderboardSortMethod.h"
#include "FindOrCreateLeaderboardDelegateDelegate.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.h"
#include "EUWorksLeaderboardDisplayType.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksRequestCoreFindOrCreateLeaderboard.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindOrCreateLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

