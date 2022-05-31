#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetOwnedGamesDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetOwnedGamesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetOwnedGames.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetOwnedGames : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetOwnedGamesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetOwnedGamesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetOwnedGames();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

