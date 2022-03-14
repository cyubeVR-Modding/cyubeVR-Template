#pragma once
#include "CoreMinimal.h"
#include "GetPriceSheetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPriceSheetDelegate, bool, bSuccessful, const FString&, Content);

