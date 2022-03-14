#pragma once
#include "CoreMinimal.h"
#include "GetSteamLevelMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetSteamLevelMinimalDelegate, bool, bSuccessful, const FString&, Content);

