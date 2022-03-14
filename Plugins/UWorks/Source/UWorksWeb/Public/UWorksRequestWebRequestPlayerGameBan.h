#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "RequestPlayerGameBanDelegateDelegate.h"
#include "RequestPlayerGameBanMinimalDelegateDelegate.h"
#include "UWorksRequestWebRequestPlayerGameBan.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRequestPlayerGameBan : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestPlayerGameBanDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestPlayerGameBanMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestPlayerGameBan();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

