#pragma once
#include "CoreMinimal.h"
#include "CreateWorkshopItemResult.h"
#include "SteamDelegateOnCreateWorkshopItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnCreateWorkshopItem, FCreateWorkshopItemResult, Result);

