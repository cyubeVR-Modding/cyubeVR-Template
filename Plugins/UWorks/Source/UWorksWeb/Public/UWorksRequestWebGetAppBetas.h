#pragma once
#include "CoreMinimal.h"
#include "GetAppBetasDelegateDelegate.h"
#include "GetAppBetasMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetAppBetas.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetAppBetas : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppBetasDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppBetasMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppBetas();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

