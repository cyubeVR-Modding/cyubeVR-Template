#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "SetUserStatsForGameDelegateDelegate.h"
#include "SetUserStatsForGameMinimalDelegateDelegate.h"
#include "UWorksRequestWebSetUserStatsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetUserStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetUserStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetUserStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetUserStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

