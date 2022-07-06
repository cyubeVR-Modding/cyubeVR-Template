#pragma once
#include "CoreMinimal.h"
#include "ResetLeaderboardMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "ResetLeaderboardDelegateDelegate.h"
#include "UWorksRequestWebResetLeaderboard.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebResetLeaderboard : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebResetLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 LeaderboardID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

