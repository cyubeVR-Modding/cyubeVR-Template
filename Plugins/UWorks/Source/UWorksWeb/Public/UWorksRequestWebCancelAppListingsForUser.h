#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "CancelAppListingsForUserDelegateDelegate.h"
#include "CancelAppListingsForUserMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebCancelAppListingsForUser.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAppListingsForUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAppListingsForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCancelAppListingsForUser();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

