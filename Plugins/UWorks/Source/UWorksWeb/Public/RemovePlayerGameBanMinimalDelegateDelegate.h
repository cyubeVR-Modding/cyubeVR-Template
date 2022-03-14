#pragma once
#include "CoreMinimal.h"
#include "RemovePlayerGameBanMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRemovePlayerGameBanMinimalDelegate, bool, bSuccessful, const FString&, Content);

