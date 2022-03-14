#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "GetSteamLevelDelegateDelegate.h"
#include "GetSteamLevelMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetSteamLevel.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetSteamLevelDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetSteamLevelMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetSteamLevel();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

