#pragma once
#include "CoreMinimal.h"
#include "GetPlayersBannedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPlayersBannedDelegate, bool, bSuccessful, const FString&, Content);

