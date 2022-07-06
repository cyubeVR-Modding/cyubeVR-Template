#pragma once
#include "CoreMinimal.h"
#include "GetGameServerPlayerStatsForGameDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetGameServerPlayerStatsForGameMinimalDelegateDelegate.h"
#include "UWorksGameID.h"
#include "UWorksRequestWebGetGameServerPlayerStatsForGame.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGameServerPlayerStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGameServerPlayerStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetGameServerPlayerStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksGameID GameID, int32 AppID, const FString& RangeStart, const FString& RangeEnd, int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

