#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "RequestVacStatusForUserDelegateDelegate.h"
#include "RequestVacStatusForUserMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebRequestVacStatusForUser.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestVacStatusForUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestVacStatusForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestVacStatusForUser();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

