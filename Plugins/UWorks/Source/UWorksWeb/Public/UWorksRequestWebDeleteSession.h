#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "DeleteSessionMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebDeleteSession.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebDeleteSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

