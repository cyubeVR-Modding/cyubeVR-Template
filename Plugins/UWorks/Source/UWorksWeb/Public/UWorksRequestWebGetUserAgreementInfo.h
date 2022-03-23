#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetUserAgreementInfoDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetUserAgreementInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetUserAgreementInfo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserAgreementInfoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserAgreementInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserAgreementInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

