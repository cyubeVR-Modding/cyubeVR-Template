#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.h"
#include "PlayersDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayersDelegate, const TArray<FUWorksPlayerInfo>&, Players);

