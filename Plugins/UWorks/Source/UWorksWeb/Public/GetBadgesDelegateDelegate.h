#pragma once
#include "CoreMinimal.h"
#include "GetBadgesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetBadgesDelegate, bool, bSuccessful, const FString&, Content);

