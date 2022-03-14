#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "StartSecureMultiplayerSessionDelegateDelegate.h"
#include "StartSecureMultiplayerSessionMinimalDelegateDelegate.h"
#include "UWorksRequestWebStartSecureMultiplayerSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebStartSecureMultiplayerSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartSecureMultiplayerSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartSecureMultiplayerSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebStartSecureMultiplayerSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

