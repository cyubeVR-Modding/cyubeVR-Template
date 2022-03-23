#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetBadgesDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetBadgesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetBadges.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetBadges : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetBadgesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetBadgesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetBadges();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

