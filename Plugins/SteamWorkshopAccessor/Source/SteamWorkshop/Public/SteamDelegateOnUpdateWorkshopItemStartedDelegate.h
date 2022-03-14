#pragma once
#include "CoreMinimal.h"
#include "SteamUGCUpdateHandle.h"
#include "SteamDelegateOnUpdateWorkshopItemStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSteamDelegateOnUpdateWorkshopItemStarted, FSteamUGCUpdateHandle, updateHandle);

