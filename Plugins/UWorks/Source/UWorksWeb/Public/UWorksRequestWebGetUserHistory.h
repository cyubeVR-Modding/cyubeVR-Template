#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetUserHistoryDelegateDelegate.h"
#include "GetUserHistoryMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebGetUserHistory.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserHistoryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserHistoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserHistory();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, int32 StartTime, int32 EndTime);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

