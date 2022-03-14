#pragma once
#include "CoreMinimal.h"
#include "FlushInventoryCacheMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFlushInventoryCacheMinimalDelegate, bool, bSuccessful, const FString&, Content);

