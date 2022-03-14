#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeleteSessionDelegate, bool, bSuccessful, const FString&, Content);

