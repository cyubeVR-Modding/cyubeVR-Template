#pragma once
#include "CoreMinimal.h"
#include "FlushAssetAppearanceCacheMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFlushAssetAppearanceCacheMinimalDelegate, bool, bSuccessful, const FString&, Content);

