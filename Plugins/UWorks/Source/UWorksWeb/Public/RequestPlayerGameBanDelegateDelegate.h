#pragma once
#include "CoreMinimal.h"
#include "RequestPlayerGameBanDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestPlayerGameBanDelegate, bool, bSuccessful, const FString&, Content);

