#pragma once
#include "CoreMinimal.h"
#include "pvrFStringDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FpvrFStringDelegate, const FString&, pvrStr);

