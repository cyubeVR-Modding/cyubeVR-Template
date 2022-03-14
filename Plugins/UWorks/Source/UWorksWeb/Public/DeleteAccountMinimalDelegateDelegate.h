#pragma once
#include "CoreMinimal.h"
#include "DeleteAccountMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDeleteAccountMinimalDelegate, bool, bSuccessful, const FString&, Content);

