#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "GetRecentlyPlayedGamesDelegateDelegate.h"
#include "GetRecentlyPlayedGamesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetRecentlyPlayedGames.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetRecentlyPlayedGamesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetRecentlyPlayedGamesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetRecentlyPlayedGames();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

