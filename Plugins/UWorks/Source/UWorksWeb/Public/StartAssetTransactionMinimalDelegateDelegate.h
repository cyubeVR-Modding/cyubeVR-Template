#pragma once
#include "CoreMinimal.h"
#include "StartAssetTransactionMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FStartAssetTransactionMinimalDelegate, bool, bSuccessful, const FString&, Content);

