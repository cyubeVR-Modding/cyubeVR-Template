#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "ProcessAgreementDelegateDelegate.h"
#include "ProcessAgreementMinimalDelegateDelegate.h"
#include "UWorksRequestWebProcessAgreement.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FProcessAgreementDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FProcessAgreementMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebProcessAgreement();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, int32 Amount, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

