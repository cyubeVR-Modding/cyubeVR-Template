#pragma once
#include "CoreMinimal.h"
#include "GetSteamLevelDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetSteamLevelDelegate, bool, bSuccessful, const FString&, Content);

