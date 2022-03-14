#pragma once
#include "CoreMinimal.h"
#include "GetCommunityBadgeProgressMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetCommunityBadgeProgressMinimalDelegate, bool, bSuccessful, const FString&, Content);

