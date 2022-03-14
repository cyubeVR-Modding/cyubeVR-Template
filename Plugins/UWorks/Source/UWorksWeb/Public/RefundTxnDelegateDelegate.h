#pragma once
#include "CoreMinimal.h"
#include "RefundTxnDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRefundTxnDelegate, bool, bSuccessful, const FString&, Content);

