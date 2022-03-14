#pragma once
#include "CoreMinimal.h"
#include "RequestPlayerGameBanMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestPlayerGameBanMinimalDelegate, bool, bSuccessful, const FString&, Content);

