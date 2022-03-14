#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ResetLeaderboardDelegateDelegate.h"
#include "ResetLeaderboardMinimalDelegateDelegate.h"
#include "UWorksRequestWebResetLeaderboard.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebResetLeaderboard : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResetLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResetLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebResetLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 LeaderboardID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

