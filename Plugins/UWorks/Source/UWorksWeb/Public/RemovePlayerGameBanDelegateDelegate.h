#pragma once
#include "CoreMinimal.h"
#include "RemovePlayerGameBanDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRemovePlayerGameBanDelegate, bool, bSuccessful, const FString&, Content);

