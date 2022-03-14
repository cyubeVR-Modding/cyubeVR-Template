#pragma once
#include "CoreMinimal.h"
#include "UpdateSessionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateSessionDelegate, bool, bSuccessful, const FString&, Content);

