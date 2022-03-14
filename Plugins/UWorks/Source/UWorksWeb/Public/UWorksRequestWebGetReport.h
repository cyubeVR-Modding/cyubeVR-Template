#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetReportDelegateDelegate.h"
#include "GetReportMinimalDelegateDelegate.h"
#include "EUWorksReportType.h"
#include "UWorksRequestWebGetReport.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetReport : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetReportDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetReportMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetReport();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Time, EUWorksReportType Type, int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

