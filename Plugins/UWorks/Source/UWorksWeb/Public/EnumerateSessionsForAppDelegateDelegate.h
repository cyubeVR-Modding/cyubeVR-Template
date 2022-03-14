#pragma once
#include "CoreMinimal.h"
#include "EnumerateSessionsForAppDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnumerateSessionsForAppDelegate, bool, bSuccessful, const FString&, Content);

