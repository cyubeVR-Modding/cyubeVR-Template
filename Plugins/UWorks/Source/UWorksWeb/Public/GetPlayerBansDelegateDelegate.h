#pragma once
#include "CoreMinimal.h"
#include "GetPlayerBansDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPlayerBansDelegate, bool, bSuccessful, const FString&, Content);

