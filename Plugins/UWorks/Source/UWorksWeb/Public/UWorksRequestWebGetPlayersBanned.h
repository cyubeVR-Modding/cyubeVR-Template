#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPlayersBannedDelegateDelegate.h"
#include "GetPlayersBannedMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPlayersBanned.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPlayersBanned : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayersBannedDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayersBannedMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayersBanned();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

