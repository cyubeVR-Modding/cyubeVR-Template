#pragma once
#include "CoreMinimal.h"
#include "RefundTxnMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRefundTxnMinimalDelegate, bool, bSuccessful, const FString&, Content);

