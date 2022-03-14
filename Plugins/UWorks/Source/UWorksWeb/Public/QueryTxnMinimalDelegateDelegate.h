#pragma once
#include "CoreMinimal.h"
#include "QueryTxnMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FQueryTxnMinimalDelegate, bool, bSuccessful, const FString&, Content);

