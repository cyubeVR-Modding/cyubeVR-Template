#pragma once
#include "CoreMinimal.h"
#include "GetNewsForAppMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetNewsForAppMinimalDelegate, bool, bSuccessful, const FString&, Content);

