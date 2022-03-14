#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.h"
#include "PlayersMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPlayersMinimalDelegate, const TArray<FUWorksPlayerInfo>&, Players);

