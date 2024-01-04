#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "CancelAgreementDelegateDelegate.h"
#include "CancelAgreementMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebCancelAgreement.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebCancelAgreement : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAgreementDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAgreementMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCancelAgreement();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

