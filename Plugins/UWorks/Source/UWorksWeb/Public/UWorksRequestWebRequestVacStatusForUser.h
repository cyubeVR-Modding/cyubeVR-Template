#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "RequestVacStatusForUserDelegateDelegate.h"
#include "RequestVacStatusForUserMinimalDelegateDelegate.h"
#include "UWorksRequestWebRequestVacStatusForUser.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestVacStatusForUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestVacStatusForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestVacStatusForUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

