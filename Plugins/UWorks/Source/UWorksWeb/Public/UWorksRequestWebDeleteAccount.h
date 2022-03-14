#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "DeleteAccountDelegateDelegate.h"
#include "DeleteAccountMinimalDelegateDelegate.h"
#include "UWorksRequestWebDeleteAccount.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteAccountDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteAccountMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteAccount();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

