#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FlushAssetAppearanceCacheDelegateDelegate.h"
#include "FlushAssetAppearanceCacheMinimalDelegateDelegate.h"
#include "UWorksRequestWebFlushAssetAppearanceCache.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebFlushAssetAppearanceCache : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlushAssetAppearanceCacheDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlushAssetAppearanceCacheMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFlushAssetAppearanceCache();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

