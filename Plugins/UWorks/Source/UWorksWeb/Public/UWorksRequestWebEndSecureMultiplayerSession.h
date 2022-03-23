#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "EndSecureMultiplayerSessionDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "EndSecureMultiplayerSessionMinimalDelegateDelegate.h"
#include "UWorksRequestWebEndSecureMultiplayerSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebEndSecureMultiplayerSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEndSecureMultiplayerSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEndSecureMultiplayerSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebEndSecureMultiplayerSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

