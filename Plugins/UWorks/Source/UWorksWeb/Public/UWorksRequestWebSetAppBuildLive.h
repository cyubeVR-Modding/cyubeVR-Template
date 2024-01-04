#pragma once
#include "CoreMinimal.h"
#include "SetAppBuildLiveDelegateDelegate.h"
#include "SetAppBuildLiveMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebSetAppBuildLive.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSetAppBuildLive : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetAppBuildLiveDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetAppBuildLiveMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetAppBuildLive();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

