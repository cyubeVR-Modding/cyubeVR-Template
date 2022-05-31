#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "DeleteAccountDelegateDelegate.h"
#include "DeleteAccountMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebDeleteAccount.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteAccountDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteAccountMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteAccount();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

