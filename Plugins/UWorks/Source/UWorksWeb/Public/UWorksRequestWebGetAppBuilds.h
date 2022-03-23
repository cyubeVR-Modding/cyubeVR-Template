#pragma once
#include "CoreMinimal.h"
#include "GetAppBuildsMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetAppBuildsDelegateDelegate.h"
#include "UWorksRequestWebGetAppBuilds.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAppBuilds : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppBuildsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppBuildsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppBuilds();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

