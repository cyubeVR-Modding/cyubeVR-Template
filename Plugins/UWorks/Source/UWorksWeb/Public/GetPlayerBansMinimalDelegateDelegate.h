#pragma once
#include "CoreMinimal.h"
#include "GetPlayerBansMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPlayerBansMinimalDelegate, bool, bSuccessful, const FString&, Content);

