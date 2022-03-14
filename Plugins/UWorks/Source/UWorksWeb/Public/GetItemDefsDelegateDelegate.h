#pragma once
#include "CoreMinimal.h"
#include "GetItemDefsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetItemDefsDelegate, bool, bSuccessful, const FString&, Content);

