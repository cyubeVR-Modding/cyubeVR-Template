#pragma once
#include "CoreMinimal.h"
#include "FlushAssetAppearanceCacheDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlushAssetAppearanceCacheDelegate, bool, bSuccessful, const FString&, Content);

