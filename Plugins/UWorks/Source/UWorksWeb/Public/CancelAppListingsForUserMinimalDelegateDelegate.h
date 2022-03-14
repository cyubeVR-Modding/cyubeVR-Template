#pragma once
#include "CoreMinimal.h"
#include "CancelAppListingsForUserMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCancelAppListingsForUserMinimalDelegate, bool, bSuccessful, const FString&, Content);

