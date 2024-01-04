#pragma once
#include "CoreMinimal.h"
#include "SteamDelegateOnSubscribeUnsubscribeWorkshopItemCustomDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnSubscribeUnsubscribeWorkshopItemCustom, int32, Result);

