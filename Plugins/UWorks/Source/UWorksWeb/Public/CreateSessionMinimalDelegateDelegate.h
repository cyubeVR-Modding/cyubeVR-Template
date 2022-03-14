#pragma once
#include "CoreMinimal.h"
#include "CreateSessionMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCreateSessionMinimalDelegate, bool, bSuccessful, const FString&, Content);

