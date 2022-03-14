#pragma once
#include "CoreMinimal.h"
#include "GetUGCFileDetailsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetUGCFileDetailsMinimalDelegate, bool, bSuccessful, const FString&, Content);

