#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "FlushInventoryCacheDelegateDelegate.h"
#include "FlushInventoryCacheMinimalDelegateDelegate.h"
#include "UWorksRequestWebFlushInventoryCache.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebFlushInventoryCache : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlushInventoryCacheDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlushInventoryCacheMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFlushInventoryCache();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

