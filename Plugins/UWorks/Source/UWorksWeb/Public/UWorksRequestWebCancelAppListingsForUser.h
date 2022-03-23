#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CancelAppListingsForUserDelegateDelegate.h"
#include "CancelAppListingsForUserMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebCancelAppListingsForUser.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCancelAppListingsForUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCancelAppListingsForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCancelAppListingsForUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

