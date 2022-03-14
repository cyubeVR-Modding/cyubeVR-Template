#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionBatchDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeleteSessionBatchDelegate, bool, bSuccessful, const FString&, Content);

