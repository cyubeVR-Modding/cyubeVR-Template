#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.h"
#include "PlayersUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayersUpdateDelegate, bool, bSuccessful, FUWorksPlayerInfo, Player);

