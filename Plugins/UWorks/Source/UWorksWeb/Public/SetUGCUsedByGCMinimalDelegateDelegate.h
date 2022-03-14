#pragma once
#include "CoreMinimal.h"
#include "SetUGCUsedByGCMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetUGCUsedByGCMinimalDelegate, bool, bSuccessful, const FString&, Content);

