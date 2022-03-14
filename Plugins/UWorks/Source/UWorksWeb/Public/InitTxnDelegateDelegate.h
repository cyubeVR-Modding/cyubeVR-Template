#pragma once
#include "CoreMinimal.h"
#include "InitTxnDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInitTxnDelegate, bool, bSuccessful, const FString&, Content);

