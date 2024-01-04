#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GetUserHistoryDelegateDelegate.h"
#include "GetUserHistoryMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetUserHistory.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserHistoryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserHistoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserHistory();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, int32 StartTime, int32 EndTime);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

