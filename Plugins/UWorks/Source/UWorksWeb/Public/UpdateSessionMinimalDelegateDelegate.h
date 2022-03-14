#pragma once
#include "CoreMinimal.h"
#include "UpdateSessionMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FUpdateSessionMinimalDelegate, bool, bSuccessful, const FString&, Content);

