#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "ResetLoginTokenDelegateDelegate.h"
#include "ResetLoginTokenMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebResetLoginToken.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebResetLoginToken : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetLoginTokenDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetLoginTokenMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebResetLoginToken();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

