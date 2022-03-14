#pragma once
#include "CoreMinimal.h"
#include "GetAppBetasDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetAppBetasMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAppBetas.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAppBetas : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppBetasDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppBetasMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppBetas();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

