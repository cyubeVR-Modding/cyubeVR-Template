#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "GetCheatingReportsDelegateDelegate.h"
#include "GetCheatingReportsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetCheatingReports.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetCheatingReports : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetCheatingReportsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetCheatingReportsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCheatingReports();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

