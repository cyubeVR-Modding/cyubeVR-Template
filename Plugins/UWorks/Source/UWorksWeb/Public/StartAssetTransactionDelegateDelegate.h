#pragma once
#include "CoreMinimal.h"
#include "StartAssetTransactionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartAssetTransactionDelegate, bool, bSuccessful, const FString&, Content);

