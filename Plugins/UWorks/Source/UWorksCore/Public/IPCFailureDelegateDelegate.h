#pragma once
#include "CoreMinimal.h"
#include "EUWorksFailureType.h"
#include "IPCFailureDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIPCFailureDelegate, EUWorksFailureType, FailureType);

