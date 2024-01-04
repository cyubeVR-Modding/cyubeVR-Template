#pragma once
#include "CoreMinimal.h"
#include "CreateWorkshopItemResultCustom.h"
#include "SteamDelegateOnCreateWorkshopItemCustomDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnCreateWorkshopItemCustom, FCreateWorkshopItemResultCustom, Result);

