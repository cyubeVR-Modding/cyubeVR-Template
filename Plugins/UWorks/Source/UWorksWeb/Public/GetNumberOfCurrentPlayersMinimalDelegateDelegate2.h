#pragma once
#include "CoreMinimal.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetNumberOfCurrentPlayersMinimalDelegate, bool, bSuccessful, const FString&, Content);

