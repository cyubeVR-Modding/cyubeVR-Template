#pragma once
#include "CoreMinimal.h"
#include "GetAppBuildsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAppBuildsMinimalDelegate, bool, bSuccessful, const FString&, Content);

