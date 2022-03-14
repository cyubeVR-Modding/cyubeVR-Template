#pragma once
#include "CoreMinimal.h"
#include "QueryTxnDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQueryTxnDelegate, bool, bSuccessful, const FString&, Content);

