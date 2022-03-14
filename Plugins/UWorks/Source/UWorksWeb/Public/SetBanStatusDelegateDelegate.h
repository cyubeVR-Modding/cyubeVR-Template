#pragma once
#include "CoreMinimal.h"
#include "SetBanStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetBanStatusDelegate, bool, bSuccessful, const FString&, Content);

