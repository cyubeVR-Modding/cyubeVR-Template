#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamInventoryResult.h"
#include "SteamInventoryFullUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamInventoryFullUpdateDelegate, FUWorksSteamInventoryResult, Handle);

