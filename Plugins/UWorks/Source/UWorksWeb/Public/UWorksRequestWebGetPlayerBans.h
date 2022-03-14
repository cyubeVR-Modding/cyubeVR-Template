#pragma once
#include "CoreMinimal.h"
#include "GetPlayerBansMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetPlayerBansDelegateDelegate.h"
#include "UWorksRequestWebGetPlayerBans.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPlayerBans : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerBansDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerBansMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayerBans();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

