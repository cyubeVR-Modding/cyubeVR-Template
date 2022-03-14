#pragma once
#include "CoreMinimal.h"
#include "GetInventoryDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetInventoryDelegate, bool, bSuccessful, const FString&, Content);

