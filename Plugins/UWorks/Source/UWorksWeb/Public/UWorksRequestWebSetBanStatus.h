#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetBanStatusDelegateDelegate.h"
#include "SetBanStatusMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebSetBanStatus.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetBanStatusDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetBanStatusMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetBanStatus();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

