#pragma once
#include "CoreMinimal.h"
#include "SetItemPaymentRulesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetItemPaymentRulesMinimalDelegate, bool, bSuccessful, const FString&, Content);

