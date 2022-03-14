#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GetUserInfoMinimalDelegateDelegate.h"
#include "GetUserInfoDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetUserInfo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserInfoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& IPAddress);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

