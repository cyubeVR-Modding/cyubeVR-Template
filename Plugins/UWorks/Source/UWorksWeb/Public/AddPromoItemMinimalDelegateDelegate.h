#pragma once
#include "CoreMinimal.h"
#include "AddPromoItemMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAddPromoItemMinimalDelegate, bool, bSuccessful, const FString&, Content);

