#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FlushContextCacheDelegateDelegate.h"
#include "FlushContextCacheMinimalDelegateDelegate.h"
#include "UWorksRequestWebFlushContextCache.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlushContextCacheDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlushContextCacheMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFlushContextCache();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

