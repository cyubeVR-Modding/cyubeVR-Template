#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "ReportCheatDataDelegateDelegate.h"
#include "ReportCheatDataMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebReportCheatData.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebReportCheatData : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportCheatDataDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportCheatDataMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebReportCheatData();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& PathAndFileName, const FString& WebCheatURL, const FString& TimeNow, const FString& TimeStarted, const FString& TimeStopped, const FString& CheatName, int32 GameProcessID, int32 CheatProcessID, const FString& CheatParamA, const FString& CheatParamB);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

