#pragma once
#include "CoreMinimal.h"
#include "CheckAppOwnershipMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCheckAppOwnershipMinimalDelegate, bool, bSuccessful, const FString&, Content);

