#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FlushContextCacheDelegateDelegate.h"
#include "FlushContextCacheMinimalDelegateDelegate.h"
#include "UWorksRequestWebFlushContextCache.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlushContextCacheDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlushContextCacheMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFlushContextCache();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

