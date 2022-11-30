#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamInventoryResult.h"
#include "SteamInventoryResultReadyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSteamInventoryResultReadyDelegate, FUWorksSteamInventoryResult, Handle, EUWorksResult, Result);

