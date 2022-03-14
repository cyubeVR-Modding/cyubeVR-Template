#pragma once
#include "CoreMinimal.h"
#include "GetBadgesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetBadgesMinimalDelegate, bool, bSuccessful, const FString&, Content);

