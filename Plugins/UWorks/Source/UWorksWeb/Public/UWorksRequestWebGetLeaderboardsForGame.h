#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardsForGameDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetLeaderboardsForGameMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetLeaderboardsForGame.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetLeaderboardsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLeaderboardsForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLeaderboardsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetLeaderboardsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

