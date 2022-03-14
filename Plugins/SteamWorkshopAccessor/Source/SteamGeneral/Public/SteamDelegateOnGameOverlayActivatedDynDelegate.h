#pragma once
#include "CoreMinimal.h"
#include "SteamDelegateOnGameOverlayActivatedDynDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSteamDelegateOnGameOverlayActivatedDyn, bool, bActive);

