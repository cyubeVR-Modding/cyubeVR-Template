#pragma once
#include "CoreMinimal.h"
#include "ProcessAgreementMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "ProcessAgreementDelegateDelegate.h"
#include "UWorksRequestWebProcessAgreement.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProcessAgreementDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProcessAgreementMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebProcessAgreement();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, int32 Amount, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

