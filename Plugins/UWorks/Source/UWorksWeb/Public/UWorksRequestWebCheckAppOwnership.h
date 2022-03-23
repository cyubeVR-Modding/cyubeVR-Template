#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CheckAppOwnershipDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CheckAppOwnershipMinimalDelegateDelegate.h"
#include "UWorksRequestWebCheckAppOwnership.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCheckAppOwnership : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCheckAppOwnershipDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCheckAppOwnershipMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCheckAppOwnership();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

