#pragma once
#include "CoreMinimal.h"
#include "CreateAccountMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCreateAccountMinimalDelegate, bool, bSuccessful, const FString&, Content);

