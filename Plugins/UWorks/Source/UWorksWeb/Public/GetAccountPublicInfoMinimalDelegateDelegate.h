#pragma once
#include "CoreMinimal.h"
#include "GetAccountPublicInfoMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAccountPublicInfoMinimalDelegate, bool, bSuccessful, const FString&, Content);

