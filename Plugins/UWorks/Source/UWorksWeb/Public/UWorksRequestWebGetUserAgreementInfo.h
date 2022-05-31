#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "GetUserAgreementInfoDelegateDelegate.h"
#include "GetUserAgreementInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetUserAgreementInfo.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserAgreementInfoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserAgreementInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserAgreementInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

