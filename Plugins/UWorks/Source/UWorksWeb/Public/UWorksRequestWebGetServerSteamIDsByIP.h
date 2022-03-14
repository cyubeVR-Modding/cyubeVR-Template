#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetServerSteamIDsByIPDelegateDelegate.h"
#include "GetServerSteamIDsByIPMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetServerSteamIDsByIP.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetServerSteamIDsByIP : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerSteamIDsByIPDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerSteamIDsByIPMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServerSteamIDsByIP();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& ServerIPs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

