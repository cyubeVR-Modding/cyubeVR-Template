#pragma once
#include "CoreMinimal.h"
#include "InitTxnMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FInitTxnMinimalDelegate, bool, bSuccessful, const FString&, Content);

