#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "IsPlayingSharedGameDelegateDelegate.h"
#include "IsPlayingSharedGameMinimalDelegateDelegate.h"
#include "UWorksRequestWebIsPlayingSharedGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebIsPlayingSharedGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIsPlayingSharedGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIsPlayingSharedGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebIsPlayingSharedGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

