#pragma once
#include "CoreMinimal.h"
#include "EnumerateSessionsForAppMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FEnumerateSessionsForAppMinimalDelegate, bool, bSuccessful, const FString&, Content);

