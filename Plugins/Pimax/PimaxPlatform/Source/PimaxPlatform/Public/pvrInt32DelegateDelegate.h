#pragma once
#include "CoreMinimal.h"
#include "pvrInt32DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FpvrInt32Delegate, int32, pvrint);

