#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "SteamDelegateOnSubscribeUnsubscribeWorkshopItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnSubscribeUnsubscribeWorkshopItem, FGeneralWorkshopItemResult, Result);

