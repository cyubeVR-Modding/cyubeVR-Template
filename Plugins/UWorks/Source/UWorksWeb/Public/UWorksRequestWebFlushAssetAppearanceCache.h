#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FlushAssetAppearanceCacheDelegateDelegate.h"
#include "FlushAssetAppearanceCacheMinimalDelegateDelegate.h"
#include "UWorksRequestWebFlushAssetAppearanceCache.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebFlushAssetAppearanceCache : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlushAssetAppearanceCacheDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlushAssetAppearanceCacheMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFlushAssetAppearanceCache();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

