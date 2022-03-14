#pragma once
#include "CoreMinimal.h"
#include "StartTradeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartTradeDelegate, bool, bSuccessful, const FString&, Content);

