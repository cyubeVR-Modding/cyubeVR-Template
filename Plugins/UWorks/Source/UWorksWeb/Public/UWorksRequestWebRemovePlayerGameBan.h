#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "RemovePlayerGameBanDelegateDelegate.h"
#include "RemovePlayerGameBanMinimalDelegateDelegate.h"
#include "UWorksRequestWebRemovePlayerGameBan.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRemovePlayerGameBan : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRemovePlayerGameBanDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRemovePlayerGameBanMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRemovePlayerGameBan();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

