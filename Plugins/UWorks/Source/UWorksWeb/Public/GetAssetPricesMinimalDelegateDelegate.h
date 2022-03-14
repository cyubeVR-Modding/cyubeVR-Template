#pragma once
#include "CoreMinimal.h"
#include "GetAssetPricesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAssetPricesMinimalDelegate, bool, bSuccessful, const FString&, Content);

