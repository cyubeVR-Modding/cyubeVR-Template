#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GetRecentlyPlayedGamesDelegateDelegate.h"
#include "GetRecentlyPlayedGamesMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetRecentlyPlayedGames.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetRecentlyPlayedGamesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetRecentlyPlayedGamesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetRecentlyPlayedGames();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

