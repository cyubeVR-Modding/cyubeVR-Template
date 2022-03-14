#pragma once
#include "CoreMinimal.h"
#include "SupportGetAssetHistoryMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSupportGetAssetHistoryMinimalDelegate, bool, bSuccessful, const FString&, Content);

