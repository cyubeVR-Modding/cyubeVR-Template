#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetGlobalStatsForGameDelegateDelegate.h"
#include "GetGlobalStatsForGameMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetGlobalStatsForGame.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetGlobalStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGlobalStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGlobalStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetGlobalStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

